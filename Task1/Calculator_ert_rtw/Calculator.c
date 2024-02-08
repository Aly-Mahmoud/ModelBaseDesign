/*
 * File: Calculator.c
 *
 * Code generated for Simulink model 'Calculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Feb  8 22:30:51 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Calculator.h"
#include "Calculator_private.h"

/* Block signals (default storage) */
B_Calculator_T Calculator_B;

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_T Calculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_T Calculator_Y;

/* Real-time model */
static RT_MODEL_Calculator_T Calculator_M_;
RT_MODEL_Calculator_T *const Calculator_M = &Calculator_M_;

/* Model step function */
void Calculator_step(void)
{
  /* Outport: '<Root>/Addition res' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Add'
   */
  Calculator_Y.Additionres = Calculator_U.Input + Calculator_U.Input1;

  /* Outport: '<Root>/Subtraction res' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Subtract'
   */
  Calculator_Y.Subtractionres = Calculator_U.Input - Calculator_U.Input1;

  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<S2>/In1'
   */
  if (Calculator_U.Input1 == 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Outport: '<Root>/Error detector for divsion' incorporates:
     *  Constant: '<Root>/Constant'
     *  Inport: '<S1>/In1'
     */
    Calculator_Y.Errordetectorfordivsion = -1.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    Calculator_B.In1 = Calculator_U.Input1;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Division res' incorporates:
   *  Inport: '<Root>/Input'
   *  Product: '<Root>/Divide'
   */
  Calculator_Y.Divisionres = Calculator_U.Input / Calculator_B.In1;

  /* Outport: '<Root>/Multiplication res' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Divide1'
   */
  Calculator_Y.Multiplicationres = Calculator_U.Input * Calculator_U.Input1;

  /* Outport: '<Root>/Increment result' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Inport: '<Root>/Input2'
   *  Sum: '<Root>/Add1'
   */
  Calculator_Y.Incrementresult = Calculator_U.Input2 + 1.0;

  /* Outport: '<Root>/Decrement result' incorporates:
   *  Constant: '<Root>/Constant5'
   *  Inport: '<Root>/Input3'
   *  Sum: '<Root>/Add2'
   */
  Calculator_Y.Decrementresult = Calculator_U.Input3 - 1.0;

  /* Outport: '<Root>/Unary minus' incorporates:
   *  Inport: '<Root>/Input4'
   *  UnaryMinus: '<Root>/Unary Minus'
   */
  Calculator_Y.Unaryminus = -Calculator_U.Input4;
}

/* Model initialize function */
void Calculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calculator_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Calculator_B), 0,
                sizeof(B_Calculator_T));

  /* external inputs */
  (void)memset(&Calculator_U, 0, sizeof(ExtU_Calculator_T));

  /* external outputs */
  (void) memset((void *)&Calculator_Y, 0,
                sizeof(ExtY_Calculator_T));
}

/* Model terminate function */
void Calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
