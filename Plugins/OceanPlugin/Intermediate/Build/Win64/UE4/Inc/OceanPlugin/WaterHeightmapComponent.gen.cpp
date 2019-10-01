// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/BuoyantMesh/WaterHeightmapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterHeightmapComponent() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UWaterHeightmapComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UWaterHeightmapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
	void UWaterHeightmapComponent::StaticRegisterNativesUWaterHeightmapComponent()
	{
	}
	UClass* Z_Construct_UClass_UWaterHeightmapComponent_NoRegister()
	{
		return UWaterHeightmapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterHeightmapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OceanManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OceanManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawHeightmap_MetaData[];
#endif
		static void NewProp_bDrawHeightmap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawHeightmap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawUsedTriangles_MetaData[];
#endif
		static void NewProp_bDrawUsedTriangles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawUsedTriangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSizeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridSizeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyCollidingComponents_MetaData[];
#endif
		static void NewProp_bOnlyCollidingComponents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyCollidingComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredCellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredCellSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterHeightmapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterHeightmapComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "IncludePath", "BuoyantMesh/WaterHeightmapComponent.h" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
		{ "ToolTip", "Water heightmap centered on the owning actor.\nOnly the heightmap vertices that are actually used trigger an ocean height calculation. Queries between vertices are\ninterpolated. Vertex heights are cached within a tick." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_OceanManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_OceanManager = { UE4CodeGen_Private::EPropertyClass::Object, "OceanManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UWaterHeightmapComponent, OceanManager), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_OceanManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_OceanManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawHeightmap_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawHeightmap_SetBit(void* Obj)
	{
		((UWaterHeightmapComponent*)Obj)->bDrawHeightmap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawHeightmap = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawHeightmap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWaterHeightmapComponent), &Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawHeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawHeightmap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawHeightmap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawUsedTriangles_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawUsedTriangles_SetBit(void* Obj)
	{
		((UWaterHeightmapComponent*)Obj)->bDrawUsedTriangles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawUsedTriangles = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawUsedTriangles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWaterHeightmapComponent), &Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawUsedTriangles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawUsedTriangles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawUsedTriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_GridSizeMultiplier_MetaData[] = {
		{ "Category", "Water Patch" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
		{ "ToolTip", "How much big should the patch be, relative to the parent actor. 1 is the same." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_GridSizeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "GridSizeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWaterHeightmapComponent, GridSizeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_GridSizeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_GridSizeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bOnlyCollidingComponents_MetaData[] = {
		{ "Category", "Water Patch" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
		{ "ToolTip", "Only use colliding components be used to determine the water patch size?" },
	};
#endif
	void Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bOnlyCollidingComponents_SetBit(void* Obj)
	{
		((UWaterHeightmapComponent*)Obj)->bOnlyCollidingComponents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bOnlyCollidingComponents = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyCollidingComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWaterHeightmapComponent), &Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bOnlyCollidingComponents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bOnlyCollidingComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bOnlyCollidingComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_DesiredCellSize_MetaData[] = {
		{ "Category", "Water Patch" },
		{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
		{ "ToolTip", "Desired size for a square cell in the water patch.\nThis value might be rounded by the algorithm to make sure no cells are cut." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_DesiredCellSize = { UE4CodeGen_Private::EPropertyClass::Float, "DesiredCellSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWaterHeightmapComponent, DesiredCellSize), METADATA_PARAMS(Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_DesiredCellSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_DesiredCellSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterHeightmapComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_OceanManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawHeightmap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bDrawUsedTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_GridSizeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_bOnlyCollidingComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterHeightmapComponent_Statics::NewProp_DesiredCellSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterHeightmapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterHeightmapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWaterHeightmapComponent_Statics::ClassParams = {
		&UWaterHeightmapComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		Z_Construct_UClass_UWaterHeightmapComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UWaterHeightmapComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWaterHeightmapComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWaterHeightmapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterHeightmapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWaterHeightmapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWaterHeightmapComponent, 754117711);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWaterHeightmapComponent(Z_Construct_UClass_UWaterHeightmapComponent, &UWaterHeightmapComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UWaterHeightmapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterHeightmapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
