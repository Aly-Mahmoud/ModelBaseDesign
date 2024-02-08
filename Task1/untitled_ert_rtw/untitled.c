/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Feb  8 22:17:36 2024
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
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Add'
   */
  untitled_Y.Output = untitled_U.Input + untitled_U.Input1;

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Subtract'
   */
  untitled_Y.Output1 = untitled_U.Input - untitled_U.Input1;

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Divide'
   */
  untitled_Y.Output2 = untitled_U.Input / untitled_U.Input1;

  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Divide1'
   */
  untitled_Y.Output3 = untitled_U.Input * untitled_U.Input1;

  /* Outport: '<Root>/Output4' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Inport: '<Root>/Input2'
   *  Sum: '<Root>/Add1'
   */
  untitled_Y.Output4 = untitled_U.Input2 + 1.0;

  /* Outport: '<Root>/Output5' incorporates:
   *  Constant: '<Root>/Constant5'
   *  Inport: '<Root>/Input3'
   *  Sum: '<Root>/Add2'
   */
  untitled_Y.Output5 = untitled_U.Input3 - 1.0;

  /* Outport: '<Root>/Output6' incorporates:
   *  Inport: '<Root>/Input4'
   *  UnaryMinus: '<Root>/Unary Minus'
   */
  untitled_Y.Output6 = -untitled_U.Input4;
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
