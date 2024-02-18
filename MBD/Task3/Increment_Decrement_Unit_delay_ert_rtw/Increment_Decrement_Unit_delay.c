/*
 * File: Increment_Decrement_Unit_delay.c
 *
 * Code generated for Simulink model 'Increment_Decrement_Unit_delay'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Feb 15 19:49:32 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Increment_Decrement_Unit_delay.h"
#include "Increment_Decrement_Unit_delay_private.h"

/* Block states (default storage) */
DW_Increment_Decrement_Unit_d_T Increment_Decrement_Unit_del_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Increment_Decrement_Unit_T Increment_Decrement_Unit_dela_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Increment_Decrement_Unit_T Increment_Decrement_Unit_dela_Y;

/* Real-time model */
static RT_MODEL_Increment_Decrement__T Increment_Decrement_Unit_del_M_;
RT_MODEL_Increment_Decrement__T *const Increment_Decrement_Unit_del_M =
  &Increment_Decrement_Unit_del_M_;

/* Model step function */
void Increment_Decrement_Unit_delay_step(void)
{
  real_T rtb_Add;

  /* Sum: '<Root>/Add' incorporates:
   *  Inport: '<Root>/Input'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Add = Increment_Decrement_Unit_dela_U.Input +
    Increment_Decrement_Unit_del_DW.UnitDelay_DSTATE;

  /* Outport: '<Root>/Output' */
  Increment_Decrement_Unit_dela_Y.Output = rtb_Add;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  Increment_Decrement_Unit_del_DW.UnitDelay_DSTATE = rtb_Add;
}

/* Model initialize function */
void Increment_Decrement_Unit_delay_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Increment_Decrement_Unit_del_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Increment_Decrement_Unit_del_DW, 0,
                sizeof(DW_Increment_Decrement_Unit_d_T));

  /* external inputs */
  (void)memset(&Increment_Decrement_Unit_dela_U, 0, sizeof
               (ExtU_Increment_Decrement_Unit_T));

  /* external outputs */
  (void) memset((void *)&Increment_Decrement_Unit_dela_Y, 0,
                sizeof(ExtY_Increment_Decrement_Unit_T));

  /* ConstCode for Outport: '<Root>/Output1' */
  Increment_Decrement_Unit_dela_Y.Output1 = 0.0;
}

/* Model terminate function */
void Increment_Decrement_Unit_delay_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
