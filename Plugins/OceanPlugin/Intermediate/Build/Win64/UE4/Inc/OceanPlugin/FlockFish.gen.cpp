// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/Fish/FlockFish.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockFish() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AFlockFish_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AFlockFish();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AFlockFish_OnBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AFlockFish_OnEndOverlap();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AFlockFish::StaticRegisterNativesAFlockFish()
	{
		UClass* Class = AFlockFish::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &AFlockFish::execOnBeginOverlap },
			{ "OnEndOverlap", &AFlockFish::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics
	{
		struct FlockFish_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* activatedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activatedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_activatedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_sweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "sweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnBeginOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_sweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FlockFish_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FlockFish_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_otherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "otherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnBeginOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_otherComp = { UE4CodeGen_Private::EPropertyClass::Object, "otherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnBeginOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_otherActor = { UE4CodeGen_Private::EPropertyClass::Object, "otherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnBeginOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_activatedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_activatedComp = { UE4CodeGen_Private::EPropertyClass::Object, "activatedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnBeginOverlap_Parms, activatedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_activatedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_activatedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::NewProp_activatedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockFish, "OnBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(FlockFish_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlockFish_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlockFish_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics
	{
		struct FlockFish_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* activatedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activatedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_activatedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_otherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "otherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnEndOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_otherComp = { UE4CodeGen_Private::EPropertyClass::Object, "otherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnEndOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_otherActor = { UE4CodeGen_Private::EPropertyClass::Object, "otherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnEndOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_activatedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_activatedComp = { UE4CodeGen_Private::EPropertyClass::Object, "activatedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnEndOverlap_Parms, activatedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_activatedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_activatedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::NewProp_activatedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockFish, "OnEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FlockFish_eventOnEndOverlap_Parms), Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlockFish_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlockFish_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlockFish_NoRegister()
	{
		return AFlockFish::StaticClass();
	}
	struct Z_Construct_UClass_AFlockFish_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMode_MetaData[];
#endif
		static void NewProp_DebugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateEveryTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateEveryTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumNeighborsToEvaluate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumNeighborsToEvaluate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomZSeekMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomZSeekMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomZSeekMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomZSeekMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_underwaterMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_underwaterMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_underwaterMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_underwaterMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_playerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidForceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidForceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeekDecelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeekDecelerationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseAccelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaseAccelerationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeAccelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeAccelerationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeDistanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeperationDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeperationDistanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distBehindSpeedUpRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distBehindSpeedUpRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hungerResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hungerResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_turnFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_turnFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_turnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_turnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_followDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_followDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_neighborType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_neighborType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_preyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_preyTypes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_preyTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_enemyTypes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_enemyTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isLeader_MetaData[];
#endif
		static void NewProp_isLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FishInteractionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FishInteractionSphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlockFish_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlockFish_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlockFish_OnBeginOverlap, "OnBeginOverlap" }, // 38475595
		{ &Z_Construct_UFunction_AFlockFish_OnEndOverlap, "OnEndOverlap" }, // 2775411619
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Fish/FlockFish.h" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_DebugMode_MetaData[] = {
		{ "Category", "TESTING" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Run fish in debug mode" },
	};
#endif
	void Z_Construct_UClass_AFlockFish_Statics::NewProp_DebugMode_SetBit(void* Obj)
	{
		((AFlockFish*)Obj)->DebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_DebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "DebugMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFlockFish), &Z_Construct_UClass_AFlockFish_Statics::NewProp_DebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_DebugMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_DebugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_UpdateEveryTick_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "When set to 0, update every tick, otherwise update after specified time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_UpdateEveryTick = { UE4CodeGen_Private::EPropertyClass::Float, "UpdateEveryTick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, UpdateEveryTick), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_UpdateEveryTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_UpdateEveryTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_NumNeighborsToEvaluate_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Max number of neighbors to evaluate on a Tick (0 for all neighbors)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_NumNeighborsToEvaluate = { UE4CodeGen_Private::EPropertyClass::Float, "NumNeighborsToEvaluate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, NumNeighborsToEvaluate), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_NumNeighborsToEvaluate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_NumNeighborsToEvaluate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_CustomZSeekMax_MetaData[] = {
		{ "Category", "Environment Variables" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Custom Z range for targeting (NULL will use full range of min/max)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_CustomZSeekMax = { UE4CodeGen_Private::EPropertyClass::Float, "CustomZSeekMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, CustomZSeekMax), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_CustomZSeekMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_CustomZSeekMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_CustomZSeekMin_MetaData[] = {
		{ "Category", "Environment Variables" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Custom Z range for targeting (NULL will use full range of min/max)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_CustomZSeekMin = { UE4CodeGen_Private::EPropertyClass::Float, "CustomZSeekMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, CustomZSeekMin), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_CustomZSeekMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_CustomZSeekMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_underwaterMax_MetaData[] = {
		{ "Category", "Environment Variables" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "volume that is considered underwater" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_underwaterMax = { UE4CodeGen_Private::EPropertyClass::Struct, "underwaterMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, underwaterMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_underwaterMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_underwaterMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_underwaterMin_MetaData[] = {
		{ "Category", "Environment Variables" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "volume that is considered underwater" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_underwaterMin = { UE4CodeGen_Private::EPropertyClass::Struct, "underwaterMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, underwaterMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_underwaterMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_underwaterMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_playerType_MetaData[] = {
		{ "Category", "Environment Variables" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Player the fish will avoid" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_playerType = { UE4CodeGen_Private::EPropertyClass::Class, "playerType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, playerType), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_playerType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_playerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_AvoidanceForce_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Avoidance force" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_AvoidanceForce = { UE4CodeGen_Private::EPropertyClass::Float, "AvoidanceForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, AvoidanceForce), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_AvoidanceForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_AvoidanceForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_AvoidForceMultiplier_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Avoid Distance Multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_AvoidForceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "AvoidForceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, AvoidForceMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_AvoidForceMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_AvoidForceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_SeekDecelerationMultiplier_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Multiplies with delta time since last tick when lerping to regular speed (While Seeking)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_SeekDecelerationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "SeekDecelerationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, SeekDecelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_SeekDecelerationMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_SeekDecelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_ChaseAccelerationMultiplier_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Multiplies with delta time since last tick when lerping to max speed (While Chasing)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_ChaseAccelerationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "ChaseAccelerationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, ChaseAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_ChaseAccelerationMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_ChaseAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_FleeAccelerationMultiplier_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Multiplies with delta time since last tick when lerping to max speed (While Fleeing)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_FleeAccelerationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "FleeAccelerationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, FleeAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_FleeAccelerationMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_FleeAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_FleeDistanceMultiplier_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Multiplies With Radius of Fish Interaction Sphere for Flee Distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_FleeDistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "FleeDistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, FleeDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_FleeDistanceMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_FleeDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_SeperationDistanceMultiplier_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Multiplies With Radius of Fish Interaction Sphere for neighbor seperation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_SeperationDistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "SeperationDistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, SeperationDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_SeperationDistanceMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_SeperationDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_distBehindSpeedUpRange_MetaData[] = {
		{ "Category", "Fish Attributes" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Go faster when fish is this distance behind leader" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_distBehindSpeedUpRange = { UE4CodeGen_Private::EPropertyClass::Float, "distBehindSpeedUpRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, distBehindSpeedUpRange), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_distBehindSpeedUpRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_distBehindSpeedUpRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_hungerResetTime_MetaData[] = {
		{ "Category", "Fish Attributes" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "time after eating until it is hungry again" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_hungerResetTime = { UE4CodeGen_Private::EPropertyClass::Float, "hungerResetTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, hungerResetTime), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_hungerResetTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_hungerResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_turnFrequency_MetaData[] = {
		{ "Category", "Fish Attributes" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Frequency of turning ( turn every \"turnFrequency\" seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_turnFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "turnFrequency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, turnFrequency), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_turnFrequency_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_turnFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_turnSpeed_MetaData[] = {
		{ "Category", "Fish Attributes" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Speed at which the fish turns (Try to have predators be slightly faster)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_turnSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "turnSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, turnSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_turnSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_turnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_maxSpeed_MetaData[] = {
		{ "Category", "Fish Attributes" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Max Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_maxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "maxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, maxSpeed), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_maxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_maxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Fish Attributes" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Defualt Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_speed = { UE4CodeGen_Private::EPropertyClass::Float, "speed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, speed), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_followDist_MetaData[] = {
		{ "Category", "Fish Attributes" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Distance to that fish will try to remain behind leader" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_followDist = { UE4CodeGen_Private::EPropertyClass::Float, "followDist", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, followDist), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_followDist_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_followDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_neighborType_MetaData[] = {
		{ "Category", "Fish Attributes" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Neighbor type of the fish ( typically itself, but needed for code atm)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_neighborType = { UE4CodeGen_Private::EPropertyClass::Class, "neighborType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, neighborType), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_neighborType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_neighborType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_preyTypes_MetaData[] = {
		{ "Category", "Fish Attributes" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Prey that the fish will attack" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_preyTypes = { UE4CodeGen_Private::EPropertyClass::Array, "preyTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, preyTypes), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_preyTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_preyTypes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_preyTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "preyTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_enemyTypes_MetaData[] = {
		{ "Category", "Fish Attributes" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Enemies that fish will flee from" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_enemyTypes = { UE4CodeGen_Private::EPropertyClass::Array, "enemyTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, enemyTypes), METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_enemyTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_enemyTypes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_enemyTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "enemyTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_isLeader_MetaData[] = {
		{ "Category", "Fish Attributes" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Is this fish a leader" },
	};
#endif
	void Z_Construct_UClass_AFlockFish_Statics::NewProp_isLeader_SetBit(void* Obj)
	{
		((AFlockFish*)Obj)->isLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_isLeader = { UE4CodeGen_Private::EPropertyClass::Bool, "isLeader", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFlockFish), &Z_Construct_UClass_AFlockFish_Statics::NewProp_isLeader_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_isLeader_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_isLeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockFish_Statics::NewProp_FishInteractionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
		{ "ToolTip", "Fish interaction sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlockFish_Statics::NewProp_FishInteractionSphere = { UE4CodeGen_Private::EPropertyClass::Object, "FishInteractionSphere", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AFlockFish, FishInteractionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::NewProp_FishInteractionSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::NewProp_FishInteractionSphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlockFish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_DebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_UpdateEveryTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_NumNeighborsToEvaluate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_CustomZSeekMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_CustomZSeekMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_underwaterMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_underwaterMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_playerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_AvoidanceForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_AvoidForceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_SeekDecelerationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_ChaseAccelerationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_FleeAccelerationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_FleeDistanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_SeperationDistanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_distBehindSpeedUpRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_hungerResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_turnFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_turnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_maxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_followDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_neighborType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_preyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_preyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_enemyTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_enemyTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_isLeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockFish_Statics::NewProp_FishInteractionSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlockFish_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlockFish>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlockFish_Statics::ClassParams = {
		&AFlockFish::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFlockFish_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFlockFish_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFlockFish_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlockFish()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlockFish_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlockFish, 2869935115);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlockFish(Z_Construct_UClass_AFlockFish, &AFlockFish::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("AFlockFish"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlockFish);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
