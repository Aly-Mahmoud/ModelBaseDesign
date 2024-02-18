/*
 * File: MatLap_Factorial.c
 *
 * Code generated for Simulink model 'MatLap_Factorial'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Feb  9 11:25:57 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MatLap_Factorial.h"
#include "MatLap_Factorial_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_MatLap_Factorial_T MatLap_Factorial_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_MatLap_Factorial_T MatLap_Factorial_Y;

/* Real-time model */
static RT_MODEL_MatLap_Factorial_T MatLap_Factorial_M_;
RT_MODEL_MatLap_Factorial_T *const MatLap_Factorial_M = &MatLap_Factorial_M_;

/* Model step function */
void MatLap_Factorial_step(void)
{
  real_T fact;
  real_T u;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/Input'
   */
  u = MatLap_Factorial_U.Input;

  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:2' fact = 1; */
  fact = 1.0;

  /* '<S1>:1:4' while u > 0 */
  while (u > 0.0) {
    /* '<S1>:1:5' fact = fact * u; */
    fact *= u;

    /* '<S1>:1:6' u=u-1; */
    u--;
  }

  /* Outport: '<Root>/Output' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  /* '<S1>:1:9' y = fact; */
  MatLap_Factorial_Y.Output = fact;
}

/* Model initialize function */
void MatLap_Factorial_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(MatLap_Factorial_M, (NULL));

  /* external inputs */
  MatLap_Factorial_U.Input = 0.0;

  /* external outputs */
  MatLap_Factorial_Y.Output = 0.0;
}

/* Model terminate function */
void MatLap_Factorial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
