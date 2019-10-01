// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/Fish/FishManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishManager() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AFishManager_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AFishManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void AFishManager::StaticRegisterNativesAFishManager()
	{
	}
	UClass* Z_Construct_UClass_AFishManager_NoRegister()
	{
		return AFishManager::StaticClass();
	}
	struct Z_Construct_UClass_AFishManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_playerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMode_MetaData[];
#endif
		static void NewProp_DebugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attachToPlayer_MetaData[];
#endif
		static void NewProp_attachToPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_attachToPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_underwaterBoxLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_underwaterBoxLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numInFlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_numInFlock;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_numInFlock_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flockTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_flockTypes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_flockTypes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFishManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fish/FishManager.h" },
		{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishManager_Statics::NewProp_playerType_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
		{ "ToolTip", "Player Type" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFishManager_Statics::NewProp_playerType = { UE4CodeGen_Private::EPropertyClass::Class, "playerType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, playerType), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFishManager_Statics::NewProp_playerType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishManager_Statics::NewProp_playerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishManager_Statics::NewProp_DebugMode_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
		{ "ToolTip", "Player Type" },
	};
#endif
	void Z_Construct_UClass_AFishManager_Statics::NewProp_DebugMode_SetBit(void* Obj)
	{
		((AFishManager*)Obj)->DebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFishManager_Statics::NewProp_DebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "DebugMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFishManager), &Z_Construct_UClass_AFishManager_Statics::NewProp_DebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFishManager_Statics::NewProp_DebugMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishManager_Statics::NewProp_DebugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishManager_Statics::NewProp_attachToPlayer_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
		{ "ToolTip", "Attach fish manager to player?" },
	};
#endif
	void Z_Construct_UClass_AFishManager_Statics::NewProp_attachToPlayer_SetBit(void* Obj)
	{
		((AFishManager*)Obj)->attachToPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFishManager_Statics::NewProp_attachToPlayer = { UE4CodeGen_Private::EPropertyClass::Bool, "attachToPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFishManager), &Z_Construct_UClass_AFishManager_Statics::NewProp_attachToPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFishManager_Statics::NewProp_attachToPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishManager_Statics::NewProp_attachToPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishManager_Statics::NewProp_underwaterBoxLength_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
		{ "ToolTip", "Length of underwater box" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFishManager_Statics::NewProp_underwaterBoxLength = { UE4CodeGen_Private::EPropertyClass::Float, "underwaterBoxLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, underwaterBoxLength), METADATA_PARAMS(Z_Construct_UClass_AFishManager_Statics::NewProp_underwaterBoxLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishManager_Statics::NewProp_underwaterBoxLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishManager_Statics::NewProp_maxZ_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
		{ "ToolTip", "max Z of volume that is considered underwater" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFishManager_Statics::NewProp_maxZ = { UE4CodeGen_Private::EPropertyClass::Float, "maxZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, maxZ), METADATA_PARAMS(Z_Construct_UClass_AFishManager_Statics::NewProp_maxZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishManager_Statics::NewProp_maxZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishManager_Statics::NewProp_minZ_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
		{ "ToolTip", "min Z of volume that is considered underwater" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFishManager_Statics::NewProp_minZ = { UE4CodeGen_Private::EPropertyClass::Float, "minZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, minZ), METADATA_PARAMS(Z_Construct_UClass_AFishManager_Statics::NewProp_minZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishManager_Statics::NewProp_minZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishManager_Statics::NewProp_numInFlock_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
		{ "ToolTip", "# of fish in respective flock" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFishManager_Statics::NewProp_numInFlock = { UE4CodeGen_Private::EPropertyClass::Array, "numInFlock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, numInFlock), METADATA_PARAMS(Z_Construct_UClass_AFishManager_Statics::NewProp_numInFlock_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishManager_Statics::NewProp_numInFlock_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFishManager_Statics::NewProp_numInFlock_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "numInFlock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishManager_Statics::NewProp_flockTypes_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
		{ "ToolTip", "Type of flocks to spawn" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFishManager_Statics::NewProp_flockTypes = { UE4CodeGen_Private::EPropertyClass::Array, "flockTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, flockTypes), METADATA_PARAMS(Z_Construct_UClass_AFishManager_Statics::NewProp_flockTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFishManager_Statics::NewProp_flockTypes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFishManager_Statics::NewProp_flockTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "flockTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFishManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishManager_Statics::NewProp_playerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishManager_Statics::NewProp_DebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishManager_Statics::NewProp_attachToPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishManager_Statics::NewProp_underwaterBoxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishManager_Statics::NewProp_maxZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishManager_Statics::NewProp_minZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishManager_Statics::NewProp_numInFlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishManager_Statics::NewProp_numInFlock_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishManager_Statics::NewProp_flockTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishManager_Statics::NewProp_flockTypes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFishManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFishManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFishManager_Statics::ClassParams = {
		&AFishManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFishManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFishManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFishManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFishManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFishManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFishManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFishManager, 2704801833);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFishManager(Z_Construct_UClass_AFishManager, &AFishManager::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("AFishManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFishManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
