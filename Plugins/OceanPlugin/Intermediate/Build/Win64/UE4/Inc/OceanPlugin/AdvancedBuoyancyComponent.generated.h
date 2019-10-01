// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FForceTriangle;
struct FBuoyancyVertex;
struct FColor;
#ifdef OCEANPLUGIN_AdvancedBuoyancyComponent_generated_h
#error "AdvancedBuoyancyComponent.generated.h already included, missing '#pragma once' in AdvancedBuoyancyComponent.h"
#endif
#define OCEANPLUGIN_AdvancedBuoyancyComponent_generated_h

#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FForceTriangle_Statics; \
	OCEANPLUGIN_API static class UScriptStruct* StaticStruct();


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBuoyancyVertex_Statics; \
	OCEANPLUGIN_API static class UScriptStruct* StaticStruct();


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriangleArea) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_STRUCT(FVector,Z_Param_C); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->TriangleArea(Z_Param_A,Z_Param_B,Z_Param_C); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOceanDepthFromGrid) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_UBOOL(Z_Param_bJustGetHeightAtLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetOceanDepthFromGrid(Z_Param_Position,Z_Param_bJustGetHeightAtLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyForce) \
	{ \
		P_GET_STRUCT(FForceTriangle,Z_Param_TriForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyForce(Z_Param_TriForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplitTriangle) \
	{ \
		P_GET_STRUCT(FBuoyancyVertex,Z_Param_H); \
		P_GET_STRUCT(FBuoyancyVertex,Z_Param_M); \
		P_GET_STRUCT(FBuoyancyVertex,Z_Param_L); \
		P_GET_STRUCT(FVector,Z_Param_InArrow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FForceTriangle>*)Z_Param__Result=P_THIS->SplitTriangle(Z_Param_H,Z_Param_M,Z_Param_L,Z_Param_InArrow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplySlamForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_SlamForce); \
		P_GET_STRUCT(FVector,Z_Param_TriCenter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplySlamForce(Z_Param_SlamForce,Z_Param_TriCenter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshDensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDensity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewWaterDensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshDensity(Z_Param_NewDensity,Z_Param_NewWaterDensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugStuff) \
	{ \
		P_GET_STRUCT(FForceTriangle,Z_Param_TriForce); \
		P_GET_STRUCT(FColor,Z_Param_DebugColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawDebugStuff(Z_Param_TriForce,Z_Param_DebugColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOcean) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetOcean(); \
		P_NATIVE_END; \
	}


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriangleArea) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_A); \
		P_GET_STRUCT(FVector,Z_Param_B); \
		P_GET_STRUCT(FVector,Z_Param_C); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->TriangleArea(Z_Param_A,Z_Param_B,Z_Param_C); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOceanDepthFromGrid) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_UBOOL(Z_Param_bJustGetHeightAtLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetOceanDepthFromGrid(Z_Param_Position,Z_Param_bJustGetHeightAtLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyForce) \
	{ \
		P_GET_STRUCT(FForceTriangle,Z_Param_TriForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyForce(Z_Param_TriForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplitTriangle) \
	{ \
		P_GET_STRUCT(FBuoyancyVertex,Z_Param_H); \
		P_GET_STRUCT(FBuoyancyVertex,Z_Param_M); \
		P_GET_STRUCT(FBuoyancyVertex,Z_Param_L); \
		P_GET_STRUCT(FVector,Z_Param_InArrow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FForceTriangle>*)Z_Param__Result=P_THIS->SplitTriangle(Z_Param_H,Z_Param_M,Z_Param_L,Z_Param_InArrow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplySlamForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_SlamForce); \
		P_GET_STRUCT(FVector,Z_Param_TriCenter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplySlamForce(Z_Param_SlamForce,Z_Param_TriCenter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshDensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDensity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewWaterDensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshDensity(Z_Param_NewDensity,Z_Param_NewWaterDensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawDebugStuff) \
	{ \
		P_GET_STRUCT(FForceTriangle,Z_Param_TriForce); \
		P_GET_STRUCT(FColor,Z_Param_DebugColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawDebugStuff(Z_Param_TriForce,Z_Param_DebugColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOcean) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetOcean(); \
		P_NATIVE_END; \
	}


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedBuoyancyComponent(); \
	friend struct Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvancedBuoyancyComponent, USceneComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedBuoyancyComponent)


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedBuoyancyComponent(); \
	friend struct Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics; \
public: \
	DECLARE_CLASS(UAdvancedBuoyancyComponent, USceneComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedBuoyancyComponent)


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedBuoyancyComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedBuoyancyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedBuoyancyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedBuoyancyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedBuoyancyComponent(UAdvancedBuoyancyComponent&&); \
	NO_API UAdvancedBuoyancyComponent(const UAdvancedBuoyancyComponent&); \
public:


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedBuoyancyComponent(UAdvancedBuoyancyComponent&&); \
	NO_API UAdvancedBuoyancyComponent(const UAdvancedBuoyancyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedBuoyancyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedBuoyancyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAdvancedBuoyancyComponent)


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_PRIVATE_PROPERTY_OFFSET
#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_105_PROLOG
#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_PRIVATE_PROPERTY_OFFSET \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_RPC_WRAPPERS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_INCLASS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_PRIVATE_PROPERTY_OFFSET \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_INCLASS_NO_PURE_DECLS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_AdvancedBuoyancyComponent_AdvancedBuoyancyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
