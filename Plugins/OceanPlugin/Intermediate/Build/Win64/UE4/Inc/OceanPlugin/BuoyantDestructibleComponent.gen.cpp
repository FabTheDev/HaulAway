// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/BuoyantDestructibleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyantDestructibleComponent() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyantDestructibleComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyantDestructibleComponent();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
	void UBuoyantDestructibleComponent::StaticRegisterNativesUBuoyantDestructibleComponent()
	{
	}
	UClass* Z_Construct_UClass_UBuoyantDestructibleComponent_NoRegister()
	{
		return UBuoyantDestructibleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBuoyantDestructibleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkStabilizationThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChunkStabilizationThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkSleepThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChunkSleepThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveForceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaveForceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableWaveForces_MetaData[];
#endif
		static void NewProp_EnableWaveForces_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableWaveForces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebugPoints_MetaData[];
#endif
		static void NewProp_DrawDebugPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestPointRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestPointRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUnderwaterVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxUnderwaterVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMaxVelocity_MetaData[];
#endif
		static void NewProp_ClampMaxVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClampMaxVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityDamper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityDamper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidAngularDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidAngularDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidLinearDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidLinearDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChunkDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OceanManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OceanManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDestructibleComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Object Mesh Components|SkinnedMesh Mirroring Activation Components|Activation Object Mesh Components|SkinnedMesh Mirroring Activation Components|Activation Object Mobility Trigger" },
		{ "IncludePath", "BuoyantDestructibleComponent.h" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkStabilizationThreshold_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
		{ "ToolTip", "* Sets the mass-normalized kinetic energy threshold below which an actor may participate in stabilization.\n* (This value has no effect if PxSceneFlag::eENABLE_STABILIZATION was not enabled on the PxSceneDesc)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkStabilizationThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "ChunkStabilizationThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, ChunkStabilizationThreshold), METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkStabilizationThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkStabilizationThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkSleepThreshold_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
		{ "ToolTip", "* Sets the mass-normalized kinetic energy threshold below which an actor may go to sleep.\n* Default physx value is ~50.0f (we set it 0 to avoid weird sleeping chunks on water)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkSleepThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "ChunkSleepThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, ChunkSleepThreshold), METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkSleepThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkSleepThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_WaveForceMultiplier_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_WaveForceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "WaveForceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, WaveForceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_WaveForceMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_WaveForceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_EnableWaveForces_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_EnableWaveForces_SetBit(void* Obj)
	{
		((UBuoyantDestructibleComponent*)Obj)->EnableWaveForces = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_EnableWaveForces = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableWaveForces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantDestructibleComponent), &Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_EnableWaveForces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_EnableWaveForces_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_EnableWaveForces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_DrawDebugPoints_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_DrawDebugPoints_SetBit(void* Obj)
	{
		((UBuoyantDestructibleComponent*)Obj)->DrawDebugPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_DrawDebugPoints = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawDebugPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantDestructibleComponent), &Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_DrawDebugPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_DrawDebugPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_DrawDebugPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_TestPointRadius_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
		{ "ToolTip", "Radius of the test point" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_TestPointRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TestPointRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, TestPointRadius), METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_TestPointRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_TestPointRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_MaxUnderwaterVelocity_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_MaxUnderwaterVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxUnderwaterVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, MaxUnderwaterVelocity), METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_MaxUnderwaterVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_MaxUnderwaterVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ClampMaxVelocity_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ClampMaxVelocity_SetBit(void* Obj)
	{
		((UBuoyantDestructibleComponent*)Obj)->ClampMaxVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ClampMaxVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "ClampMaxVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantDestructibleComponent), &Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ClampMaxVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ClampMaxVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ClampMaxVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_VelocityDamper_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_VelocityDamper = { UE4CodeGen_Private::EPropertyClass::Struct, "VelocityDamper", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, VelocityDamper), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_VelocityDamper_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_VelocityDamper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidAngularDamping_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
		{ "ToolTip", "Angular damping when chunk is in fluid" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidAngularDamping = { UE4CodeGen_Private::EPropertyClass::Float, "FluidAngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, FluidAngularDamping), METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidAngularDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidAngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidLinearDamping_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
		{ "ToolTip", "Linear damping when chunk is in fluid" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidLinearDamping = { UE4CodeGen_Private::EPropertyClass::Float, "FluidLinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, FluidLinearDamping), METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidLinearDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidLinearDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidDensity_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
		{ "ToolTip", "Density of water" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidDensity = { UE4CodeGen_Private::EPropertyClass::Float, "FluidDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, FluidDensity), METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkDensity_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
		{ "ToolTip", "Density of each chunk" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkDensity = { UE4CodeGen_Private::EPropertyClass::Float, "ChunkDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, ChunkDensity), METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_OceanManager_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_OceanManager = { UE4CodeGen_Private::EPropertyClass::Object, "OceanManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, OceanManager), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_OceanManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_OceanManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkStabilizationThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkSleepThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_WaveForceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_EnableWaveForces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_DrawDebugPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_TestPointRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_MaxUnderwaterVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ClampMaxVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_VelocityDamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidAngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidLinearDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_FluidDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_ChunkDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::NewProp_OceanManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuoyantDestructibleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::ClassParams = {
		&UBuoyantDestructibleComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuoyantDestructibleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuoyantDestructibleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuoyantDestructibleComponent, 3755716990);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuoyantDestructibleComponent(Z_Construct_UClass_UBuoyantDestructibleComponent, &UBuoyantDestructibleComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UBuoyantDestructibleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuoyantDestructibleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
