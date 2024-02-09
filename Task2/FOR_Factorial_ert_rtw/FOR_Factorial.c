/*
 * File: FOR_Factorial.c
 *
 * Code generated for Simulink model 'FOR_Factorial'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Feb  9 11:19:24 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FOR_Factorial.h"
#include "FOR_Factorial_private.h"

/* Block states (default storage) */
DW_FOR_Factorial_T FOR_Factorial_DW;

/* External inputs (root inport signals with default storage) */
ExtU_FOR_Factorial_T FOR_Factorial_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FOR_Factorial_T FOR_Factorial_Y;

/* Real-time model */
static RT_MODEL_FOR_Factorial_T FOR_Factorial_M_;
RT_MODEL_FOR_Factorial_T *const FOR_Factorial_M = &FOR_Factorial_M_;

/* Model step function */
void FOR_Factorial_step(void)
{
  int32_T s1_iter;
  int32_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* Inport: '<Root>/Input' */
  tmp = FOR_Factorial_U.Input;
  if (FOR_Factorial_U.Input > 2147483646) {
    tmp = 2147483646;
  } else if (FOR_Factorial_U.Input < 0) {
    tmp = 0;
  }

  /* End of Inport: '<Root>/Input' */
  for (s1_iter = 1; s1_iter <= tmp; s1_iter++) {
    /* Delay: '<S1>/Delay' incorporates:
     *  Constant: '<S1>/Constant'
     */
    if (FOR_Factorial_DW.icLoad) {
      FOR_Factorial_DW.Delay_DSTATE = 1.0;
    }

    /* Outport: '<Root>/Output' incorporates:
     *  Delay: '<S1>/Delay'
     *  Product: '<S1>/Divide'
     */
    FOR_Factorial_Y.Output = (real_T)s1_iter * FOR_Factorial_DW.Delay_DSTATE;

    /* Update for Delay: '<S1>/Delay' incorporates:
     *  Outport: '<Root>/Output'
     */
    FOR_Factorial_DW.icLoad = false;
    FOR_Factorial_DW.Delay_DSTATE = FOR_Factorial_Y.Output;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void FOR_Factorial_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(FOR_Factorial_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&FOR_Factorial_DW, 0,
                sizeof(DW_FOR_Factorial_T));

  /* external inputs */
  FOR_Factorial_U.Input = 0;

  /* external outputs */
  FOR_Factorial_Y.Output = 0.0;

  /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' */
  /* InitializeConditions for Delay: '<S1>/Delay' */
  FOR_Factorial_DW.icLoad = true;

  /* End of SystemInitialize for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model terminate function */
void FOR_Factorial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
