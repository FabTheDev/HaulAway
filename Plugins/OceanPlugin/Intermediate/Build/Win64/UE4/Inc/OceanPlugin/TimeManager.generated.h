// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FTimeDate;
#ifdef OCEANPLUGIN_TimeManager_generated_h
#error "TimeManager.generated.h already included, missing '#pragma once' in TimeManager.h"
#endif
#define OCEANPLUGIN_TimeManager_generated_h

#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateMoonPhase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateMoonPhase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateMoonAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->CalculateMoonAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateSunAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->CalculateSunAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncrementTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncrementTime(Z_Param_deltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeapYear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_year); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLeapYear(Z_Param_year); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetYearPhase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetYearPhase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDayPhase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDayPhase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentLocalTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentLocalTime(Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetElapsedDayInMinutes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetElapsedDayInMinutes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDaysInMonth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_year); \
		P_GET_PROPERTY(UIntProperty,Z_Param_month); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDaysInMonth(Z_Param_year,Z_Param_month); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDaysInYear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_year); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDaysInYear(Z_Param_year); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDayOfYear) \
	{ \
		P_GET_STRUCT(FTimeDate,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDayOfYear(Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeCalendar) \
	{ \
		P_GET_STRUCT(FTimeDate,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeCalendar(Z_Param_time); \
		P_NATIVE_END; \
	}


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateMoonPhase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->CalculateMoonPhase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateMoonAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->CalculateMoonAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateSunAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->CalculateSunAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncrementTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncrementTime(Z_Param_deltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeapYear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_year); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLeapYear(Z_Param_year); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetYearPhase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetYearPhase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDayPhase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDayPhase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentLocalTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentLocalTime(Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetElapsedDayInMinutes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetElapsedDayInMinutes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDaysInMonth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_year); \
		P_GET_PROPERTY(UIntProperty,Z_Param_month); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDaysInMonth(Z_Param_year,Z_Param_month); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDaysInYear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_year); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDaysInYear(Z_Param_year); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDayOfYear) \
	{ \
		P_GET_STRUCT(FTimeDate,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDayOfYear(Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeCalendar) \
	{ \
		P_GET_STRUCT(FTimeDate,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeCalendar(Z_Param_time); \
		P_NATIVE_END; \
	}


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimeManager(); \
	friend struct Z_Construct_UClass_ATimeManager_Statics; \
public: \
	DECLARE_CLASS(ATimeManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATimeManager)


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_INCLASS \
private: \
	static void StaticRegisterNativesATimeManager(); \
	friend struct Z_Construct_UClass_ATimeManager_Statics; \
public: \
	DECLARE_CLASS(ATimeManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATimeManager)


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATimeManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATimeManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimeManager(ATimeManager&&); \
	NO_API ATimeManager(const ATimeManager&); \
public:


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATimeManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimeManager(ATimeManager&&); \
	NO_API ATimeManager(const ATimeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATimeManager)


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_PRIVATE_PROPERTY_OFFSET
#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_30_PROLOG
#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_PRIVATE_PROPERTY_OFFSET \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_RPC_WRAPPERS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_INCLASS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_PRIVATE_PROPERTY_OFFSET \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_INCLASS_NO_PURE_DECLS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TimeManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_Sky_TimeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
