#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , {
"struct_3et2bezUCBLW39S3wzTqhH" , 17 , 240 } , { "uint64_T" , 18 , 8 } , {
"int64_T" , 19 , 8 } , { "char_T" , 20 , 8 } , { "uchar_T" , 21 , 8 } , {
"time_T" , 22 , 8 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T
) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof (
int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) ,
sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof (
pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof (
int32_T ) , sizeof ( int64_T ) , sizeof ( uint64_T ) , sizeof (
struct_3et2bezUCBLW39S3wzTqhH ) , sizeof ( uint64_T ) , sizeof ( int64_T ) ,
sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "int64_T" , "uint64_T" ,
"struct_3et2bezUCBLW39S3wzTqhH" , "uint64_T" , "int64_T" , "char_T" ,
"uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions [ ] = { { (
char_T * ) ( & rtB . nrqkodwa1c [ 0 ] ) , 0 , 0 , 42 } , { ( char_T * ) ( &
rtB . i4r4dicir4 ) , 8 , 0 , 6 } , { ( char_T * ) ( & rtDW . isrz0mkxtu ) , 0
, 0 , 3 } , { ( char_T * ) ( & rtDW . cvatluqld2 . AS ) , 11 , 0 , 5 } , { (
char_T * ) ( & rtDW . nm03o3xjle [ 0 ] ) , 10 , 0 , 11 } , { ( char_T * ) ( &
rtDW . ouvnxj0ufc ) , 2 , 0 , 2 } , { ( char_T * ) ( & rtDW . cj2gryf03t ) ,
3 , 0 , 2 } , { ( char_T * ) ( & rtDW . lug5zdhh5r ) , 8 , 0 , 2 } } ; static
DataTypeTransitionTable rtBTransTable = { 8U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP .
ThreePhaseProgrammableVoltageSource_HarmonicGeneration ) , 0 , 0 , 134 } , {
( char_T * ) ( & rtP . selector_Y0 ) , 8 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 2U , rtPTransitions } ;
