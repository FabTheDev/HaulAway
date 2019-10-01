// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
class UTexture2D;
struct FVector;
class UWorld;
#ifdef OCEANPLUGIN_OceanManager_generated_h
#error "OceanManager.generated.h already included, missing '#pragma once' in OceanManager.h"
#endif
#define OCEANPLUGIN_OceanManager_generated_h

#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaveSetParameters_Statics; \
	static class UScriptStruct* StaticStruct();


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaveParameter_Statics; \
	static class UScriptStruct* StaticStruct();


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeightmapPixel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_U); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_V); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetHeightmapPixel(Z_Param_U,Z_Param_V); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadLandscapeHeightmap) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Tex2D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadLandscapeHeightmap(Z_Param_Tex2D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWaveHeightValue) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_UBOOL(Z_Param_HeightOnly); \
		P_GET_UBOOL(Z_Param_TwoIterations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWaveHeightValue(Z_Param_Out_location,Z_Param_World,Z_Param_HeightOnly,Z_Param_TwoIterations); \
		P_NATIVE_END; \
	}


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeightmapPixel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_U); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_V); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetHeightmapPixel(Z_Param_U,Z_Param_V); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadLandscapeHeightmap) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Tex2D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadLandscapeHeightmap(Z_Param_Tex2D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWaveHeightValue) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_GET_UBOOL(Z_Param_HeightOnly); \
		P_GET_UBOOL(Z_Param_TwoIterations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetWaveHeightValue(Z_Param_Out_location,Z_Param_World,Z_Param_HeightOnly,Z_Param_TwoIterations); \
		P_NATIVE_END; \
	}


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOceanManager(); \
	friend struct Z_Construct_UClass_AOceanManager_Statics; \
public: \
	DECLARE_CLASS(AOceanManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOceanManager)


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_INCLASS \
private: \
	static void StaticRegisterNativesAOceanManager(); \
	friend struct Z_Construct_UClass_AOceanManager_Statics; \
public: \
	DECLARE_CLASS(AOceanManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOceanManager)


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOceanManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOceanManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOceanManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOceanManager(AOceanManager&&); \
	NO_API AOceanManager(const AOceanManager&); \
public:


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOceanManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOceanManager(AOceanManager&&); \
	NO_API AOceanManager(const AOceanManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOceanManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOceanManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOceanManager)


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_PRIVATE_PROPERTY_OFFSET
#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_132_PROLOG
#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_PRIVATE_PROPERTY_OFFSET \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_RPC_WRAPPERS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_INCLASS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_PRIVATE_PROPERTY_OFFSET \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_INCLASS_NO_PURE_DECLS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h_135_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OceanManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_OceanManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
