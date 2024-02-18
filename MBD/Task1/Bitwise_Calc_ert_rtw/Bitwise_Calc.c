/*
 * File: Bitwise_Calc.c
 *
 * Code generated for Simulink model 'Bitwise_Calc'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Feb  8 23:18:01 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Bitwise_Calc.h"
#include "Bitwise_Calc_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Bitwise_Calc_T Bitwise_Calc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Bitwise_Calc_T Bitwise_Calc_Y;

/* Real-time model */
static RT_MODEL_Bitwise_Calc_T Bitwise_Calc_M_;
RT_MODEL_Bitwise_Calc_T *const Bitwise_Calc_M = &Bitwise_Calc_M_;

/* Model step function */
void Bitwise_Calc_step(void)
{
  uint16_T Output2_tmp;

  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT1'
   */
  Bitwise_Calc_Y.Output = (uint16_T)~Bitwise_Calc_U.Input1;

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT'
   */
  Bitwise_Calc_Y.Output1 = (uint16_T)~Bitwise_Calc_U.Input;

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND3'
   */
  Output2_tmp = (uint16_T)(Bitwise_Calc_U.Input & Bitwise_Calc_U.Input1);
  Bitwise_Calc_Y.Output2 = Output2_tmp;

  /* Outport: '<Root>/Output3' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND3'
   */
  Bitwise_Calc_Y.Output3 = (uint16_T)~Output2_tmp;

  /* Outport: '<Root>/Output4' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND4'
   */
  Output2_tmp = (uint16_T)(Bitwise_Calc_U.Input | Bitwise_Calc_U.Input1);
  Bitwise_Calc_Y.Output4 = Output2_tmp;

  /* Outport: '<Root>/Output5' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND2'
   */
  Bitwise_Calc_Y.Output5 = (uint16_T)(Bitwise_Calc_U.Input ^
    Bitwise_Calc_U.Input1);

  /* Outport: '<Root>/Output6' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND4'
   */
  Bitwise_Calc_Y.Output6 = (uint16_T)~Output2_tmp;
}

/* Model initialize function */
void Bitwise_Calc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Bitwise_Calc_M, (NULL));

  /* external inputs */
  (void)memset(&Bitwise_Calc_U, 0, sizeof(ExtU_Bitwise_Calc_T));

  /* external outputs */
  (void) memset((void *)&Bitwise_Calc_Y, 0,
                sizeof(ExtY_Bitwise_Calc_T));
}

/* Model terminate function */
void Bitwise_Calc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
