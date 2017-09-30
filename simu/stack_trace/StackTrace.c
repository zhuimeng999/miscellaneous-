/*
 ============================================================================
 Name        : StackTrace.c
 Author      : Lucius
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "config.h"

#include <windows.h>
#include <DbgHelp.h>
#include <strsafe.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <binutils/bfd.h>
#include <libelf/libelf.h>
#include "exception_msg.h"
#include "simu_task.h"
#include "Avrt.h"

struct bfd_set
{
  char * name;
  bfd * handle;
  asymbol ** symbol;
  struct bfd_set *next;
};

struct find_info
{
  asymbol **symbol;
  bfd_vma counter;
  const char *file;
  const char *func;
  unsigned line;
  unsigned int discriminator;
};

void ErrorExit(LPTSTR lpszFunction)
{
  // Retrieve the system error message for the last-error code

  LPVOID lpMsgBuf;
  LPVOID lpDisplayBuf;
  DWORD dw = GetLastError();

  FormatMessage(
  FORMAT_MESSAGE_ALLOCATE_BUFFER |
  FORMAT_MESSAGE_FROM_SYSTEM |
  FORMAT_MESSAGE_IGNORE_INSERTS,
  NULL, dw, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPTSTR) &lpMsgBuf, 0,
          NULL);

  // Display the error message and exit the process

  lpDisplayBuf = (LPVOID) LocalAlloc(LMEM_ZEROINIT,
          (lstrlen((LPCTSTR) lpMsgBuf) + lstrlen((LPCTSTR) lpszFunction) + 40)
                  * sizeof(TCHAR));
  StringCchPrintf((LPTSTR) lpDisplayBuf,
          LocalSize(lpDisplayBuf) / sizeof(TCHAR),
          TEXT("%s failed with error %d: %s"), lpszFunction, dw, lpMsgBuf);
  MessageBox(NULL, (LPCTSTR) lpDisplayBuf, TEXT("Error"), MB_OK);

  LocalFree(lpMsgBuf);
  LocalFree(lpDisplayBuf);
  ExitProcess(dw);
}

void bfd_printErr(const char *string)
{
  const char *errmsg;

  errmsg = bfd_errmsg(bfd_get_error());
  fflush(stdout);
  if (string)
    fprintf(stderr, "%s: %s\n", string, errmsg);
  else
    fprintf(stderr, "%s\n", errmsg);
}

static void lookup_section(bfd *abfd, asection *sec, void *opaque_data)
{
  struct find_info *data = opaque_data;

  if (data->func)
    return;

  if (!(bfd_get_section_flags(abfd, sec) & SEC_ALLOC))
    return;

  bfd_vma vma = bfd_get_section_vma(abfd, sec);
  if (data->counter < vma)
    return;

  bfd_size_type size = bfd_get_section_size(sec);
  if (vma + size <= data->counter)
  {
    return;
  }

//  bfd_find_nearest_line(abfd, sec, data->symbol, data->counter - vma, &(data->file), &(data->func), &(data->line));

  bfd_find_nearest_line_discriminator(abfd, sec, data->symbol,
          data->counter - vma, &(data->file), &(data->func), &(data->line),
          &(data->discriminator));
}

static void find(struct bfd_set * curHandle, DWORD offset, const char **file,
        const char **func, unsigned *line)
{
  struct find_info data;
  data.func = NULL;
  data.symbol = curHandle->symbol;
  data.counter = offset;
  data.file = NULL;
  data.func = NULL;
  data.line = 0;
  data.discriminator = 0;

  bfd_map_over_sections(curHandle->handle, &lookup_section, &data);
  if (file)
  {
    *file = data.file;
  }
  if (func)
  {
    *func = data.func;
  }
  if (line)
  {
    *line = data.line;
  }
}

/* Read in the symbol table.  */

