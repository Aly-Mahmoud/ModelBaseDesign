/*
 * File: Calcolator_Sub_sys.h
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

#ifndef RTW_HEADER_Calcolator_Sub_sys_h_
#define RTW_HEADER_Calcolator_Sub_sys_h_
#include <string.h>
#include <stddef.h>
#ifndef Calcolator_Sub_sys_COMMON_INCLUDES_
#define Calcolator_Sub_sys_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Calcolator_Sub_sys_COMMON_INCLUDES_ */

#include "Calcolator_Sub_sys_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
  real_T Input1;                       /* '<Root>/Input1' */
  real_T Input2;                       /* '<Root>/Input2' */
  real_T Input3;                       /* '<Root>/Input3' */
  real_T Input4;                       /* '<Root>/Input4' */
} ExtU_Calcolator_Sub_sys_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Additionres;                  /* '<Root>/Addition res' */
  real_T Multiplicationres;            /* '<Root>/Multiplication res' */
  real_T Errordetectorfordivsion;      /* '<Root>/Error detector for divsion' */
  real_T Divisionres;                  /* '<Root>/Division res' */
  real_T subtractionres1;              /* '<Root>/subtraction res1' */
  real_T Incrementresult;              /* '<Root>/Increment result' */
  real_T Decrementresult1;             /* '<Root>/Decrement result1' */
  real_T Unaryminus;                   /* '<Root>/Unary minus' */
} ExtY_Calcolator_Sub_sys_T;

/* Real-time Model Data Structure */
struct tag_RTM_Calcolator_Sub_sys_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Calcolator_Sub_sys_T Calcolator_Sub_sys_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Calcolator_Sub_sys_T Calcolator_Sub_sys_Y;

/* Model entry point functions */
extern void Calcolator_Sub_sys_initialize(void);
extern void Calcolator_Sub_sys_step(void);
extern void Calcolator_Sub_sys_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Calcolator_Sub_sys_T *const Calcolator_Sub_sys_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S4>/Divide' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Calcolator_Sub_sys'
 * '<S1>'   : 'Calcolator_Sub_sys/Addition'
 * '<S2>'   : 'Calcolator_Sub_sys/Subsystem'
 * '<S3>'   : 'Calcolator_Sub_sys/Subsystem1'
 * '<S4>'   : 'Calcolator_Sub_sys/Subsystem2'
 * '<S5>'   : 'Calcolator_Sub_sys/Subsystem3'
 * '<S6>'   : 'Calcolator_Sub_sys/Subsystem4'
 * '<S7>'   : 'Calcolator_Sub_sys/Subtraction '
 * '<S8>'   : 'Calcolator_Sub_sys/Subsystem2/If Action Subsystem'
 * '<S9>'   : 'Calcolator_Sub_sys/Subsystem2/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_Calcolator_Sub_sys_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
