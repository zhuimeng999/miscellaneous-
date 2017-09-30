/*
 * simu_task.c
 *
 *  Created on: 2017Äê5ÔÂ22ÈÕ
 *      Author: f12160c
 */

#include "simu_task.h"
#include <stdio.h>
#include <stdlib.h>
#include <uv.h>
#include <windows.h>
#include <rtccore.h>

struct timeHelpHandle
{
  int flag;
  LARGE_INTEGER last;
  LARGE_INTEGER Frequency;
  LARGE_INTEGER cur;
};

void timeHelpFunc(struct timeHelpHandle *helper)
{
  if(helper->flag != 1){
    QueryPerformanceFrequency(&helper->Frequency);
    QueryPerformanceCounter(&helper->last);
    helper->flag = 1;
  }
  else
  {
    LARGE_INTEGER curr, ElapsedMicroseconds;

    QueryPerformanceCounter(&curr);
    ElapsedMicroseconds.QuadPart = curr.QuadPart - helper->last.QuadPart;

    ElapsedMicroseconds.QuadPart *= 1000000;
    ElapsedMicroseconds.QuadPart /= helper->Frequency.QuadPart;

    printf("time:%I64d\n",ElapsedMicroseconds.QuadPart);
    helper->last.QuadPart = curr.QuadPart;
  }
}

void fake_job(uv_timer_t *handle)
{
  static struct timeHelpHandle timeHelp= { .flag = 0};
  timeHelpFunc(&timeHelp);
}

void simu_task_init(void)
{
  uv_timer_t fake_job_req;
  uv_loop_t *loop = uv_default_loop();

  uv_timer_init(loop, &fake_job_req);
  uv_timer_start(&fake_job_req, fake_job, 10, 10);
  uv_run(loop, UV_RUN_DEFAULT);
}
