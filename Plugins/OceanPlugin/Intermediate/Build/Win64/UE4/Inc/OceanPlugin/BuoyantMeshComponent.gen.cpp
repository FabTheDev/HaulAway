// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/BuoyantMesh/BuoyantMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyantMeshComponent() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyantMeshComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyantMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UWaterHeightmapComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
	void UBuoyantMeshComponent::StaticRegisterNativesUBuoyantMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UBuoyantMeshComponent_NoRegister()
	{
		return UBuoyantMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBuoyantMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterHeightmap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterHeightmap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaterDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMass_MetaData[];
#endif
		static void NewProp_bOverrideMass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMeshDensity_MetaData[];
#endif
		static void NewProp_bOverrideMeshDensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMeshDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceArrowSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceArrowSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawSubtriangles_MetaData[];
#endif
		static void NewProp_bDrawSubtriangles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawSubtriangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTriangles_MetaData[];
#endif
		static void NewProp_bDrawTriangles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTriangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawVertices_MetaData[];
#endif
		static void NewProp_bDrawVertices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawVertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawWaterline_MetaData[];
#endif
		static void NewProp_bDrawWaterline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawWaterline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawForceArrows_MetaData[];
#endif
		static void NewProp_bDrawForceArrows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawForceArrows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OceanManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OceanManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDynamicForces_MetaData[];
#endif
		static void NewProp_bUseDynamicForces_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDynamicForces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseStaticForces_MetaData[];
#endif
		static void NewProp_bUseStaticForces_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseStaticForces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseWaterPatch_MetaData[];
#endif
		static void NewProp_bUseWaterPatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWaterPatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVerticalForcesOnly_MetaData[];
#endif
		static void NewProp_bVerticalForcesOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVerticalForcesOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuoyantMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "This component applies to the root component buoyancy forces modeled from a static mesh.\nThe algorithm used is described in \"Water interaction model for boats in video\ngames\" by Jacques Kerner.\nhttp://gamasutra.com/view/news/237528/Water_interaction_model_for_boats_in_video_games.php\n\nIn addition, support for dynamic (drag) forces is included." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_WaterHeightmap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_WaterHeightmap = { UE4CodeGen_Private::EPropertyClass::Object, "WaterHeightmap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UBuoyantMeshComponent, WaterHeightmap), Z_Construct_UClass_UWaterHeightmapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_WaterHeightmap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_WaterHeightmap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_WaterDensity_MetaData[] = {
		{ "Category", "Mass Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Density of the water in kg/uu^3. It is around 0.001027 if 1 unreal unit is 1 cm." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_WaterDensity = { UE4CodeGen_Private::EPropertyClass::Float, "WaterDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantMeshComponent, WaterDensity), METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_WaterDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_WaterDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Mass Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Mass of the rigidbody in kg.\nDoes nothing if bOverrideMass is false." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_Mass = { UE4CodeGen_Private::EPropertyClass::Float, "Mass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantMeshComponent, Mass), METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_Mass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMass_MetaData[] = {
		{ "Category", "Mass Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMass_SetBit(void* Obj)
	{
		((UBuoyantMeshComponent*)Obj)->bOverrideMass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMass = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideMass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantMeshComponent), &Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_MeshDensity_MetaData[] = {
		{ "Category", "Mass Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Density of the mesh in kg/uu^3. The object will sink if it's higher than the water density.\nDoes nothing if bOverrideMeshDensity is false." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_MeshDensity = { UE4CodeGen_Private::EPropertyClass::Float, "MeshDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantMeshComponent, MeshDensity), METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_MeshDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_MeshDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMeshDensity_MetaData[] = {
		{ "Category", "Mass Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMeshDensity_SetBit(void* Obj)
	{
		((UBuoyantMeshComponent*)Obj)->bOverrideMeshDensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMeshDensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideMeshDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantMeshComponent), &Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMeshDensity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMeshDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMeshDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_ForceArrowSize_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Force arrow size multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_ForceArrowSize = { UE4CodeGen_Private::EPropertyClass::Float, "ForceArrowSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantMeshComponent, ForceArrowSize), METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_ForceArrowSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_ForceArrowSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawSubtriangles_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Draw the submerged triangles?" },
	};
#endif
	void Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawSubtriangles_SetBit(void* Obj)
	{
		((UBuoyantMeshComponent*)Obj)->bDrawSubtriangles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawSubtriangles = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawSubtriangles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantMeshComponent), &Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawSubtriangles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawSubtriangles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawSubtriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawTriangles_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Draw the original mesh triangles?" },
	};
#endif
	void Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawTriangles_SetBit(void* Obj)
	{
		((UBuoyantMeshComponent*)Obj)->bDrawTriangles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawTriangles = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawTriangles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantMeshComponent), &Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawTriangles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawTriangles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawTriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawVertices_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Draw the mesh vertices?" },
	};
#endif
	void Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawVertices_SetBit(void* Obj)
	{
		((UBuoyantMeshComponent*)Obj)->bDrawVertices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawVertices = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawVertices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantMeshComponent), &Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawVertices_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawVertices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawVertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawWaterline_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Draw the waterline on the mesh?" },
	};
#endif
	void Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawWaterline_SetBit(void* Obj)
	{
		((UBuoyantMeshComponent*)Obj)->bDrawWaterline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawWaterline = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawWaterline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantMeshComponent), &Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawWaterline_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawWaterline_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawWaterline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawForceArrows_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Draw arrows representing the buoyancy forces pushing on the mesh?\nThe length is proportional to the force magnitude." },
	};
#endif
	void Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawForceArrows_SetBit(void* Obj)
	{
		((UBuoyantMeshComponent*)Obj)->bDrawForceArrows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawForceArrows = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawForceArrows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantMeshComponent), &Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawForceArrows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawForceArrows_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawForceArrows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_OceanManager_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "OceanManager used by the component, if unassigned component will auto-detect." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_OceanManager = { UE4CodeGen_Private::EPropertyClass::Object, "OceanManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantMeshComponent, OceanManager), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_OceanManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_OceanManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseDynamicForces_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Use hydrodynamic (drag) forces if true." },
	};
#endif
	void Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseDynamicForces_SetBit(void* Obj)
	{
		((UBuoyantMeshComponent*)Obj)->bUseDynamicForces = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseDynamicForces = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDynamicForces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantMeshComponent), &Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseDynamicForces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseDynamicForces_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseDynamicForces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseStaticForces_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Use hydrostatic (buoyancy) forces if true." },
	};
#endif
	void Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseStaticForces_SetBit(void* Obj)
	{
		((UBuoyantMeshComponent*)Obj)->bUseStaticForces = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseStaticForces = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseStaticForces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantMeshComponent), &Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseStaticForces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseStaticForces_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseStaticForces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseWaterPatch_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Use a WaterPatchComponent to possibly improve performance.\nThis actor needs a WaterPatchComponent for this to work." },
	};
#endif
	void Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseWaterPatch_SetBit(void* Obj)
	{
		((UBuoyantMeshComponent*)Obj)->bUseWaterPatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseWaterPatch = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseWaterPatch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantMeshComponent), &Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseWaterPatch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseWaterPatch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseWaterPatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bVerticalForcesOnly_MetaData[] = {
		{ "Category", "Buoyancy Settings" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/BuoyantMeshComponent.h" },
		{ "ToolTip", "Only use the vertical component of the buoyancy forces." },
	};
#endif
	void Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bVerticalForcesOnly_SetBit(void* Obj)
	{
		((UBuoyantMeshComponent*)Obj)->bVerticalForcesOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bVerticalForcesOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bVerticalForcesOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantMeshComponent), &Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bVerticalForcesOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bVerticalForcesOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bVerticalForcesOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuoyantMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_WaterHeightmap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_WaterDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_MeshDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bOverrideMeshDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_ForceArrowSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawSubtriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawWaterline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bDrawForceArrows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_OceanManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseDynamicForces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseStaticForces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bUseWaterPatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyantMeshComponent_Statics::NewProp_bVerticalForcesOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuoyantMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuoyantMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuoyantMeshComponent_Statics::ClassParams = {
		&UBuoyantMeshComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		Z_Construct_UClass_UBuoyantMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBuoyantMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBuoyantMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuoyantMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuoyantMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuoyantMeshComponent, 1729426821);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuoyantMeshComponent(Z_Construct_UClass_UBuoyantMeshComponent, &UBuoyantMeshComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UBuoyantMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuoyantMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
