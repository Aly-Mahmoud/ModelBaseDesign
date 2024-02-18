/*
 * File: Calcolator_Sub_sys.c
 *
 * Code generated for Simulink model 'Calcolator_Sub_sys'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Feb 15 17:21:25 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Calcolator_Sub_sys.h"
#include "Calcolator_Sub_sys_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Calcolator_Sub_sys_T Calcolator_Sub_sys_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calcolator_Sub_sys_T Calcolator_Sub_sys_Y;

/* Real-time model */
static RT_MODEL_Calcolator_Sub_sys_T Calcolator_Sub_sys_M_;
RT_MODEL_Calcolator_Sub_sys_T *const Calcolator_Sub_sys_M =
  &Calcolator_Sub_sys_M_;

/* Model step function */
void Calcolator_Sub_sys_step(void)
{
  /* Outport: '<Root>/Addition res' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S1>/Add'
   */
  Calcolator_Sub_sys_Y.Additionres = Calcolator_Sub_sys_U.Input +
    Calcolator_Sub_sys_U.Input1;

  /* Outport: '<Root>/Multiplication res' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<S3>/Divide1'
   */
  Calcolator_Sub_sys_Y.Multiplicationres = Calcolator_Sub_sys_U.Input *
    Calcolator_Sub_sys_U.Input1;

  /* If: '<S4>/If' incorporates:
   *  Inport: '<Root>/Input1'
   */
  if (Calcolator_Sub_sys_U.Input1 == 0.0) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Outport: '<Root>/Error detector for divsion' incorporates:
     *  Constant: '<Root>/Constant'
     *  Inport: '<S8>/In1'
     */
    Calcolator_Sub_sys_Y.Errordetectorfordivsion = -1.0;

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem' */
  }

  /* End of If: '<S4>/If' */

  /* Outport: '<Root>/subtraction res1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S7>/Add'
   */
  Calcolator_Sub_sys_Y.subtractionres1 = Calcolator_Sub_sys_U.Input -
    Calcolator_Sub_sys_U.Input1;

  /* Outport: '<Root>/Increment result' incorporates:
   *  Constant: '<S5>/Constant3'
   *  Inport: '<Root>/Input2'
   *  Sum: '<S5>/Add1'
   */
  Calcolator_Sub_sys_Y.Incrementresult = Calcolator_Sub_sys_U.Input2 + 1.0;

  /* Outport: '<Root>/Decrement result1' incorporates:
   *  Constant: '<S6>/Constant3'
   *  Inport: '<Root>/Input3'
   *  Sum: '<S6>/Add1'
   */
  Calcolator_Sub_sys_Y.Decrementresult1 = Calcolator_Sub_sys_U.Input3 - 1.0;

  /* Outport: '<Root>/Unary minus' incorporates:
   *  Inport: '<Root>/Input4'
   *  UnaryMinus: '<S2>/Unary Minus'
   */
  Calcolator_Sub_sys_Y.Unaryminus = -Calcolator_Sub_sys_U.Input4;
}

/* Model initialize function */
void Calcolator_Sub_sys_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calcolator_Sub_sys_M, (NULL));

  /* external inputs */
  (void)memset(&Calcolator_Sub_sys_U, 0, sizeof(ExtU_Calcolator_Sub_sys_T));

  /* external outputs */
  (void) memset((void *)&Calcolator_Sub_sys_Y, 0,
                sizeof(ExtY_Calcolator_Sub_sys_T));

  /* ConstCode for Outport: '<Root>/Division res' */
  Calcolator_Sub_sys_Y.Divisionres = 0.0;
}

/* Model terminate function */
void Calcolator_Sub_sys_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
