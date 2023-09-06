/*
 * File: FUZZYSMslx.c
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
#include "FUZZYSMslx_private.h"
#include "FUZZYSMslx_dt.h"

/* Block signals (auto storage) */
B_FUZZYSMslx_T FUZZYSMslx_B;

/* Block states (auto storage) */
DW_FUZZYSMslx_T FUZZYSMslx_DW;

/* Real-time model */
RT_MODEL_FUZZYSMslx_T FUZZYSMslx_M_;
RT_MODEL_FUZZYSMslx_T *const FUZZYSMslx_M = &FUZZYSMslx_M_;

/* Model step function */
void FUZZYSMslx_step(void)
{
  uint16_T rtb_AnalogInput_0;
  uint16_T rtb_AnalogInput1_0;
  uint16_T rtb_AnalogInput2_0;
  uint16_T rtb_AnalogInput3_0;
  uint16_T rtb_AnalogInput4_0;
  uint16_T maxV;
  int16_T i;

  /* S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input' */
  rtb_AnalogInput_0 = MW_analogRead(FUZZYSMslx_P.AnalogInput_p1);

  /* S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input1' */
  rtb_AnalogInput1_0 = MW_analogRead(FUZZYSMslx_P.AnalogInput1_p1);

  /* S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input2' */
  rtb_AnalogInput2_0 = MW_analogRead(FUZZYSMslx_P.AnalogInput2_p1);

  /* S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input3' */
  rtb_AnalogInput3_0 = MW_analogRead(FUZZYSMslx_P.AnalogInput3_p1);

  /* S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input4' */
  rtb_AnalogInput4_0 = MW_analogRead(FUZZYSMslx_P.AnalogInput4_p1);

  /* MinMax: '<Root>/MinMax' incorporates:
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input'
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input1'
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input2'
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input3'
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input4'
   */
  if (rtb_AnalogInput_0 > rtb_AnalogInput1_0) {
    maxV = rtb_AnalogInput_0;
  } else {
    maxV = rtb_AnalogInput1_0;
  }

  if (!(maxV > rtb_AnalogInput2_0)) {
    maxV = rtb_AnalogInput2_0;
  }

  if (!(maxV > rtb_AnalogInput3_0)) {
    maxV = rtb_AnalogInput3_0;
  }

  if (!(maxV > rtb_AnalogInput4_0)) {
    maxV = rtb_AnalogInput4_0;
  }

  /* Switch: '<Root>/Switch' incorporates:
   *  Memory: '<Root>/Memory'
   *  MinMax: '<Root>/MinMax'
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input'
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input1'
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input2'
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input3'
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input4'
   */
  if (maxV > FUZZYSMslx_P.Switch_Threshold) {
    FUZZYSMslx_B.Switch[0] = rtb_AnalogInput_0;
    FUZZYSMslx_B.Switch[1] = rtb_AnalogInput1_0;
    FUZZYSMslx_B.Switch[2] = rtb_AnalogInput2_0;
    FUZZYSMslx_B.Switch[3] = rtb_AnalogInput3_0;
    FUZZYSMslx_B.Switch[4] = rtb_AnalogInput4_0;
  } else {
    FUZZYSMslx_B.Switch[0] = FUZZYSMslx_DW.Memory_PreviousInput[0];
    FUZZYSMslx_B.Switch[1] = FUZZYSMslx_DW.Memory_PreviousInput[1];
    FUZZYSMslx_B.Switch[2] = FUZZYSMslx_DW.Memory_PreviousInput[2];
    FUZZYSMslx_B.Switch[3] = FUZZYSMslx_DW.Memory_PreviousInput[3];
    FUZZYSMslx_B.Switch[4] = FUZZYSMslx_DW.Memory_PreviousInput[4];
  }

  /* End of Switch: '<Root>/Switch' */
  /* Update for Memory: '<Root>/Memory' */
  for (i = 0; i < 5; i++) {
    FUZZYSMslx_DW.Memory_PreviousInput[i] = FUZZYSMslx_B.Switch[i];
  }

  /* End of Update for Memory: '<Root>/Memory' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [1.0s, 0.0s] */
    rtExtModeUpload(0, FUZZYSMslx_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [1.0s, 0.0s] */
    if ((rtmGetTFinal(FUZZYSMslx_M)!=-1) &&
        !((rtmGetTFinal(FUZZYSMslx_M)-FUZZYSMslx_M->Timing.taskTime0) >
          FUZZYSMslx_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(FUZZYSMslx_M, "Simulation finished");
    }

    if (rtmGetStopRequested(FUZZYSMslx_M)) {
      rtmSetErrorStatus(FUZZYSMslx_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  FUZZYSMslx_M->Timing.taskTime0 =
    (++FUZZYSMslx_M->Timing.clockTick0) * FUZZYSMslx_M->Timing.stepSize0;
}

/* Model initialize function */
void FUZZYSMslx_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)FUZZYSMslx_M, 0,
                sizeof(RT_MODEL_FUZZYSMslx_T));
  rtmSetTFinal(FUZZYSMslx_M, 60.0);
  FUZZYSMslx_M->Timing.stepSize0 = 1.0;

  /* External mode info */
  FUZZYSMslx_M->Sizes.checksums[0] = (1347897598U);
  FUZZYSMslx_M->Sizes.checksums[1] = (3364204238U);
  FUZZYSMslx_M->Sizes.checksums[2] = (1136118746U);
  FUZZYSMslx_M->Sizes.checksums[3] = (3423781887U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    FUZZYSMslx_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(FUZZYSMslx_M->extModeInfo,
      &FUZZYSMslx_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(FUZZYSMslx_M->extModeInfo, FUZZYSMslx_M->Sizes.checksums);
    rteiSetTPtr(FUZZYSMslx_M->extModeInfo, rtmGetTPtr(FUZZYSMslx_M));
  }

  /* block I/O */
  (void) memset(((void *) &FUZZYSMslx_B), 0,
                sizeof(B_FUZZYSMslx_T));

  /* states (dwork) */
  (void) memset((void *)&FUZZYSMslx_DW, 0,
                sizeof(DW_FUZZYSMslx_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    FUZZYSMslx_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    int16_T i;

    /* Start for S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input' */
    MW_pinModeAnalogInput(FUZZYSMslx_P.AnalogInput_p1);

    /* Start for S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input1' */
    MW_pinModeAnalogInput(FUZZYSMslx_P.AnalogInput1_p1);

    /* Start for S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input2' */
    MW_pinModeAnalogInput(FUZZYSMslx_P.AnalogInput2_p1);

    /* Start for S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input3' */
    MW_pinModeAnalogInput(FUZZYSMslx_P.AnalogInput3_p1);

    /* Start for S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input4' */
    MW_pinModeAnalogInput(FUZZYSMslx_P.AnalogInput4_p1);

    /* InitializeConditions for Memory: '<Root>/Memory' */
    for (i = 0; i < 5; i++) {
      FUZZYSMslx_DW.Memory_PreviousInput[i] = FUZZYSMslx_P.Memory_X0;
    }

    /* End of InitializeConditions for Memory: '<Root>/Memory' */
  }
}

/* Model terminate function */
void FUZZYSMslx_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
