/*
 * exception_msg.c
 *
 *  Created on: 2017Äê5ÔÂ22ÈÕ
 *      Author: f12160c
 */

#include "windows.h"
#include "exception_msg.h"


char *get_exception_msg(DWORD code)
{
  char *ret;
  switch(code)
  {
    case EXCEPTION_ACCESS_VIOLATION:
      ret = "The thread attempts to read from or write to a virtual address for which it does not have access";
      break;
    case EXCEPTION_ARRAY_BOUNDS_EXCEEDED:
      ret =  "The thread attempts to access an array element that is out of bounds, and the underlying hardware supports bounds checking";
      break;
    case EXCEPTION_BREAKPOINT:
      ret = "A breakpoint is encountere";
      break;
    case EXCEPTION_DATATYPE_MISALIGNMENT:
      ret = "The thread attempts to read or write data that is misaligned on hardware that does not provide alignment. For example, 16-bit values must be aligned on 2-byte boundaries, 32-bit values on 4-byte boundaries, and so o";
      break;
    case EXCEPTION_FLT_DENORMAL_OPERAND:
      ret = "One of the operands in a floating point operation is denormal. A denormal value is one that is too small to represent as a standard floating point value";
      break;
    case EXCEPTION_FLT_DIVIDE_BY_ZERO:
      ret = "The thread attempts to divide a floating point value by a floating point divisor of 0 (zero)";
      break;
    case EXCEPTION_FLT_INEXACT_RESULT:
      ret = "The result of a floating point operation cannot be represented exactly as a decimal fraction";
      break;
    case EXCEPTION_FLT_INVALID_OPERATION:
      ret = "A floating point exception that is not included in this list";
      break;
    case EXCEPTION_FLT_OVERFLOW:
      ret = "The exponent of a floating point operation is greater than the magnitude allowed by the corresponding type";
      break;
    case EXCEPTION_FLT_STACK_CHECK:
      ret = "The stack has overflowed or underflowed, because of a floating point operation";
      break;
    case EXCEPTION_FLT_UNDERFLOW:
      ret = "The exponent of a floating point operation is less than the magnitude allowed by the corresponding type";
      break;
    case EXCEPTION_GUARD_PAGE:
      ret = "The thread accessed memory allocated with the PAGE_GUARD modifier";
      break;
    case EXCEPTION_ILLEGAL_INSTRUCTION:
      ret = "The thread tries to execute an invalid instructio";
      break;
    case EXCEPTION_IN_PAGE_ERROR:
      ret = "The thread tries to access a page that is not present, and the system is unable to load the page. For example, this exception might occur if a network connection is lost while running a program over a network";
      break;
    case EXCEPTION_INT_DIVIDE_BY_ZERO:
      ret = "The thread attempts to divide an integer value by an integer divisor of 0 (zero)";
      break;
    case EXCEPTION_INT_OVERFLOW:
      ret = "The result of an integer operation creates a value that is too large to be held by the destination register. In some cases, this will result in a carry out of the most significant bit of the result. Some operations do not set the carry flag";
      break;
    case EXCEPTION_INVALID_DISPOSITION:
      ret = "An exception handler returns an invalid disposition to the exception dispatcher. Programmers using a high-level language such as C should never encounter this exception";
      break;
    case EXCEPTION_INVALID_HANDLE:
      ret = "The thread used a handle to a kernel object that was invalid (probably because it had been closed.)";
      break;
    case EXCEPTION_NONCONTINUABLE_EXCEPTION:
      ret = "The thread attempts to continue execution after a non-continuable exception occurs";
      break;
    case EXCEPTION_PRIV_INSTRUCTION:
      ret = "The thread attempts to execute an instruction with an operation that is not allowed in the current computer mode";
      break;
    case EXCEPTION_SINGLE_STEP:
      ret = "A trace trap or other single instruction mechanism signals that one instruction is executed";
      break;
    case EXCEPTION_STACK_OVERFLOW:
      ret = "The thread uses up its stack";
      break;
    case STATUS_UNWIND_CONSOLIDATE:
      ret = "A frame consolidation has been execute";
      break;
    default:
      ret = "unkown exception";
  }
  return ret;
}
