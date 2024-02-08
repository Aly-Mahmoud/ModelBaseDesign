/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Feb  8 22:58:53 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  real_T rtb_SumofElements;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_1;

  /* MinMax: '<Root>/Max' incorporates:
   *  Inport: '<Root>/Input'
   *  MinMax: '<Root>/Min'
   */
  tmp = rtIsNaN(untitled_U.Input[1]);
  if ((untitled_U.Input[0] > untitled_U.Input[1]) || tmp) {
    rtb_SumofElements = untitled_U.Input[0];
  } else {
    rtb_SumofElements = untitled_U.Input[1];
  }

  tmp_1 = !rtIsNaN(untitled_U.Input[2]);
  if ((!(rtb_SumofElements > untitled_U.Input[2])) && tmp_1) {
    rtb_SumofElements = untitled_U.Input[2];
  }

  tmp_0 = rtIsNaN(untitled_U.Input[3]);
  if ((rtb_SumofElements > untitled_U.Input[3]) || tmp_0) {
    /* Outport: '<Root>/Output' */
    untitled_Y.Output = rtb_SumofElements;
  } else {
    /* Outport: '<Root>/Output' */
    untitled_Y.Output = untitled_U.Input[3];
  }

  /* End of MinMax: '<Root>/Max' */

  /* MinMax: '<Root>/Min' incorporates:
   *  Inport: '<Root>/Input'
   */
  if ((untitled_U.Input[0] < untitled_U.Input[1]) || tmp) {
    rtb_SumofElements = untitled_U.Input[0];
  } else {
    rtb_SumofElements = untitled_U.Input[1];
  }

  if ((!(rtb_SumofElements < untitled_U.Input[2])) && tmp_1) {
    rtb_SumofElements = untitled_U.Input[2];
  }

  if ((rtb_SumofElements < untitled_U.Input[3]) || tmp_0) {
    /* Outport: '<Root>/Output1' */
    untitled_Y.Output1 = rtb_SumofElements;
  } else {
    /* Outport: '<Root>/Output1' */
    untitled_Y.Output1 = untitled_U.Input[3];
  }

  /* Sum: '<Root>/Sum of Elements' incorporates:
   *  Inport: '<Root>/Input'
   */
  rtb_SumofElements = ((untitled_U.Input[0] + untitled_U.Input[1]) +
                       untitled_U.Input[2]) + untitled_U.Input[3];

  /* Outport: '<Root>/Output2' */
  untitled_Y.Output2 = rtb_SumofElements;

  /* Outport: '<Root>/Output3' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  Product: '<Root>/Divide'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:3' y = numel(u); */
  untitled_Y.Output3 = rtb_SumofElements / 4.0;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* external inputs */
  (void)memset(&untitled_U, 0, sizeof(ExtU_untitled_T));

  /* external outputs */
  (void) memset((void *)&untitled_Y, 0,
                sizeof(ExtY_untitled_T));
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
