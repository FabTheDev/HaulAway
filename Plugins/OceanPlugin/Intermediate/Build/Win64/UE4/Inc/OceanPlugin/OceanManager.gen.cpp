// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/OceanManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanManager() {}
// Cross Module References
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWaveSetParameters();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWaveParameter();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AOceanManager_GetHeightmapPixel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AOceanManager_GetWaveHeightValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FWaveSetParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveSetParameters, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("WaveSetParameters"), sizeof(FWaveSetParameters), Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWaveSetParameters(FWaveSetParameters::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("WaveSetParameters"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFWaveSetParameters
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFWaveSetParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WaveSetParameters")),new UScriptStruct::TCppStructOps<FWaveSetParameters>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFWaveSetParameters;
	struct Z_Construct_UScriptStruct_FWaveSetParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave08_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave08;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave07_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave07;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave06_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave06;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave05_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave05;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave04_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave04;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave03_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave01;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveSetParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
		{ "ToolTip", "* Contains the parameters necessary for a set of Gerstner waves." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveSetParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave08_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave08 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave08", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave08), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave08_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave08_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave07_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave07 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave07", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave07), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave07_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave07_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave06_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave06 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave06", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave06), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave06_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave06_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave05_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave05 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave05", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave05), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave05_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave05_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave04_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave04 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave04", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave04), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave04_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave04_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave03_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave03 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave03", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave03), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave03_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave02_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave02 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave02", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave02), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave02_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave01_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave01 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave01", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave01), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave01_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave01_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveSetParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave08,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave07,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave06,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave05,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave04,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveSetParameters_Statics::NewProp_Wave01,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveSetParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
		nullptr,
		&NewStructOps,
		"WaveSetParameters",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FWaveSetParameters),
		alignof(FWaveSetParameters),
		Z_Construct_UScriptStruct_FWaveSetParameters_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSetParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveSetParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WaveSetParameters"), sizeof(FWaveSetParameters), Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWaveSetParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC() { return 2788841829U; }
