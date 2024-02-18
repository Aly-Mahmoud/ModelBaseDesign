/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Feb  8 23:14:49 2024
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
  uint16_T Output2_tmp;

  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT1'
   */
  untitled_Y.Output = (uint16_T)~untitled_U.Input1;

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT'
   */
  untitled_Y.Output1 = (uint16_T)~untitled_U.Input;

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND3'
   */
  Output2_tmp = (uint16_T)(untitled_U.Input & untitled_U.Input1);
  untitled_Y.Output2 = Output2_tmp;

  /* Outport: '<Root>/Output3' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND3'
   */
  untitled_Y.Output3 = (uint16_T)~Output2_tmp;

  /* Outport: '<Root>/Output4' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND4'
   */
  Output2_tmp = (uint16_T)(untitled_U.Input | untitled_U.Input1);
  untitled_Y.Output4 = Output2_tmp;

  /* Outport: '<Root>/Output5' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND2'
   */
  untitled_Y.Output5 = (uint16_T)(untitled_U.Input ^ untitled_U.Input1);

  /* Outport: '<Root>/Output6' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND4'
   */
  untitled_Y.Output6 = (uint16_T)~Output2_tmp;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

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
