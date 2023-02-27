#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Simu_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 18
#endif
#ifndef SS_INT64
#define SS_INT64 19
#endif
#else
#include "builtin_typeid_types.h"
#include "Simu.h"
#include "Simu_capi.h"
#include "Simu_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Simu/B1/Kv" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 ,
TARGET_STRING ( "Simu/B1/Kv1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 }
, { 2 , 1 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 1 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 4 , 6 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 5 , 6 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator" ) ,
TARGET_STRING ( "" ) , 1 , 1 , 1 , 0 , 0 } , { 6 , 6 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator" ) ,
TARGET_STRING ( "" ) , 2 , 0 , 1 , 0 , 0 } , { 7 , 6 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator" ) ,
TARGET_STRING ( "" ) , 3 , 0 , 1 , 0 , 0 } , { 8 , 6 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator" ) ,
TARGET_STRING ( "" ) , 4 , 0 , 1 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Gain3" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Sum5" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"Simu/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "" ) , 0 , 0
, 2 , 0 , 0 } , { 13 , 6 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Discrete-Time Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 14 , 6 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 15 , 6 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Logical Operator1"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 0 } , { 16 , 6 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Relational Operator"
) , TARGET_STRING ( "Amplitude" ) , 0 , 1 , 1 , 0 , 1 } , { 17 , 6 ,
TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Relational Operator1"
) , TARGET_STRING ( "Phase" ) , 0 , 1 , 1 , 0 , 1 } , { 18 , 6 ,
TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Relational Operator2"
) , TARGET_STRING ( "Frequency" ) , 0 , 1 , 1 , 0 , 1 } , { 19 , 6 ,
TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Relational Operator3"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 1 } , { 20 , 6 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Switch2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 21 , 6 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Switch3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 22 , 1 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic A generation/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 23 , 1 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic A generation/Multiport Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 1 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic A generation/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 1 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic B generation/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 26 , 1 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic B generation/Multiport Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 27 , 1 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic B generation/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 6 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Discrete-Time Integrator1"
) , TARGET_STRING ( "Ramp" ) , 0 , 0 , 1 , 0 , 0 } , { 29 , 6 , TARGET_STRING
(
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 30 , 6 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Relational Operator1"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 1 } , { 31 , 6 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 32 , 6 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Switch1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 33 , 6 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Switch2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 34 , 6 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Stair Generator/Model/Look-Up Table"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 35 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source" ) , TARGET_STRING (
"VariationEntity" ) , 0 , 1 , 0 } , { 36 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source" ) , TARGET_STRING (
"HarmonicGeneration" ) , 0 , 1 , 0 } , { 37 , TARGET_STRING ( "Simu/B1/Kv" )
, TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 38 , TARGET_STRING (
"Simu/B1/Kv1" ) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 39 ,
TARGET_STRING ( "Simu/Three-Phase Programmable Voltage Source/Model/P1" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 40 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/SinglePhase" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 41 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/valp_nom" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 42 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/valp_nom1" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 43 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/valp_nom2" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 44 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 1 , 0 } , { 45 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Gain3" ) , TARGET_STRING
( "Gain" ) , 0 , 1 , 0 } , { 46 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Switch5" ) ,
TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 47 , TARGET_STRING (
"Simu/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( "DS_param" )
, 0 , 4 , 0 } , { 48 , TARGET_STRING (
"Simu/B1/Model/I A:/do not delete this gain" ) , TARGET_STRING ( "Gain" ) , 0
, 1 , 0 } , { 49 , TARGET_STRING (
"Simu/B1/Model/I B:/do not delete this gain" ) , TARGET_STRING ( "Gain" ) , 0
, 1 , 0 } , { 50 , TARGET_STRING (
"Simu/B1/Model/I C:/do not delete this gain" ) , TARGET_STRING ( "Gain" ) , 0
, 1 , 0 } , { 51 , TARGET_STRING (
"Simu/B1/Model/U A:/do not delete this gain" ) , TARGET_STRING ( "Gain" ) , 0
, 1 , 0 } , { 52 , TARGET_STRING (
"Simu/B1/Model/U B:/do not delete this gain" ) , TARGET_STRING ( "Gain" ) , 0
, 1 , 0 } , { 53 , TARGET_STRING (
"Simu/B1/Model/U C:/do not delete this gain" ) , TARGET_STRING ( "Gain" ) , 0
, 1 , 0 } , { 54 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Out1"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 55 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Out2"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 56 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic A generation"
) , TARGET_STRING ( "n_Harmo" ) , 0 , 1 , 0 } , { 57 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic A generation"
) , TARGET_STRING ( "Mag_Harmo" ) , 0 , 1 , 0 } , { 58 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic A generation"
) , TARGET_STRING ( "Phase_Harmo" ) , 0 , 1 , 0 } , { 59 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic A generation"
) , TARGET_STRING ( "Seq_Harmo" ) , 0 , 1 , 0 } , { 60 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic B generation"
) , TARGET_STRING ( "n_Harmo" ) , 0 , 1 , 0 } , { 61 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic B generation"
) , TARGET_STRING ( "Mag_Harmo" ) , 0 , 1 , 0 } , { 62 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic B generation"
) , TARGET_STRING ( "Phase_Harmo" ) , 0 , 1 , 0 } , { 63 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic B generation"
) , TARGET_STRING ( "Seq_Harmo" ) , 0 , 1 , 0 } , { 64 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Step"
) , TARGET_STRING ( "Time" ) , 0 , 1 , 0 } , { 65 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Step"
) , TARGET_STRING ( "Before" ) , 0 , 1 , 0 } , { 66 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Step"
) , TARGET_STRING ( "After" ) , 0 , 1 , 0 } , { 67 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Step1"
) , TARGET_STRING ( "Time" ) , 0 , 1 , 0 } , { 68 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Step1"
) , TARGET_STRING ( "Before" ) , 0 , 1 , 0 } , { 69 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Step1"
) , TARGET_STRING ( "After" ) , 0 , 1 , 0 } , { 70 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/timer" )
, TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 71 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/selector"
) , TARGET_STRING ( "InitialOutput" ) , 1 , 1 , 0 } , { 72 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/magnitude"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 73 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/frequency"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 74 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/phase" )
, TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 75 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem"
) , TARGET_STRING ( "VariationStep" ) , 0 , 1 , 0 } , { 76 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem"
) , TARGET_STRING ( "VariationRate" ) , 0 , 1 , 0 } , { 77 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem"
) , TARGET_STRING ( "VariationFreq" ) , 0 , 1 , 0 } , { 78 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem"
) , TARGET_STRING ( "VariationMag" ) , 0 , 1 , 0 } , { 79 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem"
) , TARGET_STRING ( "Ton_Variation" ) , 0 , 1 , 0 } , { 80 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem"
) , TARGET_STRING ( "Toff_Variation" ) , 0 , 1 , 0 } , { 81 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 82 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 83 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 84 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 85 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 86 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 87 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Constant6"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 88 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/valp_nom5"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 89 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Discrete-Time Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 1 , 0 } , { 90 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Discrete-Time Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 91 , TARGET_STRING
( "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 92 , TARGET_STRING (
"Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Gain4" )
, TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 93 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic A generation/Negative-sequence"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 94 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic A generation/Positive-sequence"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 95 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic A generation/Zero-sequence"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 96 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic A generation/valp_nom2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 97 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic A generation/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 98 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic B generation/Negative-sequence"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 99 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic B generation/Positive-sequence"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 100 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic B generation/Zero-sequence"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 101 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic B generation/valp_nom2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 102 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Harmonic Generator/Harmonic B generation/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 103 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 104 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 105 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 106 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 107 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 108 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 109 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Discrete-Time Integrator1"
) , TARGET_STRING ( "gainval" ) , 0 , 1 , 0 } , { 110 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Discrete-Time Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 111 ,
TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 112 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Step"
) , TARGET_STRING ( "Before" ) , 0 , 1 , 0 } , { 113 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Step"
) , TARGET_STRING ( "After" ) , 0 , 1 , 0 } , { 114 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Step1"
) , TARGET_STRING ( "Before" ) , 0 , 1 , 0 } , { 115 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Step1"
) , TARGET_STRING ( "After" ) , 0 , 1 , 0 } , { 116 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 117 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Switch2"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 118 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Variation SubSystem/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 119 ,
TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Stair Generator/Model/Look-Up Table"
) , TARGET_STRING ( "InputValues" ) , 0 , 5 , 0 } , { 120 , TARGET_STRING (
 "Simu/Three-Phase Programmable Voltage Source/Model/Signal generator/Stair Generator/Model/Look-Up Table"
) , TARGET_STRING ( "Table" ) , 0 , 5 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . bhw42paivi [ 0 ] , & rtB .
fifgk54qep [ 0 ] , & rtB . pxmxarczi5 [ 0 ] , & rtB . lexrgs2mhm [ 0 ] , &
rtB . pvl5c51pnp , & rtB . i4r4dicir4 , & rtB . jllfbb5fwm , & rtB .
og04ntp20z , & rtB . lxgpmrfcqy , & rtB . o5wtpcthil , & rtB . laxgavxprk , &
rtB . nrqkodwa1c [ 0 ] , & rtB . c4d1oupeki [ 0 ] , & rtB . jioahlusds , &
rtB . efte3d5qt1 , & rtB . i4r4dicir4 , & rtB . gel5csqx2x , & rtB .
dvvada2wq0 , & rtB . crivgmds1d , & rtB . muroutufee , & rtB . jllfbb5fwm , &
rtB . lxgpmrfcqy , & rtB . jk4n3tfbqk , & rtB . nvw1lcncob [ 0 ] , & rtB .
pxmxarczi5 [ 0 ] , & rtB . dnsebcby4u , & rtB . n5qwj2eq4f [ 0 ] , & rtB .
lexrgs2mhm [ 0 ] , & rtB . afdrb3rl2a , & rtB . dxoaamoywj , & rtB .
cnblyrn4lv , & rtB . m5idabume1 , & rtB . fitqev0uxw , & rtB . md3brhiy1m , &
rtB . pvl5c51pnp , & rtP .
ThreePhaseProgrammableVoltageSource_VariationEntity , & rtP .
ThreePhaseProgrammableVoltageSource_HarmonicGeneration , & rtP . Kv_Gain , &
rtP . Kv1_Gain , & rtP . P1_Value [ 0 ] , & rtP . SinglePhase_Value , & rtP .
valp_nom_Value , & rtP . valp_nom1_Value , & rtP . valp_nom2_Value_oppzryq301
, & rtP . Gain_Gain , & rtP . Gain3_Gain_nkqpbuotad , & rtP .
Switch5_Threshold , & rtP . StateSpace_DS_param [ 0 ] , & rtP .
donotdeletethisgain_Gain_en3nmrxgld , & rtP .
donotdeletethisgain_Gain_hsdfpbzlqb , & rtP .
donotdeletethisgain_Gain_by5bos33lx , & rtP . donotdeletethisgain_Gain , &
rtP . donotdeletethisgain_Gain_l234soa3tf , & rtP .
donotdeletethisgain_Gain_lkyvqrwckq , & rtP . Out1_Y0 , & rtP . Out2_Y0 , &
rtP . HarmonicAgeneration_n_Harmo , & rtP . HarmonicAgeneration_Mag_Harmo , &
rtP . HarmonicAgeneration_Phase_Harmo , & rtP . HarmonicAgeneration_Seq_Harmo
, & rtP . HarmonicBgeneration_n_Harmo , & rtP . HarmonicBgeneration_Mag_Harmo
, & rtP . HarmonicBgeneration_Phase_Harmo , & rtP .
HarmonicBgeneration_Seq_Harmo , & rtP . Step_Time , & rtP . Step_Y0 , & rtP .
Step_YFinal , & rtP . Step1_Time , & rtP . Step1_Y0 , & rtP . Step1_YFinal ,
& rtP . timer_Y0 , & rtP . selector_Y0 , & rtP . magnitude_Y0 , & rtP .
frequency_Y0 , & rtP . phase_Y0 , & rtP . VariationSubSystem_VariationStep ,
& rtP . VariationSubSystem_VariationRate , & rtP .
VariationSubSystem_VariationFreq , & rtP . VariationSubSystem_VariationMag ,
& rtP . VariationSubSystem_Ton_Variation , & rtP .
VariationSubSystem_Toff_Variation , & rtP . Constant_Value , & rtP .
Constant1_Value , & rtP . Constant2_Value , & rtP . Constant3_Value , & rtP .
Constant4_Value , & rtP . Constant5_Value , & rtP . Constant6_Value , & rtP .
valp_nom5_Value , & rtP . DiscreteTimeIntegrator_gainval , & rtP .
DiscreteTimeIntegrator_IC , & rtP . Gain2_Gain , & rtP . Gain4_Gain , & rtP .
Negativesequence_Value [ 0 ] , & rtP . Positivesequence_Value [ 0 ] , & rtP .
Zerosequence_Value [ 0 ] , & rtP . valp_nom2_Value , & rtP . Gain3_Gain , &
rtP . Negativesequence_Value_mod221u1p5 [ 0 ] , & rtP .
Positivesequence_Value_kdc0d2zbee [ 0 ] , & rtP .
Zerosequence_Value_b1kifksb2f [ 0 ] , & rtP . valp_nom2_Value_ailjqhj5iu , &
rtP . Gain3_Gain_pjrvm1pj0y , & rtP . Constant_Value_i43oev5xkv , & rtP .
Constant1_Value_hahhc3roxx , & rtP . Constant2_Value_hchuyjxq4b , & rtP .
Constant3_Value_fcet3ganpa , & rtP . Constant4_Value_dtyce2ojfb , & rtP .
Constant5_Value_hqow3frjxj , & rtP . DiscreteTimeIntegrator1_gainval , & rtP
. DiscreteTimeIntegrator1_IC , & rtP . Gain1_Gain , & rtP .
Step_Y0_igr4vpq0ox , & rtP . Step_YFinal_btkqknoc1j , & rtP .
Step1_Y0_fbkc4jckuh , & rtP . Step1_YFinal_m3vbyrrgui , & rtP .
Switch_Threshold , & rtP . Switch2_Threshold , & rtP .
UnitDelay_InitialCondition , & rtP . LookUpTable_XData [ 0 ] , & rtP .
LookUpTable_YData [ 0 ] , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 3 , 1 , 1 , 1 , 6 , 1 , 1 , 3 ,
6 , 3 , 1 , 10 } ; static const real_T rtcapiStoredFloats [ ] = { 5.0E-5 ,
0.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL
) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 1 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 35 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 86 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 502880823U , 3015393227U , 859318136U , 3029643202U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Simu_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Simu_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Simu_host_InitializeDataMapInfo ( Simu_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
