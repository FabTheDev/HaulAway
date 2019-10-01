// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/InfiniteSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfiniteSystemComponent() {}
// Cross Module References
	OCEANPLUGIN_API UEnum* Z_Construct_UEnum_OceanPlugin_EFollowMethod();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UInfiniteSystemComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UInfiniteSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	static UEnum* EFollowMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OceanPlugin_EFollowMethod, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("EFollowMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFollowMethod(EFollowMethod_StaticEnum, TEXT("/Script/OceanPlugin"), TEXT("EFollowMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OceanPlugin_EFollowMethod_CRC() { return 675792941U; }
	UEnum* Z_Construct_UEnum_OceanPlugin_EFollowMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFollowMethod"), 0, Get_Z_Construct_UEnum_OceanPlugin_EFollowMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LookAtLocation", (int64)LookAtLocation },
				{ "FollowCamera", (int64)FollowCamera },
				{ "FollowPawn", (int64)FollowPawn },
				{ "Stationary", (int64)Stationary },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/InfiniteSystemComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OceanPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFollowMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EFollowMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UInfiniteSystemComponent::StaticRegisterNativesUInfiniteSystemComponent()
	{
	}
	UClass* Z_Construct_UClass_UInfiniteSystemComponent_NoRegister()
	{
		return UInfiniteSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInfiniteSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleStartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleStartDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleDistanceFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleDistanceFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleByDistance_MetaData[];
#endif
		static void NewProp_ScaleByDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScaleByDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLookAtDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLookAtDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSnapSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridSnapSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FollowMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateInEditor_MetaData[];
#endif
		static void NewProp_UpdateInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdateInEditor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInfiniteSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfiniteSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Object Mobility LOD PhysicsVolume" },
		{ "IncludePath", "InfiniteSystemComponent.h" },
		{ "ModuleRelativePath", "Classes/InfiniteSystemComponent.h" },
		{ "ToolTip", "Infinite Ocean Plane System.\nFollows camera and scales by distance to make a plane appear as infinite." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/InfiniteSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleMax = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInfiniteSystemComponent, ScaleMax), METADATA_PARAMS(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/InfiniteSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleMin = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInfiniteSystemComponent, ScaleMin), METADATA_PARAMS(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleStartDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/InfiniteSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleStartDistance = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleStartDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInfiniteSystemComponent, ScaleStartDistance), METADATA_PARAMS(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleStartDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleStartDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleDistanceFactor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/InfiniteSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleDistanceFactor = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleDistanceFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInfiniteSystemComponent, ScaleDistanceFactor), METADATA_PARAMS(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleDistanceFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleDistanceFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleByDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/InfiniteSystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleByDistance_SetBit(void* Obj)
	{
		((UInfiniteSystemComponent*)Obj)->ScaleByDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleByDistance = { UE4CodeGen_Private::EPropertyClass::Bool, "ScaleByDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInfiniteSystemComponent), &Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleByDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleByDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleByDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_MaxLookAtDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/InfiniteSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_MaxLookAtDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxLookAtDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInfiniteSystemComponent, MaxLookAtDistance), METADATA_PARAMS(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_MaxLookAtDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_MaxLookAtDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_GridSnapSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/InfiniteSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_GridSnapSize = { UE4CodeGen_Private::EPropertyClass::Float, "GridSnapSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInfiniteSystemComponent, GridSnapSize), METADATA_PARAMS(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_GridSnapSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_GridSnapSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_FollowMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/InfiniteSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_FollowMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "FollowMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInfiniteSystemComponent, FollowMethod), Z_Construct_UEnum_OceanPlugin_EFollowMethod, METADATA_PARAMS(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_FollowMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_FollowMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_UpdateInEditor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/InfiniteSystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_UpdateInEditor_SetBit(void* Obj)
	{
		((UInfiniteSystemComponent*)Obj)->UpdateInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_UpdateInEditor = { UE4CodeGen_Private::EPropertyClass::Bool, "UpdateInEditor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInfiniteSystemComponent), &Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_UpdateInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_UpdateInEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_UpdateInEditor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInfiniteSystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleStartDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleDistanceFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_ScaleByDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_MaxLookAtDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_GridSnapSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_FollowMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfiniteSystemComponent_Statics::NewProp_UpdateInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInfiniteSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInfiniteSystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInfiniteSystemComponent_Statics::ClassParams = {
		&UInfiniteSystemComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UInfiniteSystemComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInfiniteSystemComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInfiniteSystemComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInfiniteSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInfiniteSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInfiniteSystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInfiniteSystemComponent, 1958384395);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInfiniteSystemComponent(Z_Construct_UClass_UInfiniteSystemComponent, &UInfiniteSystemComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UInfiniteSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInfiniteSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
