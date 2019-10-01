// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/BuoyancyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyancyComponent() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyancyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
	void UBuoyancyComponent::StaticRegisterNativesUBuoyancyComponent()
	{
	}
	UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister()
	{
		return UBuoyancyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBuoyancyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StayUprightDesiredRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StayUprightDesiredRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StayUprightDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StayUprightDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StayUprightStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StayUprightStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableStayUprightConstraint_MetaData[];
#endif
		static void NewProp_EnableStayUprightConstraint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableStayUprightConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebugPoints_MetaData[];
#endif
		static void NewProp_DrawDebugPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointDensityOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointDensityOverride;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointDensityOverride_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TestPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestPoints_Inner;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OceanManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OceanManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuoyancyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "HideCategories", "PlanarMovement Components|Movement|Planar Velocity" },
		{ "IncludePath", "BuoyancyComponent.h" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
		{ "ToolTip", "Buoyancy component\nOceanManager is required in the level for this to work." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_WaveForceMultiplier_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_WaveForceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "WaveForceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, WaveForceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_WaveForceMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_WaveForceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableWaveForces_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
		{ "ToolTip", "Waves will push objects towards the wave direction set in the Ocean Manager.\n-STILL WIP-" },
	};
#endif
	void Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableWaveForces_SetBit(void* Obj)
	{
		((UBuoyancyComponent*)Obj)->EnableWaveForces = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableWaveForces = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableWaveForces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyComponent), &Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableWaveForces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableWaveForces_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableWaveForces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightDesiredRotation_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightDesiredRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "StayUprightDesiredRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, StayUprightDesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightDesiredRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightDesiredRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightDamping_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightDamping = { UE4CodeGen_Private::EPropertyClass::Float, "StayUprightDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, StayUprightDamping), METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightStiffness_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "StayUprightStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, StayUprightStiffness), METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableStayUprightConstraint_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
		{ "ToolTip", "Stay upright physics constraint (inspired by UDK's StayUprightSpring)\n-STILL WIP-" },
	};
#endif
	void Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableStayUprightConstraint_SetBit(void* Obj)
	{
		((UBuoyancyComponent*)Obj)->EnableStayUprightConstraint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableStayUprightConstraint = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableStayUprightConstraint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyComponent), &Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableStayUprightConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableStayUprightConstraint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableStayUprightConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_DrawDebugPoints_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_DrawDebugPoints_SetBit(void* Obj)
	{
		((UBuoyancyComponent*)Obj)->DrawDebugPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_DrawDebugPoints = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawDebugPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyComponent), &Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_DrawDebugPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_DrawDebugPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_DrawDebugPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_PointDensityOverride_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
		{ "ToolTip", "Per-point mesh density override, can be used for half-sinking objects etc." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_PointDensityOverride = { UE4CodeGen_Private::EPropertyClass::Array, "PointDensityOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, PointDensityOverride), METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_PointDensityOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_PointDensityOverride_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_PointDensityOverride_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "PointDensityOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_TestPoints_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
		{ "ToolTip", "Test point array. At least one point is required for buoyancy." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_TestPoints = { UE4CodeGen_Private::EPropertyClass::Array, "TestPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, TestPoints), METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_TestPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_TestPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_TestPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TestPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_TestPointRadius_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
		{ "ToolTip", "Radius of the points." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_TestPointRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TestPointRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, TestPointRadius), METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_TestPointRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_TestPointRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_MaxUnderwaterVelocity_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_MaxUnderwaterVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxUnderwaterVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, MaxUnderwaterVelocity), METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_MaxUnderwaterVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_MaxUnderwaterVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_ClampMaxVelocity_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_ClampMaxVelocity_SetBit(void* Obj)
	{
		((UBuoyancyComponent*)Obj)->ClampMaxVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_ClampMaxVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "ClampMaxVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyComponent), &Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_ClampMaxVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_ClampMaxVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_ClampMaxVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_VelocityDamper_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_VelocityDamper = { UE4CodeGen_Private::EPropertyClass::Struct, "VelocityDamper", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, VelocityDamper), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_VelocityDamper_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_VelocityDamper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidAngularDamping_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
		{ "ToolTip", "Angular damping when object is in fluid." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidAngularDamping = { UE4CodeGen_Private::EPropertyClass::Float, "FluidAngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, FluidAngularDamping), METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidAngularDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidAngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidLinearDamping_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
		{ "ToolTip", "Linear damping when object is in fluid." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidLinearDamping = { UE4CodeGen_Private::EPropertyClass::Float, "FluidLinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, FluidLinearDamping), METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidLinearDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidLinearDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidDensity_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
		{ "ToolTip", "Density of water. Typically you don't need to change this." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidDensity = { UE4CodeGen_Private::EPropertyClass::Float, "FluidDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, FluidDensity), METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_MeshDensity_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
		{ "ToolTip", "Density of mesh." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_MeshDensity = { UE4CodeGen_Private::EPropertyClass::Float, "MeshDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, MeshDensity), METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_MeshDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_MeshDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OceanManager_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
		{ "ToolTip", "OceanManager used by the component, if unassigned component will auto-detect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OceanManager = { UE4CodeGen_Private::EPropertyClass::Object, "OceanManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, OceanManager), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OceanManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OceanManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuoyancyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_WaveForceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableWaveForces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightDesiredRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_StayUprightStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_EnableStayUprightConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_DrawDebugPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_PointDensityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_PointDensityOverride_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_TestPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_TestPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_TestPointRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_MaxUnderwaterVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_ClampMaxVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_VelocityDamper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidAngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidLinearDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_FluidDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_MeshDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OceanManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuoyancyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuoyancyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuoyancyComponent_Statics::ClassParams = {
		&UBuoyancyComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UBuoyancyComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuoyancyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuoyancyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuoyancyComponent, 708256150);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuoyancyComponent(Z_Construct_UClass_UBuoyancyComponent, &UBuoyancyComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UBuoyancyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuoyancyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
