#include "Simu.h"
#include "rt_look.h"
#include "rt_look1d.h"
#include "mwmathutil.h"
#include "rtwtypes.h"
#include "Simu_private.h"
#include "rt_logging_mmi.h"
#include "Simu_capi.h"
#include "Simu_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.7 (R2022a) 13-Nov-2021" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; void MdlInitialize ( void ) { { int32_T i , j ; real_T * Ds = (
real_T * ) rtDW . cvatluqld2 . DS ; for ( i = 0 ; i < 6 ; i ++ ) { for ( j =
0 ; j < 3 ; j ++ ) Ds [ i * 3 + j ] = ( rtP . StateSpace_DS_param [ i + j * 6
] ) ; } } rtDW . isrz0mkxtu = rtP . DiscreteTimeIntegrator_IC ; rtDW .
aez3rrjtvq = rtP . DiscreteTimeIntegrator1_IC ; rtDW . dvny5bvldg = rtP .
UnitDelay_InitialCondition ; rtB . pvl5c51pnp = rtP . timer_Y0 ; rtB .
i4r4dicir4 = rtP . selector_Y0 ; rtB . jllfbb5fwm = rtP . magnitude_Y0 ; rtB
. og04ntp20z = rtP . frequency_Y0 ; rtB . lxgpmrfcqy = rtP . phase_Y0 ; rtB .
pxmxarczi5 [ 0 ] = rtP . Out1_Y0 ; rtB . lexrgs2mhm [ 0 ] = rtP . Out2_Y0 ;
rtB . pxmxarczi5 [ 1 ] = rtP . Out1_Y0 ; rtB . lexrgs2mhm [ 1 ] = rtP .
Out2_Y0 ; rtB . pxmxarczi5 [ 2 ] = rtP . Out1_Y0 ; rtB . lexrgs2mhm [ 2 ] =
rtP . Out2_Y0 ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "From8" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "From8" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "Simu/To Workspace" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ;
sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU
sigName = sdiGetLabelFromChars ( "From8" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 3 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. crfgssgjo3 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"c84d6c86-7cce-4ba7-96a9-327a1775176f" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . crfgssgjo3 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . crfgssgjo3 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . crfgssgjo3 . AQHandles ,
"5e-05" , 5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
crfgssgjo3 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . crfgssgjo3 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . crfgssgjo3 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . crfgssgjo3 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . crfgssgjo3 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"Voltage" ) ; sdiRegisterWksVariable ( rtDW . crfgssgjo3 . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "From7" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "From7" ) ; sdiLabelU blockPath = sdiGetLabelFromChars
( "Simu/To Workspace1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ;
sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU
sigName = sdiGetLabelFromChars ( "From7" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 3 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ist3mwdui0 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"da0771dd-e5ad-4a9b-aecf-e0c50287fe48" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . ist3mwdui0 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . ist3mwdui0 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ist3mwdui0 . AQHandles ,
"5e-05" , 5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ist3mwdui0 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ist3mwdui0 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ist3mwdui0 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ist3mwdui0 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ist3mwdui0 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"Current" ) ; sdiRegisterWksVariable ( rtDW . ist3mwdui0 . AQHandles ,
varName , "array" ) ; sdiFreeLabel ( varName ) ; } } } } } rtDW . ee1zw1h20t
= false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW .
lug5zdhh5r = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
rtDW . cj2gryf03t = 0U ; rtDW . mkikeoofxp = 0U ; { rtDW . cvatluqld2 . DS =
( real_T * ) calloc ( 6 * 3 , sizeof ( real_T ) ) ; rtDW . cvatluqld2 .
DX_COL = ( real_T * ) calloc ( 6 , sizeof ( real_T ) ) ; rtDW . cvatluqld2 .
TMP2 = ( real_T * ) calloc ( 3 , sizeof ( real_T ) ) ; } MdlInitialize ( ) ;
} void MdlOutputs ( int_T tid ) { real_T ddd1ecrisf ; real_T etvwhd5ao3_idx_0
; real_T etvwhd5ao3_idx_1 ; real_T heylz0utmk_idx_0 ; real_T heylz0utmk_idx_1
; real_T heylz0utmk_idx_2 ; real_T jce5fv51pu ; real_T pglmnmpz3a ; real_T
tmp ; if ( ssIsSampleHit ( rtS , 0 , 0 ) ) { srClearBC ( rtDW . lhmj03s2xn )
; } if ( ssIsSampleHit ( rtS , 0 , 0 ) ) { srClearBC ( rtDW . ouvnxj0ufc ) ;
} if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtP .
ThreePhaseProgrammableVoltageSource_VariationEntity - 1.0 > 0.0 ) { if ( !
rtDW . lug5zdhh5r ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . lug5zdhh5r =
true ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . pvl5c51pnp = rt_Lookup
( & rtP . LookUpTable_XData [ 0 ] , 10 , ssGetTaskTime ( rtS , 1 ) , & rtP .
LookUpTable_YData [ 0 ] ) ; rtB . jioahlusds = rtDW . isrz0mkxtu ; if (
ssGetTaskTime ( rtS , 1 ) < rtP . VariationSubSystem_Toff_Variation ) {
jce5fv51pu = rtP . Step1_Y0_fbkc4jckuh ; } else { jce5fv51pu = rtP .
Step1_YFinal_m3vbyrrgui ; } if ( ssGetTaskTime ( rtS , 1 ) < rtP .
VariationSubSystem_Ton_Variation ) { ddd1ecrisf = rtP . Step_Y0_igr4vpq0ox ;
} else { ddd1ecrisf = rtP . Step_YFinal_btkqknoc1j ; } rtB . afdrb3rl2a =
rtDW . aez3rrjtvq ; if ( jce5fv51pu >= rtP . Switch2_Threshold ) { switch ( (
int32_T ) rtP . valp_nom5_Value ) { case 1 : rtB . md3brhiy1m = rtP .
VariationSubSystem_VariationStep * ddd1ecrisf ; break ; case 2 : rtB .
md3brhiy1m = rtB . afdrb3rl2a ; break ; case 3 : rtB . md3brhiy1m =
muDoubleScalarSin ( rtB . afdrb3rl2a * rtB . dxoaamoywj ) * rtP .
VariationSubSystem_VariationMag ; break ; default : rtB . md3brhiy1m = rtP .
Constant5_Value_hqow3frjxj ; break ; } } else { rtB . md3brhiy1m = rtDW .
dvny5bvldg ; } if ( ( ! ( jce5fv51pu != 0.0 ) ) && rtB . cnblyrn4lv ) {
jce5fv51pu = rtP . Constant1_Value_hahhc3roxx ; } else { jce5fv51pu = rtB .
md3brhiy1m ; } if ( rtB . crivgmds1d ) { tmp = jce5fv51pu ; } else { tmp =
rtP . Constant5_Value ; } rtB . efte3d5qt1 = rtP . Gain2_Gain * tmp ; rtB .
i4r4dicir4 = ( rtB . muroutufee && rtB . gel5csqx2x ) ; rtB . og04ntp20z =
rtB . jioahlusds ; if ( rtB . gel5csqx2x ) { rtB . jllfbb5fwm = jce5fv51pu ;
} else { rtB . jllfbb5fwm = rtP . Constant1_Value ; } if ( rtB . dvvada2wq0 )
{ rtB . lxgpmrfcqy = rtP . Gain4_Gain * jce5fv51pu ; } else { rtB .
lxgpmrfcqy = rtP . Constant4_Value ; } if ( ddd1ecrisf >= rtP .
Switch_Threshold ) { rtB . m5idabume1 = rtB . fitqev0uxw ; } else { rtB .
m5idabume1 = rtP . Constant4_Value_dtyce2ojfb ; } } srUpdateBC ( rtDW .
ouvnxj0ufc ) ; } else if ( rtDW . lug5zdhh5r ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . isrz0mkxtu = rtB
. jioahlusds ; rtDW . aez3rrjtvq = rtB . afdrb3rl2a ; rtB . pvl5c51pnp = rtP
. timer_Y0 ; rtB . i4r4dicir4 = rtP . selector_Y0 ; rtB . jllfbb5fwm = rtP .
magnitude_Y0 ; rtB . og04ntp20z = rtP . frequency_Y0 ; rtB . lxgpmrfcqy = rtP
. phase_Y0 ; rtDW . lug5zdhh5r = false ; } ddd1ecrisf = rtB . jllfbb5fwm +
rtP . valp_nom2_Value_oppzryq301 ; if ( rtB . i4r4dicir4 ) { jce5fv51pu = rtB
. pvl5c51pnp ; } else { jce5fv51pu = ddd1ecrisf ; } etvwhd5ao3_idx_0 =
jce5fv51pu ; if ( rtP . SinglePhase_Value >= rtP . Switch5_Threshold ) {
etvwhd5ao3_idx_1 = ddd1ecrisf ; } else { etvwhd5ao3_idx_1 = jce5fv51pu ; }
ddd1ecrisf = ssGetTaskTime ( rtS , 1 ) * rtB . o5wtpcthil + rtB . og04ntp20z
; heylz0utmk_idx_0 = ( rtB . laxgavxprk + rtP . P1_Value [ 0 ] ) + rtB .
lxgpmrfcqy ; heylz0utmk_idx_1 = ( rtB . laxgavxprk + rtP . P1_Value [ 1 ] ) +
rtB . lxgpmrfcqy ; heylz0utmk_idx_2 = ( rtB . laxgavxprk + rtP . P1_Value [ 2
] ) + rtB . lxgpmrfcqy ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtP .
ThreePhaseProgrammableVoltageSource_HarmonicGeneration > 0.0 ) { if ( ! rtDW
. ee1zw1h20t ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . ee1zw1h20t =
true ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { pglmnmpz3a = rtP .
HarmonicAgeneration_n_Harmo * ddd1ecrisf ; if ( ssGetTaskTime ( rtS , 1 ) <
rtP . Step_Time ) { tmp = rtP . Step_Y0 ; } else { tmp = rtP . Step_YFinal ;
} if ( ssGetTaskTime ( rtS , 1 ) < rtP . Step1_Time ) { jce5fv51pu = rtP .
Step1_Y0 ; } else { jce5fv51pu = rtP . Step1_YFinal ; } jce5fv51pu += tmp ;
rtB . pxmxarczi5 [ 0 ] = muDoubleScalarSin ( ( pglmnmpz3a + rtB . jk4n3tfbqk
) + rtB . nvw1lcncob [ 0 ] ) * ( jce5fv51pu * rtP .
HarmonicAgeneration_Mag_Harmo ) ; rtB . pxmxarczi5 [ 1 ] = muDoubleScalarSin
( ( pglmnmpz3a + rtB . jk4n3tfbqk ) + rtB . nvw1lcncob [ 1 ] ) * ( jce5fv51pu
* rtP . HarmonicAgeneration_Mag_Harmo ) ; rtB . pxmxarczi5 [ 2 ] =
muDoubleScalarSin ( ( pglmnmpz3a + rtB . jk4n3tfbqk ) + rtB . nvw1lcncob [ 2
] ) * ( jce5fv51pu * rtP . HarmonicAgeneration_Mag_Harmo ) ; pglmnmpz3a = rtP
. HarmonicBgeneration_n_Harmo * ddd1ecrisf ; rtB . lexrgs2mhm [ 0 ] =
muDoubleScalarSin ( ( pglmnmpz3a + rtB . dnsebcby4u ) + rtB . n5qwj2eq4f [ 0
] ) * ( jce5fv51pu * rtP . HarmonicBgeneration_Mag_Harmo ) ; rtB . lexrgs2mhm
[ 1 ] = muDoubleScalarSin ( ( pglmnmpz3a + rtB . dnsebcby4u ) + rtB .
n5qwj2eq4f [ 1 ] ) * ( jce5fv51pu * rtP . HarmonicBgeneration_Mag_Harmo ) ;
rtB . lexrgs2mhm [ 2 ] = muDoubleScalarSin ( ( pglmnmpz3a + rtB . dnsebcby4u
) + rtB . n5qwj2eq4f [ 2 ] ) * ( jce5fv51pu * rtP .
HarmonicBgeneration_Mag_Harmo ) ; } srUpdateBC ( rtDW . lhmj03s2xn ) ; } else
if ( rtDW . ee1zw1h20t ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; rtB . pxmxarczi5 [ 0 ] = rtP . Out1_Y0 ; rtB . lexrgs2mhm [ 0 ] = rtP .
Out2_Y0 ; rtB . pxmxarczi5 [ 1 ] = rtP . Out1_Y0 ; rtB . lexrgs2mhm [ 1 ] =
rtP . Out2_Y0 ; rtB . pxmxarczi5 [ 2 ] = rtP . Out1_Y0 ; rtB . lexrgs2mhm [ 2
] = rtP . Out2_Y0 ; rtDW . ee1zw1h20t = false ; } } rtB . nrqkodwa1c [ 0 ] =
( muDoubleScalarSin ( ddd1ecrisf + heylz0utmk_idx_0 ) * etvwhd5ao3_idx_0 +
rtB . pxmxarczi5 [ 0 ] ) + rtB . lexrgs2mhm [ 0 ] ; rtB . nrqkodwa1c [ 1 ] =
( muDoubleScalarSin ( ddd1ecrisf + heylz0utmk_idx_1 ) * etvwhd5ao3_idx_1 +
rtB . pxmxarczi5 [ 1 ] ) + rtB . lexrgs2mhm [ 1 ] ; rtB . nrqkodwa1c [ 2 ] =
( muDoubleScalarSin ( ddd1ecrisf + heylz0utmk_idx_2 ) * etvwhd5ao3_idx_1 +
rtB . pxmxarczi5 [ 2 ] ) + rtB . lexrgs2mhm [ 2 ] ; { real_T accum ; real_T *
Ds = ( real_T * ) rtDW . cvatluqld2 . DS ; { int_T i1 ; real_T * y0 = & rtB .
c4d1oupeki [ 0 ] ; for ( i1 = 0 ; i1 < 6 ; i1 ++ ) { accum = 0.0 ; accum += *
( Ds ++ ) * rtB . nrqkodwa1c [ 0 ] ; accum += * ( Ds ++ ) * rtB . nrqkodwa1c
[ 1 ] ; accum += * ( Ds ++ ) * rtB . nrqkodwa1c [ 2 ] ; y0 [ i1 ] = accum ; }
} } rtB . fifgk54qep [ 0 ] = rtP . donotdeletethisgain_Gain * rtB .
c4d1oupeki [ 0 ] * rtP . Kv1_Gain ; rtB . fifgk54qep [ 1 ] = rtP .
donotdeletethisgain_Gain_l234soa3tf * rtB . c4d1oupeki [ 1 ] * rtP . Kv1_Gain
; rtB . fifgk54qep [ 2 ] = rtP . donotdeletethisgain_Gain_lkyvqrwckq * rtB .
c4d1oupeki [ 2 ] * rtP . Kv1_Gain ; rtB . bhw42paivi [ 0 ] = rtP .
donotdeletethisgain_Gain_en3nmrxgld * rtB . c4d1oupeki [ 3 ] * rtP . Kv_Gain
; rtB . bhw42paivi [ 1 ] = rtP . donotdeletethisgain_Gain_hsdfpbzlqb * rtB .
c4d1oupeki [ 4 ] * rtP . Kv_Gain ; rtB . bhw42paivi [ 2 ] = rtP .
donotdeletethisgain_Gain_by5bos33lx * rtB . c4d1oupeki [ 5 ] * rtP . Kv_Gain
; { if ( rtDW . crfgssgjo3 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . crfgssgjo3 . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . fifgk54qep [ 0 ] + 0 ) ; } } { if ( rtDW . ist3mwdui0 .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . ist3mwdui0 .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . bhw42paivi [ 0 ] +
0 ) ; } } } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) {
rtB . o5wtpcthil = rtP . Gain_Gain * rtP . valp_nom1_Value ; rtB . laxgavxprk
= rtP . Gain3_Gain_nkqpbuotad * rtP . valp_nom_Value ; rtB . jk4n3tfbqk = rtP
. Gain3_Gain * rtP . HarmonicAgeneration_Phase_Harmo ; switch ( ( int32_T ) (
rtP . HarmonicAgeneration_Seq_Harmo + rtP . valp_nom2_Value ) ) { case 1 :
rtB . nvw1lcncob [ 0 ] = rtP . Zerosequence_Value [ 0 ] ; rtB . nvw1lcncob [
1 ] = rtP . Zerosequence_Value [ 1 ] ; rtB . nvw1lcncob [ 2 ] = rtP .
Zerosequence_Value [ 2 ] ; break ; case 2 : rtB . nvw1lcncob [ 0 ] = rtP .
Positivesequence_Value [ 0 ] ; rtB . nvw1lcncob [ 1 ] = rtP .
Positivesequence_Value [ 1 ] ; rtB . nvw1lcncob [ 2 ] = rtP .
Positivesequence_Value [ 2 ] ; break ; default : rtB . nvw1lcncob [ 0 ] = rtP
. Negativesequence_Value [ 0 ] ; rtB . nvw1lcncob [ 1 ] = rtP .
Negativesequence_Value [ 1 ] ; rtB . nvw1lcncob [ 2 ] = rtP .
Negativesequence_Value [ 2 ] ; break ; } rtB . dnsebcby4u = rtP .
Gain3_Gain_pjrvm1pj0y * rtP . HarmonicBgeneration_Phase_Harmo ; switch ( (
int32_T ) ( rtP . HarmonicBgeneration_Seq_Harmo + rtP .
valp_nom2_Value_ailjqhj5iu ) ) { case 1 : rtB . n5qwj2eq4f [ 0 ] = rtP .
Zerosequence_Value_b1kifksb2f [ 0 ] ; rtB . n5qwj2eq4f [ 1 ] = rtP .
Zerosequence_Value_b1kifksb2f [ 1 ] ; rtB . n5qwj2eq4f [ 2 ] = rtP .
Zerosequence_Value_b1kifksb2f [ 2 ] ; break ; case 2 : rtB . n5qwj2eq4f [ 0 ]
= rtP . Positivesequence_Value_kdc0d2zbee [ 0 ] ; rtB . n5qwj2eq4f [ 1 ] =
rtP . Positivesequence_Value_kdc0d2zbee [ 1 ] ; rtB . n5qwj2eq4f [ 2 ] = rtP
. Positivesequence_Value_kdc0d2zbee [ 2 ] ; break ; default : rtB .
n5qwj2eq4f [ 0 ] = rtP . Negativesequence_Value_mod221u1p5 [ 0 ] ; rtB .
n5qwj2eq4f [ 1 ] = rtP . Negativesequence_Value_mod221u1p5 [ 1 ] ; rtB .
n5qwj2eq4f [ 2 ] = rtP . Negativesequence_Value_mod221u1p5 [ 2 ] ; break ; }
srUpdateBC ( rtDW . lhmj03s2xn ) ; rtB . gel5csqx2x = ( rtP .
ThreePhaseProgrammableVoltageSource_VariationEntity == rtP . Constant_Value )
; rtB . dvvada2wq0 = ( rtP .
ThreePhaseProgrammableVoltageSource_VariationEntity == rtP . Constant2_Value
) ; rtB . crivgmds1d = ( rtP .
ThreePhaseProgrammableVoltageSource_VariationEntity == rtP . Constant3_Value
) ; rtB . muroutufee = ( rtP . valp_nom5_Value == rtP . Constant6_Value ) ;
rtB . dxoaamoywj = rtP . Gain1_Gain * rtP . VariationSubSystem_VariationFreq
; rtB . cnblyrn4lv = ( rtP . valp_nom5_Value == rtP .
Constant3_Value_fcet3ganpa ) ; if ( rtP . valp_nom5_Value == rtP .
Constant_Value_i43oev5xkv ) { rtB . fitqev0uxw = rtP .
VariationSubSystem_VariationRate ; } else { rtB . fitqev0uxw = rtP .
Constant2_Value_hchuyjxq4b ; } srUpdateBC ( rtDW . ouvnxj0ufc ) ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtDW . lug5zdhh5r && ssIsSampleHit (
rtS , 1 , 0 ) ) { rtDW . isrz0mkxtu += rtP . DiscreteTimeIntegrator_gainval *
rtB . efte3d5qt1 ; rtDW . aez3rrjtvq += rtP . DiscreteTimeIntegrator1_gainval
* rtB . m5idabume1 ; rtDW . dvny5bvldg = rtB . md3brhiy1m ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { { free ( rtDW .
cvatluqld2 . DS ) ; free ( rtDW . cvatluqld2 . DX_COL ) ; free ( rtDW .
cvatluqld2 . TMP2 ) ; } { if ( rtDW . crfgssgjo3 . AQHandles ) {
sdiTerminateStreaming ( & rtDW . crfgssgjo3 . AQHandles ) ; } } { if ( rtDW .
ist3mwdui0 . AQHandles ) { sdiTerminateStreaming ( & rtDW . ist3mwdui0 .
AQHandles ) ; } } } static void mr_Simu_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_Simu_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Simu_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Simu_restoreDataFromMxArray ( void * destData , const mxArray * srcArray ,
mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_Simu_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Simu_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Simu_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_Simu_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Simu_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int
j , mwIndex offset , const void * srcData , size_t numBytes ) ; static void
mr_Simu_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int
j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T *
varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j )
) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T
* ) srcData , numBytes ) ; } static void
mr_Simu_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_Simu_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_Simu_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Simu_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber
( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( double ) fieldVal )
) ; } static uint_T mr_Simu_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_Simu_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Simu_GetDWork ( ) { static const char * ssDWFieldNames [ 3
] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Simu_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 10 ] = {
"rtDW.isrz0mkxtu" , "rtDW.aez3rrjtvq" , "rtDW.dvny5bvldg" , "rtDW.nm03o3xjle"
, "rtDW.ouvnxj0ufc" , "rtDW.lhmj03s2xn" , "rtDW.cj2gryf03t" ,
"rtDW.mkikeoofxp" , "rtDW.lug5zdhh5r" , "rtDW.ee1zw1h20t" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 10 , rtdwDataFieldNames ) ;
mr_Simu_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( rtDW .
isrz0mkxtu ) , sizeof ( rtDW . isrz0mkxtu ) ) ; mr_Simu_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( rtDW . aez3rrjtvq ) , sizeof ( rtDW .
aez3rrjtvq ) ) ; mr_Simu_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void
* ) & ( rtDW . dvny5bvldg ) , sizeof ( rtDW . dvny5bvldg ) ) ;
mr_Simu_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW .
nm03o3xjle ) , sizeof ( rtDW . nm03o3xjle ) ) ; mr_Simu_cacheDataAsMxArray (
rtdwData , 0 , 4 , ( const void * ) & ( rtDW . ouvnxj0ufc ) , sizeof ( rtDW .
ouvnxj0ufc ) ) ; mr_Simu_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void
* ) & ( rtDW . lhmj03s2xn ) , sizeof ( rtDW . lhmj03s2xn ) ) ;
mr_Simu_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW .
cj2gryf03t ) , sizeof ( rtDW . cj2gryf03t ) ) ; mr_Simu_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( rtDW . mkikeoofxp ) , sizeof ( rtDW .
mkikeoofxp ) ) ; mr_Simu_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void
* ) & ( rtDW . lug5zdhh5r ) , sizeof ( rtDW . lug5zdhh5r ) ) ;
mr_Simu_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW .
ee1zw1h20t ) , sizeof ( rtDW . ee1zw1h20t ) ) ; mxSetFieldByNumber ( ssDW , 0
, 1 , rtdwData ) ; } return ssDW ; } void mr_Simu_SetDWork ( const mxArray *
ssDW ) { ( void ) ssDW ; mr_Simu_restoreDataFromMxArray ( ( void * ) & ( rtB
) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_Simu_restoreDataFromMxArray ( ( void
* ) & ( rtDW . isrz0mkxtu ) , rtdwData , 0 , 0 , sizeof ( rtDW . isrz0mkxtu )
) ; mr_Simu_restoreDataFromMxArray ( ( void * ) & ( rtDW . aez3rrjtvq ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . aez3rrjtvq ) ) ;
mr_Simu_restoreDataFromMxArray ( ( void * ) & ( rtDW . dvny5bvldg ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . dvny5bvldg ) ) ;
mr_Simu_restoreDataFromMxArray ( ( void * ) & ( rtDW . nm03o3xjle ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . nm03o3xjle ) ) ;
mr_Simu_restoreDataFromMxArray ( ( void * ) & ( rtDW . ouvnxj0ufc ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . ouvnxj0ufc ) ) ;
mr_Simu_restoreDataFromMxArray ( ( void * ) & ( rtDW . lhmj03s2xn ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . lhmj03s2xn ) ) ;
mr_Simu_restoreDataFromMxArray ( ( void * ) & ( rtDW . cj2gryf03t ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . cj2gryf03t ) ) ;
mr_Simu_restoreDataFromMxArray ( ( void * ) & ( rtDW . mkikeoofxp ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . mkikeoofxp ) ) ;
mr_Simu_restoreDataFromMxArray ( ( void * ) & ( rtDW . lug5zdhh5r ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . lug5zdhh5r ) ) ;
mr_Simu_restoreDataFromMxArray ( ( void * ) & ( rtDW . ee1zw1h20t ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . ee1zw1h20t ) ) ; } } mxArray *
mr_Simu_GetSimStateDisallowedBlocks ( ) { mxArray * data = mxCreateCellMatrix
( 3 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const char * blockType [ 3
] = { "S-Function" , "Scope" , "S-Function" , } ; static const char *
blockPath [ 3 ] = { "Simu/powergui/EquivalentModel1/State-Space" ,
"Simu/Voltage and Current Bus5" ,
"Simu/powergui/EquivalentModel1/State-Space" , } ; static const int reason [
3 ] = { 0 , 0 , 2 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 3 ; ++ ( subs [ 0
] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs [
0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0
) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ;
ssSetNumBlocks ( rtS , 165 ) ; ssSetNumBlockIO ( rtS , 29 ) ;
ssSetNumBlockParams ( rtS , 135 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 5.0E-5 ) ;
ssSetOffsetTime ( rtS , 0 , 1.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 502880823U ) ;
ssSetChecksumVal ( rtS , 1 , 3015393227U ) ; ssSetChecksumVal ( rtS , 2 ,
859318136U ) ; ssSetChecksumVal ( rtS , 3 , 3029643202U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0
, sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork
) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 23 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; } Simu_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Simu" ) ; ssSetPath ( rtS , "Simu" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 10.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 } ; static
int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = {
"DSTATE" , "DSTATE" , "DSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
 "Simu/Three-Phase\nProgrammable\nVoltage Source/Model/Signal generator/Discrete-Time\nIntegrator"
,
 "Simu/Three-Phase\nProgrammable\nVoltage Source/Model/Signal generator/Variation\nSubSystem/Discrete-Time\nIntegrator1"
,
 "Simu/Three-Phase\nProgrammable\nVoltage Source/Model/Signal generator/Variation\nSubSystem/Unit Delay"
} ; static const char_T * rt_LoggedStateNames [ ] = { "DSTATE" , "DSTATE" ,
"DSTATE" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 } ;
static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE
, SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 ,
0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 3 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 3 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtDW . isrz0mkxtu ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtDW . aez3rrjtvq ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtDW . dvny5bvldg ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetStepSize ( rtS , 5.0E-5 ) ; ssSetMinStepSize (
rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError (
rtS , 0 ) ; ssSetMaxStepSize ( rtS , 5.0E-5 ) ; ssSetSolverMaxOrder ( rtS , -
1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL )
) ; ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "VariableStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 , 502880823U
) ; ssSetChecksumVal ( rtS , 1 , 3015393227U ) ; ssSetChecksumVal ( rtS , 2 ,
859318136U ) ; ssSetChecksumVal ( rtS , 3 , 3029643202U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 7 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = (
sysRanDType * ) & rtDW . lhmj03s2xn ; systemRan [ 2 ] = ( sysRanDType * ) &
rtDW . ouvnxj0ufc ; systemRan [ 3 ] = ( sysRanDType * ) & rtDW . ouvnxj0ufc ;
systemRan [ 4 ] = ( sysRanDType * ) & rtDW . ouvnxj0ufc ; systemRan [ 5 ] = (
sysRanDType * ) & rtDW . ouvnxj0ufc ; systemRan [ 6 ] = ( sysRanDType * ) &
rtDW . ouvnxj0ufc ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS )
, & ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr (
ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr (
ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Simu_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_Simu_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS , mr_Simu_SetDWork )
; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS )
) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