static asymbol **
slurp_symtab(bfd *abfd)
{
  asymbol **syms;
  long storage;
  long symcount;
  bfd_boolean dynamic = FALSE;

  if ((bfd_get_file_flags (abfd) & HAS_SYMS) == 0)
  {
    printf("%s:ther is no sym info here\n", bfd_get_filename(abfd));
    return NULL;
  }

  storage = bfd_get_symtab_upper_bound(abfd);
  if (storage == 0)
  {
    storage = bfd_get_dynamic_symtab_upper_bound(abfd);
    dynamic = TRUE;
  }
  if (storage < 0)
  {
    bfd_printErr(bfd_get_filename(abfd));
    return NULL;
  }

  syms = (asymbol **) malloc(storage);
  if (dynamic)
  {
    symcount = bfd_canonicalize_dynamic_symtab(abfd, syms);
  }
  else
  {
    symcount = bfd_canonicalize_symtab(abfd, syms);
  }
  if (symcount < 0)
  {
    bfd_printErr(bfd_get_filename(abfd));
    return NULL;
  }

  /* If there are no symbols left after canonicalization and
   we have not tried the dynamic symbols then give them a go.  */
  if (symcount == 0 && !dynamic && (storage =
          bfd_get_dynamic_symtab_upper_bound(abfd)) > 0)
  {
    free(syms);
    syms = malloc(storage);
    symcount = bfd_canonicalize_dynamic_symtab(abfd, syms);
  }

  /* PR 17512: file: 2a1d3b5b.
   Do not pretend that we have some symbols when we don't.  */
  if (symcount <= 0)
  {
    free(syms);
    syms = NULL;
  }

  return syms;
}

/* After a FALSE return from bfd_check_format_matches with
 bfd_get_error () == bfd_error_file_ambiguously_recognized, print
 the possible matching targets.  */

void list_matching_formats(char **p)
{
  fflush(stdout);
  fprintf(stderr, "Matching formats:");
  while (*p)
    fprintf(stderr, " %s", *p++);
  fputc('\n', stderr);
}

static bfd * init_bfd_hander(const char *file_name)
{
  bfd *abfd;
  char **matching;

  abfd = bfd_openr(file_name, NULL);
  if (abfd == NULL)
  {
    bfd_printErr(file_name);
    return NULL;
  }

  /* Decompress sections.  */
  abfd->flags |= BFD_DECOMPRESS;

  if (bfd_check_format(abfd, bfd_archive))
  {
    printf("%s: cannot get addresses from archive", file_name);
    return NULL;
  }

  if (!bfd_check_format_matches(abfd, bfd_object, &matching))
  {
    bfd_printErr(bfd_get_filename(abfd));
    if (bfd_get_error() == bfd_error_file_ambiguously_recognized)
    {
      list_matching_formats(matching);
      free(matching);
    }
    return NULL;
  }
  return abfd;
}

static struct bfd_set *
get_bc(struct bfd_set *set, const char *procname)
{
  while (set->next)
  {
    if (strcmp(set->next->name, procname) == 0)
    {
      return set->next;
    }
    set = set->next;
  }
  set->next = calloc(1, sizeof(*set));

  set->next->handle = init_bfd_hander(procname);
  if (set->next->handle == NULL)
  {
    free(set->next);
    set->next = NULL;
    return NULL;
  }

  set->next->symbol = slurp_symtab(set->next->handle);
  if (set->next->symbol == NULL)
  {
    bfd_close(set->next->handle);
    free(set->next);
    set->next = NULL;
    return NULL;
  }

  set->next->name = strdup(procname);

  return set->next;
}

static void release_set(struct bfd_set *set)
{
  struct bfd_set * temp = set->next;
  while (temp)
  {
    set = temp->next;

    free(temp->name);
    free(temp->symbol);
    bfd_close(temp->handle);
    free(temp);

    temp = set;
  }
}