class UScriptStruct* FWaveParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FWaveParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveParameter, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("WaveParameter"), sizeof(FWaveParameter), Get_Z_Construct_UScriptStruct_FWaveParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWaveParameter(FWaveParameter::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("WaveParameter"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFWaveParameter
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFWaveParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WaveParameter")),new UScriptStruct::TCppStructOps<FWaveParameter>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFWaveParameter;
	struct Z_Construct_UScriptStruct_FWaveParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Steepness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Steepness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
		{ "ToolTip", "* Contains the parameters necessary for a single Gerstner wave." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_TimeScale_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_TimeScale = { UE4CodeGen_Private::EPropertyClass::Float, "TimeScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveParameter, TimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_TimeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Steepness_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Steepness = { UE4CodeGen_Private::EPropertyClass::Float, "Steepness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveParameter, Steepness), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Steepness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Steepness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Amplitude = { UE4CodeGen_Private::EPropertyClass::Float, "Amplitude", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveParameter, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Amplitude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveParameter, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Length_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Float, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveParameter, Rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Steepness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveParameter_Statics::NewProp_Rotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
		nullptr,
		&NewStructOps,
		"WaveParameter",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FWaveParameter),
		alignof(FWaveParameter),
		Z_Construct_UScriptStruct_FWaveParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveParameter_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWaveParameter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WaveParameter"), sizeof(FWaveParameter), Get_Z_Construct_UScriptStruct_FWaveParameter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWaveParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWaveParameter_CRC() { return 258673625U; }
	void AOceanManager::StaticRegisterNativesAOceanManager()
	{
		UClass* Class = AOceanManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeightmapPixel", &AOceanManager::execGetHeightmapPixel },
			{ "GetWaveHeightValue", &AOceanManager::execGetWaveHeightValue },
			{ "LoadLandscapeHeightmap", &AOceanManager::execLoadLandscapeHeightmap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics
	{
		struct OceanManager_eventGetHeightmapPixel_Parms
		{
			float U;
			float V;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_U;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OceanManager_eventGetHeightmapPixel_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::NewProp_V = { UE4CodeGen_Private::EPropertyClass::Float, "V", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OceanManager_eventGetHeightmapPixel_Parms, V), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::NewProp_U = { UE4CodeGen_Private::EPropertyClass::Float, "U", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OceanManager_eventGetHeightmapPixel_Parms, U), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::NewProp_V,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::NewProp_U,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ocean Manager" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanManager, "GetHeightmapPixel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(OceanManager_eventGetHeightmapPixel_Parms), Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOceanManager_GetHeightmapPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOceanManager_GetHeightmapPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics
	{
		struct OceanManager_eventGetWaveHeightValue_Parms
		{
			FVector location;
			const UWorld* World;
			bool HeightOnly;
			bool TwoIterations;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_TwoIterations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TwoIterations;
		static void NewProp_HeightOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HeightOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OceanManager_eventGetWaveHeightValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_TwoIterations_SetBit(void* Obj)
	{
		((OceanManager_eventGetWaveHeightValue_Parms*)Obj)->TwoIterations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_TwoIterations = { UE4CodeGen_Private::EPropertyClass::Bool, "TwoIterations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OceanManager_eventGetWaveHeightValue_Parms), &Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_TwoIterations_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_HeightOnly_SetBit(void* Obj)
	{
		((OceanManager_eventGetWaveHeightValue_Parms*)Obj)->HeightOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_HeightOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "HeightOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OceanManager_eventGetWaveHeightValue_Parms), &Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_HeightOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(OceanManager_eventGetWaveHeightValue_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_World_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_location = { UE4CodeGen_Private::EPropertyClass::Struct, "location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OceanManager_eventGetWaveHeightValue_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_TwoIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_HeightOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ocean Manager" },
		{ "CPP_Default_HeightOnly", "true" },
		{ "CPP_Default_TwoIterations", "false" },
		{ "CPP_Default_World", "None" },
		{ "HidePin", "World" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanManager, "GetWaveHeightValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(OceanManager_eventGetWaveHeightValue_Parms), Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOceanManager_GetWaveHeightValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOceanManager_GetWaveHeightValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap_Statics
	{
		struct OceanManager_eventLoadLandscapeHeightmap_Parms
		{
			UTexture2D* Tex2D;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tex2D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap_Statics::NewProp_Tex2D = { UE4CodeGen_Private::EPropertyClass::Object, "Tex2D", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OceanManager_eventLoadLandscapeHeightmap_Parms, Tex2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap_Statics::NewProp_Tex2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ocean Manager" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanManager, "LoadLandscapeHeightmap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(OceanManager_eventLoadLandscapeHeightmap_Parms), Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOceanManager_NoRegister()
	{
		return AOceanManager::StaticClass();
	}
	struct Z_Construct_UClass_AOceanManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Landscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulationPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModulationPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulationMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModulationMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulationStartHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModulationStartHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLandscapeModulation_MetaData[];
#endif
		static void NewProp_bEnableLandscapeModulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLandscapeModulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetWorkTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetWorkTimeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveSetOffsetsOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaveSetOffsetsOverride;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaveSetOffsetsOverride_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveClusters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaveClusters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaveClusters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalWaveAmplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalWaveAmplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalWaveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalWaveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalWaveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalWaveDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGerstnerWaves_MetaData[];
#endif
		static void NewProp_EnableGerstnerWaves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGerstnerWaves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOceanManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOceanManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOceanManager_GetHeightmapPixel, "GetHeightmapPixel" }, // 3242180722
		{ &Z_Construct_UFunction_AOceanManager_GetWaveHeightValue, "GetWaveHeightValue" }, // 1216879440
		{ &Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap, "LoadLandscapeHeightmap" }, // 2489191446
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OceanManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
		{ "ToolTip", "OceanManager calculates the Gerstner waves in code, while the Material uses it's own implementation in a MaterialFunction.\nTODO: Investigate whether a single implementation could be used to increase performance." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_HeightmapTexture_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_HeightmapTexture = { UE4CodeGen_Private::EPropertyClass::Object, "HeightmapTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, HeightmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_HeightmapTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_HeightmapTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_Landscape_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_Landscape = { UE4CodeGen_Private::EPropertyClass::Object, "Landscape", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_Landscape_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_Landscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationPower_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationPower = { UE4CodeGen_Private::EPropertyClass::Float, "ModulationPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, ModulationPower), METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationMaxHeight_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationMaxHeight = { UE4CodeGen_Private::EPropertyClass::Float, "ModulationMaxHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, ModulationMaxHeight), METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationMaxHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationStartHeight_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationStartHeight = { UE4CodeGen_Private::EPropertyClass::Float, "ModulationStartHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, ModulationStartHeight), METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationStartHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationStartHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_bEnableLandscapeModulation_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
		{ "ToolTip", "Landscape height modulation vars." },
	};
#endif
	void Z_Construct_UClass_AOceanManager_Statics::NewProp_bEnableLandscapeModulation_SetBit(void* Obj)
	{
		((AOceanManager*)Obj)->bEnableLandscapeModulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_bEnableLandscapeModulation = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableLandscapeModulation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AOceanManager), &Z_Construct_UClass_AOceanManager_Statics::NewProp_bEnableLandscapeModulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_bEnableLandscapeModulation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_bEnableLandscapeModulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_NetWorkTimeOffset_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_NetWorkTimeOffset = { UE4CodeGen_Private::EPropertyClass::Float, "NetWorkTimeOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AOceanManager, NetWorkTimeOffset), METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_NetWorkTimeOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_NetWorkTimeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveSetOffsetsOverride_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
		{ "ToolTip", "Individual Gerstner wave settings.\n      (leave blank to use the default offsets)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveSetOffsetsOverride = { UE4CodeGen_Private::EPropertyClass::Array, "WaveSetOffsetsOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, WaveSetOffsetsOverride), METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveSetOffsetsOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveSetOffsetsOverride_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveSetOffsetsOverride_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "WaveSetOffsetsOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWaveSetParameters, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveClusters_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
		{ "ToolTip", "Median Gerstner wave settings\n      (only 1 cluster is used in the material by default)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveClusters = { UE4CodeGen_Private::EPropertyClass::Array, "WaveClusters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, WaveClusters), METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveClusters_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveClusters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveClusters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "WaveClusters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_DistanceCheck_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
		{ "ToolTip", "Optimization:\n      * If the distance of a buoyant point to base sea level exceeds DistanceCheck,\n      * skip the Gerstner calculations and return base sea level." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_DistanceCheck = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, DistanceCheck), METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_DistanceCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_DistanceCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveAmplitude_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
		{ "ToolTip", "The global amplitude multiplier of the waves." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveAmplitude = { UE4CodeGen_Private::EPropertyClass::Float, "GlobalWaveAmplitude", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, GlobalWaveAmplitude), METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveAmplitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveAmplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveSpeed_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
		{ "ToolTip", "The global speed multiplier of the waves." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "GlobalWaveSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, GlobalWaveSpeed), METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveDirection_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
		{ "ToolTip", "The global direction the waves travel." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "GlobalWaveDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, GlobalWaveDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOceanManager_Statics::NewProp_EnableGerstnerWaves_MetaData[] = {
		{ "Category", "Ocean" },
		{ "ModuleRelativePath", "Classes/OceanManager.h" },
	};
#endif
	void Z_Construct_UClass_AOceanManager_Statics::NewProp_EnableGerstnerWaves_SetBit(void* Obj)
	{
		((AOceanManager*)Obj)->EnableGerstnerWaves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOceanManager_Statics::NewProp_EnableGerstnerWaves = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableGerstnerWaves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AOceanManager), &Z_Construct_UClass_AOceanManager_Statics::NewProp_EnableGerstnerWaves_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::NewProp_EnableGerstnerWaves_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::NewProp_EnableGerstnerWaves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOceanManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_HeightmapTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_Landscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_ModulationStartHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_bEnableLandscapeModulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_NetWorkTimeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveSetOffsetsOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveSetOffsetsOverride_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveClusters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_WaveClusters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_DistanceCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveAmplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_GlobalWaveDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOceanManager_Statics::NewProp_EnableGerstnerWaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOceanManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOceanManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOceanManager_Statics::ClassParams = {
		&AOceanManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AOceanManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AOceanManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOceanManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOceanManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOceanManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOceanManager, 2728088897);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOceanManager(Z_Construct_UClass_AOceanManager, &AOceanManager::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("AOceanManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOceanManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
