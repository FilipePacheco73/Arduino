/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'FUZZYSMslx'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.12 (R2017a) 16-Feb-2017
 * C/C++ source code generated on : Thu Mar 15 19:25:21 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FUZZYSMslx.h"
#include "rtwtypes.h"
#include <ext_work.h>
#include <ext_svr.h>
#include <ext_share.h>
#include <updown.h>

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  FUZZYSMslx_step();

  /* Get model outputs here */
#ifndef _MW_ARDUINO_LOOP_

  cli();

#endif;

  OverrunFlag--;
  rtExtModeCheckEndTrigger();
}

int main(void)
{
  volatile boolean_T runModel = 1;
  float modelBaseRate = 1.0;
  float systemClock = 0;
  init();
  MW_Arduino_Init();
  rtmSetErrorStatus(FUZZYSMslx_M, 0);

  /* initialize external mode */
  rtParseArgsForExtMode(0, NULL);
  FUZZYSMslx_initialize();
  sei();

  /* External mode */
  rtSetTFinalForExtMode(&rtmGetTFinal(FUZZYSMslx_M));
  rtExtModeCheckInit(1);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(FUZZYSMslx_M->extModeInfo, 1, &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(FUZZYSMslx_M, true);
    }
  }

  rtERTExtModeStartMsg();
  cli();
  configureArduinoAVRTimer();
  runModel =
    (rtmGetErrorStatus(FUZZYSMslx_M) == (NULL)) && !rtmGetStopRequested
    (FUZZYSMslx_M);

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  sei();
  while (runModel) {
    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(FUZZYSMslx_M->extModeInfo, 1, &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(FUZZYSMslx_M, true);
      }
    }

    runModel =
      (rtmGetErrorStatus(FUZZYSMslx_M) == (NULL)) && !rtmGetStopRequested
      (FUZZYSMslx_M);
    runModel = runModel && MW_Arduino_Loop();
  }

  rtExtModeShutdown(1);

  /* Disable rt_OneStep() here */

  /* Terminate model */
  FUZZYSMslx_terminate();
  cli();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
