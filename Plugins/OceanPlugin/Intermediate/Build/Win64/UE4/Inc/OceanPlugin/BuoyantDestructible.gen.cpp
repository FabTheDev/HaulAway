// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/BuoyantDestructible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyantDestructible() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ABuoyantDestructible_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ABuoyantDestructible();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyantDestructibleComponent_NoRegister();
// End Cross Module References
	void ABuoyantDestructible::StaticRegisterNativesABuoyantDestructible()
	{
	}
	UClass* Z_Construct_UClass_ABuoyantDestructible_NoRegister()
	{
		return ABuoyantDestructible::StaticClass();
	}
	struct Z_Construct_UClass_ABuoyantDestructible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuoyantDestructibleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuoyantDestructibleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuoyantDestructible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuoyantDestructible_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuoyantDestructible.h" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructible.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuoyantDestructible_Statics::NewProp_BuoyantDestructibleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BuoyantDestructible" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Destruction,Components|Destructible,Buoyancy Settings,Advanced" },
		{ "ModuleRelativePath", "Classes/BuoyantDestructible.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuoyantDestructible_Statics::NewProp_BuoyantDestructibleComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BuoyantDestructibleComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ABuoyantDestructible, BuoyantDestructibleComponent), Z_Construct_UClass_UBuoyantDestructibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuoyantDestructible_Statics::NewProp_BuoyantDestructibleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABuoyantDestructible_Statics::NewProp_BuoyantDestructibleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuoyantDestructible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuoyantDestructible_Statics::NewProp_BuoyantDestructibleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuoyantDestructible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuoyantDestructible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuoyantDestructible_Statics::ClassParams = {
		&ABuoyantDestructible::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ABuoyantDestructible_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABuoyantDestructible_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABuoyantDestructible_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABuoyantDestructible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuoyantDestructible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuoyantDestructible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuoyantDestructible, 1212621504);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuoyantDestructible(Z_Construct_UClass_ABuoyantDestructible, &ABuoyantDestructible::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("ABuoyantDestructible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuoyantDestructible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