static void stackTrace(LPCONTEXT pContext)
{
  struct bfd_set set = { .handle = NULL, .symbol = NULL, .name = NULL, .next =
          NULL };
  struct bfd_set * curHandle;
  DWORD err;
  char module_name_raw[MAX_PATH];
  HANDLE process = GetCurrentProcess();
  HANDLE thread = GetCurrentThread();

  DWORD image;
  STACKFRAME64 stackframe;
  ZeroMemory(&stackframe, sizeof(STACKFRAME64));

  CONTEXT context;
  if(pContext){
    memcpy(&context, pContext, sizeof(context));
  }
  else
  {
    memset(&context, 0, sizeof(CONTEXT));
    context.ContextFlags = CONTEXT_FULL;
    RtlCaptureContext(&context);
  }

  image = IMAGE_FILE_MACHINE_AMD64;
  stackframe.AddrPC.Offset = context.Rip;
  stackframe.AddrPC.Mode = AddrModeFlat;
  stackframe.AddrFrame.Offset = context.Rsp;
  stackframe.AddrFrame.Mode = AddrModeFlat;
  stackframe.AddrStack.Offset = context.Rsp;
  stackframe.AddrStack.Mode = AddrModeFlat;

  SymInitialize(process, NULL, TRUE);
  bfd_init();

  for (size_t i = 0; i < 25; i++)
  {

    BOOL result = StackWalk64(image, process, thread, &stackframe, &context,
            NULL, SymFunctionTableAccess64, SymGetModuleBase64, NULL);

    if (!result)
    {
      break;
    }

    char buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME * sizeof(TCHAR)];
    PSYMBOL_INFO symbol = (PSYMBOL_INFO) buffer;
    symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
    symbol->MaxNameLen = MAX_SYM_NAME;

    DWORD64 module_base = SymGetModuleBase64(process, stackframe.AddrPC.Offset);
    if (module_base)
    {
      err = GetModuleFileNameA((HINSTANCE) module_base, module_name_raw,
              MAX_PATH);
      if (err != 0)
      {
        DWORD64 displacement = 0;
        if (SymFromAddr(process, stackframe.AddrPC.Offset, &displacement,
                symbol))
        {
          IMAGEHLP_LINE64 line;
          DWORD  dwDisplacement;
          SymSetOptions(SYMOPT_LOAD_LINES);

          line.SizeOfStruct = sizeof(IMAGEHLP_LINE64);
          if(SymGetLineFromAddr64(process, stackframe.AddrPC.Offset, &dwDisplacement, &line)){
            printf("[%I64u]%s:%s:%lu[offset%I64X]\n", i, module_name_raw,
                    symbol->Name, line.LineNumber, stackframe.AddrPC.Offset);
          }
          else {
            printf("[%I64u]%s:%s:???[offset%I64X]\n", i, module_name_raw,
                    symbol->Name, stackframe.AddrPC.Offset);
          }
        }
        else
        {
          curHandle = get_bc(&set, module_name_raw);

          if (curHandle)
          {
            const char * file = NULL;
            const char * func = NULL;
            unsigned line = 0;

            find(curHandle, stackframe.AddrPC.Offset, &file, &func, &line);
            printf("[%I64X]%s:%s:%u[offset=0x%I64X]\n", i, file ? file : "???",
                    func ? func : "???", line, stackframe.AddrPC.Offset);
          }
        }
      }
      else
      {
        ErrorExit(TEXT("SymGetModuleBase64"));
      }
    }
    else
    {
      ErrorExit(TEXT("SymGetModuleBase64"));
    }
  }
  release_set(&set);

  SymCleanup(process);
}

static LONG WINAPI
exception_filter(LPEXCEPTION_POINTERS info)
{
  printf("exception code:0x%lX[%s]\n",info->ExceptionRecord->ExceptionCode,
          get_exception_msg(info->ExceptionRecord->ExceptionCode));
  printf("stacktrace:\n");
  stackTrace(info->ContextRecord);

  exit(1);

  return 0;
}

void test(void)
{
  *((int *)0) = 0;
}

int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 512);
  HANDLE hTask = NULL;
  DWORD taskIndex = 0;
  if(!SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS))
    {
    ErrorExit(TEXT("SetPriorityClass"));
    };
  hTask = AvSetMmThreadCharacteristics(TEXT("Pro Audio"), &taskIndex);
      if (hTask == NULL)
      {
        ErrorExit(TEXT("AvSetMmThreadCharacteristics"));
      }
  puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
  SetUnhandledExceptionFilter(exception_filter);
  timeBeginPeriod(0);
//  test();
//  stackTrace(NULL);
  simu_task_init();
  return EXIT_SUCCESS;
}
