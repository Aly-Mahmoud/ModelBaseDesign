/*
 * File: Increment_Decrement_Unit_delay.h
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

#ifndef RTW_HEADER_Increment_Decrement_Unit_delay_h_
#define RTW_HEADER_Increment_Decrement_Unit_delay_h_
#include <string.h>
#include <stddef.h>
#ifndef Increment_Decrement_Unit_delay_COMMON_INCLUDES_
#define Increment_Decrement_Unit_delay_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                     /* Increment_Decrement_Unit_delay_COMMON_INCLUDES_ */

#include "Increment_Decrement_Unit_delay_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<Root>/Unit Delay' */
} DW_Increment_Decrement_Unit_d_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
  real_T Input1;                       /* '<Root>/Input1' */
} ExtU_Increment_Decrement_Unit_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
  real_T Output1;                      /* '<Root>/Output1' */
} ExtY_Increment_Decrement_Unit_T;

/* Real-time Model Data Structure */
struct tag_RTM_Increment_Decrement_U_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Increment_Decrement_Unit_d_T Increment_Decrement_Unit_del_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Increment_Decrement_Unit_T Increment_Decrement_Unit_dela_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Increment_Decrement_Unit_T Increment_Decrement_Unit_dela_Y;

/* Model entry point functions */
extern void Increment_Decrement_Unit_delay_initialize(void);
extern void Increment_Decrement_Unit_delay_step(void);
extern void Increment_Decrement_Unit_delay_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Increment_Decrement__T *const Increment_Decrement_Unit_del_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Add1' : Unused code path elimination
 * Block '<Root>/Unit Delay1' : Unused code path elimination
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
 * '<Root>' : 'Increment_Decrement_Unit_delay'
 */
#endif                        /* RTW_HEADER_Increment_Decrement_Unit_delay_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
