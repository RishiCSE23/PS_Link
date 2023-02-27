#ifndef RTW_HEADER_Simu_h_
#define RTW_HEADER_Simu_h_
#ifndef Simu_COMMON_INCLUDES_
#define Simu_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Simu_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Simu
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (29) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T nrqkodwa1c [ 3 ] ; real_T c4d1oupeki [ 6 ] ; real_T
fifgk54qep [ 3 ] ; real_T bhw42paivi [ 3 ] ; real_T o5wtpcthil ; real_T
laxgavxprk ; real_T pvl5c51pnp ; real_T jioahlusds ; real_T afdrb3rl2a ;
real_T md3brhiy1m ; real_T efte3d5qt1 ; real_T og04ntp20z ; real_T jllfbb5fwm
; real_T lxgpmrfcqy ; real_T m5idabume1 ; real_T dxoaamoywj ; real_T
fitqev0uxw ; real_T pxmxarczi5 [ 3 ] ; real_T lexrgs2mhm [ 3 ] ; real_T
jk4n3tfbqk ; real_T nvw1lcncob [ 3 ] ; real_T dnsebcby4u ; real_T n5qwj2eq4f
[ 3 ] ; boolean_T i4r4dicir4 ; boolean_T gel5csqx2x ; boolean_T dvvada2wq0 ;
boolean_T crivgmds1d ; boolean_T muroutufee ; boolean_T cnblyrn4lv ; } B ;
typedef struct { real_T isrz0mkxtu ; real_T aez3rrjtvq ; real_T dvny5bvldg ;
struct { void * AS ; void * BS ; void * CS ; void * DS ; void * DX_COL ; void
* BD_COL ; void * TMP1 ; void * TMP2 ; void * XTMP ; void * SWITCH_STATUS ;
void * SWITCH_STATUS_INIT ; void * SW_CHG ; void * G_STATE ; void * USWLAST ;
void * XKM12 ; void * XKP12 ; void * XLAST ; void * ULAST ; void * IDX_SW_CHG
; void * Y_SWITCH ; void * SWITCH_TYPES ; void * IDX_OUT_SW ; void *
SWITCH_TOPO_SAVED_IDX ; void * SWITCH_MAP ; } cvatluqld2 ; struct { void *
LoggedData [ 2 ] ; } ozvx3jkzq1 ; struct { void * AQHandles ; } crfgssgjo3 ;
struct { void * AQHandles ; } ist3mwdui0 ; int_T nm03o3xjle [ 11 ] ; int8_T
ouvnxj0ufc ; int8_T lhmj03s2xn ; uint8_T cj2gryf03t ; uint8_T mkikeoofxp ;
boolean_T lug5zdhh5r ; boolean_T ee1zw1h20t ; } DW ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
ThreePhaseProgrammableVoltageSource_HarmonicGeneration ; real_T
HarmonicAgeneration_Mag_Harmo ; real_T HarmonicBgeneration_Mag_Harmo ; real_T
HarmonicAgeneration_Phase_Harmo ; real_T HarmonicBgeneration_Phase_Harmo ;
real_T HarmonicAgeneration_Seq_Harmo ; real_T HarmonicBgeneration_Seq_Harmo ;
real_T VariationSubSystem_Toff_Variation ; real_T
VariationSubSystem_Ton_Variation ; real_T
ThreePhaseProgrammableVoltageSource_VariationEntity ; real_T
VariationSubSystem_VariationFreq ; real_T VariationSubSystem_VariationMag ;
real_T VariationSubSystem_VariationRate ; real_T
VariationSubSystem_VariationStep ; real_T HarmonicAgeneration_n_Harmo ;
real_T HarmonicBgeneration_n_Harmo ; real_T Out1_Y0 ; real_T Out2_Y0 ; real_T
Step_Time ; real_T Step_Y0 ; real_T Step_YFinal ; real_T Step1_Time ; real_T
Step1_Y0 ; real_T Step1_YFinal ; real_T Gain3_Gain ; real_T valp_nom2_Value ;
real_T Zerosequence_Value [ 3 ] ; real_T Positivesequence_Value [ 3 ] ;
real_T Negativesequence_Value [ 3 ] ; real_T Gain3_Gain_pjrvm1pj0y ; real_T
valp_nom2_Value_ailjqhj5iu ; real_T Zerosequence_Value_b1kifksb2f [ 3 ] ;
real_T Positivesequence_Value_kdc0d2zbee [ 3 ] ; real_T
Negativesequence_Value_mod221u1p5 [ 3 ] ; real_T Gain4_Gain ; real_T timer_Y0
; real_T magnitude_Y0 ; real_T frequency_Y0 ; real_T phase_Y0 ; real_T
LookUpTable_XData [ 10 ] ; real_T LookUpTable_YData [ 10 ] ; real_T
DiscreteTimeIntegrator_gainval ; real_T DiscreteTimeIntegrator_IC ; real_T
Step1_Y0_fbkc4jckuh ; real_T Step1_YFinal_m3vbyrrgui ; real_T
Step_Y0_igr4vpq0ox ; real_T Step_YFinal_btkqknoc1j ; real_T
DiscreteTimeIntegrator1_gainval ; real_T DiscreteTimeIntegrator1_IC ; real_T
UnitDelay_InitialCondition ; real_T Switch2_Threshold ; real_T Gain2_Gain ;
real_T Switch_Threshold ; real_T Constant_Value ; real_T Constant1_Value ;
real_T Constant2_Value ; real_T Constant3_Value ; real_T Constant4_Value ;
real_T Constant5_Value ; real_T Constant6_Value ; real_T valp_nom5_Value ;
real_T Constant_Value_i43oev5xkv ; real_T Constant1_Value_hahhc3roxx ; real_T
Constant2_Value_hchuyjxq4b ; real_T Constant3_Value_fcet3ganpa ; real_T
Constant4_Value_dtyce2ojfb ; real_T Constant5_Value_hqow3frjxj ; real_T
Gain1_Gain ; real_T Switch5_Threshold ; real_T StateSpace_DS_param [ 18 ] ;
real_T donotdeletethisgain_Gain ; real_T donotdeletethisgain_Gain_l234soa3tf
; real_T donotdeletethisgain_Gain_lkyvqrwckq ; real_T Kv1_Gain ; real_T
donotdeletethisgain_Gain_en3nmrxgld ; real_T
donotdeletethisgain_Gain_hsdfpbzlqb ; real_T
donotdeletethisgain_Gain_by5bos33lx ; real_T Kv_Gain ; real_T valp_nom1_Value
; real_T Gain_Gain ; real_T valp_nom_Value ; real_T Gain3_Gain_nkqpbuotad ;
real_T P1_Value [ 3 ] ; real_T SinglePhase_Value ; real_T
valp_nom2_Value_oppzryq301 ; boolean_T selector_Y0 ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_Simu_GetDWork ( ) ; extern void mr_Simu_SetDWork ( const
mxArray * ssDW ) ; extern mxArray * mr_Simu_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo * Simu_GetCAPIStaticMap ( void )
; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
