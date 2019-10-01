// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedBuoyancyComponent() {}
// Cross Module References
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FForceTriangle();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBuoyancyVertex();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
class UScriptStruct* FForceTriangle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FForceTriangle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceTriangle, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("ForceTriangle"), sizeof(FForceTriangle), Get_Z_Construct_UScriptStruct_FForceTriangle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForceTriangle(FForceTriangle::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("ForceTriangle"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFForceTriangle
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFForceTriangle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForceTriangle")),new UScriptStruct::TCppStructOps<FForceTriangle>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFForceTriangle;
	struct Z_Construct_UScriptStruct_FForceTriangle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceTriangle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceTriangle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
		nullptr,
		&NewStructOps,
		"ForceTriangle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FForceTriangle),
		alignof(FForceTriangle),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceTriangle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceTriangle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForceTriangle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForceTriangle"), sizeof(FForceTriangle), Get_Z_Construct_UScriptStruct_FForceTriangle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FForceTriangle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForceTriangle_CRC() { return 4264653778U; }
class UScriptStruct* FBuoyancyVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuoyancyVertex, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("BuoyancyVertex"), sizeof(FBuoyancyVertex), Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuoyancyVertex(FBuoyancyVertex::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("BuoyancyVertex"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFBuoyancyVertex
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFBuoyancyVertex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuoyancyVertex")),new UScriptStruct::TCppStructOps<FBuoyancyVertex>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFBuoyancyVertex;
	struct Z_Construct_UScriptStruct_FBuoyancyVertex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuoyancyVertex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuoyancyVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuoyancyVertex>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuoyancyVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
		nullptr,
		&NewStructOps,
		"BuoyancyVertex",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBuoyancyVertex),
		alignof(FBuoyancyVertex),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuoyancyVertex_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuoyancyVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuoyancyVertex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuoyancyVertex"), sizeof(FBuoyancyVertex), Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuoyancyVertex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC() { return 4159211814U; }
	void UAdvancedBuoyancyComponent::StaticRegisterNativesUAdvancedBuoyancyComponent()
	{
		UClass* Class = UAdvancedBuoyancyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyForce", &UAdvancedBuoyancyComponent::execApplyForce },
			{ "ApplySlamForce", &UAdvancedBuoyancyComponent::execApplySlamForce },
			{ "DrawDebugStuff", &UAdvancedBuoyancyComponent::execDrawDebugStuff },
			{ "GetOcean", &UAdvancedBuoyancyComponent::execGetOcean },
			{ "GetOceanDepthFromGrid", &UAdvancedBuoyancyComponent::execGetOceanDepthFromGrid },
			{ "SetMeshDensity", &UAdvancedBuoyancyComponent::execSetMeshDensity },
			{ "SplitTriangle", &UAdvancedBuoyancyComponent::execSplitTriangle },
			{ "TriangleArea", &UAdvancedBuoyancyComponent::execTriangleArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce_Statics
	{
		struct AdvancedBuoyancyComponent_eventApplyForce_Parms
		{
			FForceTriangle TriForce;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce_Statics::NewProp_TriForce = { UE4CodeGen_Private::EPropertyClass::Struct, "TriForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventApplyForce_Parms, TriForce), Z_Construct_UScriptStruct_FForceTriangle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce_Statics::NewProp_TriForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Buoyancy|Triangles" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "ApplyForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AdvancedBuoyancyComponent_eventApplyForce_Parms), Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics
	{
		struct AdvancedBuoyancyComponent_eventApplySlamForce_Parms
		{
			FVector SlamForce;
			FVector TriCenter;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriCenter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlamForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics::NewProp_TriCenter = { UE4CodeGen_Private::EPropertyClass::Struct, "TriCenter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventApplySlamForce_Parms, TriCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics::NewProp_SlamForce = { UE4CodeGen_Private::EPropertyClass::Struct, "SlamForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventApplySlamForce_Parms, SlamForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics::NewProp_TriCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics::NewProp_SlamForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Buoyancy|Forces" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "ApplySlamForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AdvancedBuoyancyComponent_eventApplySlamForce_Parms), Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics
	{
		struct AdvancedBuoyancyComponent_eventDrawDebugStuff_Parms
		{
			FForceTriangle TriForce;
			FColor DebugColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics::NewProp_DebugColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DebugColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventDrawDebugStuff_Parms, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics::NewProp_TriForce = { UE4CodeGen_Private::EPropertyClass::Struct, "TriForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventDrawDebugStuff_Parms, TriForce), Z_Construct_UScriptStruct_FForceTriangle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics::NewProp_DebugColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics::NewProp_TriForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "DrawDebugStuff", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AdvancedBuoyancyComponent_eventDrawDebugStuff_Parms), Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Data" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "GetOcean", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics
	{
		struct AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms
		{
			FVector Position;
			bool bJustGetHeightAtLocation;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static void NewProp_bJustGetHeightAtLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJustGetHeightAtLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::NewProp_bJustGetHeightAtLocation_SetBit(void* Obj)
	{
		((AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms*)Obj)->bJustGetHeightAtLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::NewProp_bJustGetHeightAtLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bJustGetHeightAtLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms), &Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::NewProp_bJustGetHeightAtLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::NewProp_bJustGetHeightAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Buoyancy|Triangles" },
		{ "CPP_Default_bJustGetHeightAtLocation", "false" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "GetOceanDepthFromGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms), Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics
	{
		struct AdvancedBuoyancyComponent_eventSetMeshDensity_Parms
		{
			float NewDensity;
			float NewWaterDensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewWaterDensity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics::NewProp_NewWaterDensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewWaterDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSetMeshDensity_Parms, NewWaterDensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics::NewProp_NewDensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSetMeshDensity_Parms, NewDensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics::NewProp_NewWaterDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics::NewProp_NewDensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "CPP_Default_NewWaterDensity", "1025.000000" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "SetMeshDensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AdvancedBuoyancyComponent_eventSetMeshDensity_Parms), Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics
	{
		struct AdvancedBuoyancyComponent_eventSplitTriangle_Parms
		{
			FBuoyancyVertex H;
			FBuoyancyVertex M;
			FBuoyancyVertex L;
			FVector InArrow;
			TArray<FForceTriangle> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InArrow;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_L;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_M;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_H;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSplitTriangle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FForceTriangle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::NewProp_InArrow = { UE4CodeGen_Private::EPropertyClass::Struct, "InArrow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSplitTriangle_Parms, InArrow), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::NewProp_L = { UE4CodeGen_Private::EPropertyClass::Struct, "L", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSplitTriangle_Parms, L), Z_Construct_UScriptStruct_FBuoyancyVertex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::NewProp_M = { UE4CodeGen_Private::EPropertyClass::Struct, "M", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSplitTriangle_Parms, M), Z_Construct_UScriptStruct_FBuoyancyVertex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::NewProp_H = { UE4CodeGen_Private::EPropertyClass::Struct, "H", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSplitTriangle_Parms, H), Z_Construct_UScriptStruct_FBuoyancyVertex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::NewProp_InArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::NewProp_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::NewProp_M,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::NewProp_H,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Buoyancy|Triangles" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "SplitTriangle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AdvancedBuoyancyComponent_eventSplitTriangle_Parms), Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics
	{
		struct AdvancedBuoyancyComponent_eventTriangleArea_Parms
		{
			FVector A;
			FVector B;
			FVector C;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventTriangleArea_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::NewProp_C = { UE4CodeGen_Private::EPropertyClass::Struct, "C", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventTriangleArea_Parms, C), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventTriangleArea_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventTriangleArea_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::NewProp_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Advanced Buoyancy|Triangles" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "TriangleArea", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AdvancedBuoyancyComponent_eventTriangleArea_Parms), Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent_NoRegister()
	{
		return UAdvancedBuoyancyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriSubmergedArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriSubmergedArea;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriSubmergedArea_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriSizes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriSizes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmergedTris_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubmergedTris;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubmergedTris_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedGridHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdvancedGridHeight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdvancedGridHeight_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlamAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSlamAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViscousDragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViscousDragCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuctionCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuctionCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmergedVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubmergedVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityCorrectionModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityCorrectionModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityCorrection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuoyancyPitchReductionCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuoyancyPitchReductionCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuoyancyReductionCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuoyancyReductionCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalseVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FalseVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuoyantMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuoyantMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaterDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheOcean_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TheOcean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugOn_MetaData[];
#endif
		static void NewProp_bDebugOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDrag_MetaData[];
#endif
		static void NewProp_bUseDrag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDrag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce, "ApplyForce" }, // 2097219018
		{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce, "ApplySlamForce" }, // 4154763928
		{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff, "DrawDebugStuff" }, // 3948002114
		{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean, "GetOcean" }, // 2689778254
		{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid, "GetOceanDepthFromGrid" }, // 2961174660
		{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity, "SetMeshDensity" }, // 2021161315
		{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle, "SplitTriangle" }, // 4179514288
		{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea, "TriangleArea" }, // 4265379233
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSubmergedArea_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Triangles" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSubmergedArea = { UE4CodeGen_Private::EPropertyClass::Array, "TriSubmergedArea", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, TriSubmergedArea), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSubmergedArea_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSubmergedArea_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSubmergedArea_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "TriSubmergedArea", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSizes_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Triangles" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSizes = { UE4CodeGen_Private::EPropertyClass::Array, "TriSizes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, TriSizes), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSizes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSizes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSizes_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "TriSizes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SubmergedTris_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Triangles" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SubmergedTris = { UE4CodeGen_Private::EPropertyClass::Array, "SubmergedTris", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, SubmergedTris), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SubmergedTris_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SubmergedTris_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SubmergedTris_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SubmergedTris", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FForceTriangle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_AdvancedGridHeight_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Optimization" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_AdvancedGridHeight = { UE4CodeGen_Private::EPropertyClass::Array, "AdvancedGridHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, AdvancedGridHeight), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_AdvancedGridHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_AdvancedGridHeight_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_AdvancedGridHeight_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AdvancedGridHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MaxSlamAcceleration_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Coefficients" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MaxSlamAcceleration = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSlamAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, MaxSlamAcceleration), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MaxSlamAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MaxSlamAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_ViscousDragCoefficient_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Coefficients" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_ViscousDragCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "ViscousDragCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, ViscousDragCoefficient), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_ViscousDragCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_ViscousDragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SuctionCoefficient_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Coefficients" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SuctionCoefficient = { UE4CodeGen_Private::EPropertyClass::Struct, "SuctionCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, SuctionCoefficient), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SuctionCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SuctionCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Coefficients" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DragCoefficient = { UE4CodeGen_Private::EPropertyClass::Struct, "DragCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, DragCoefficient), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DragCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_ImpactCoefficient_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Coefficients" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_ImpactCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "ImpactCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, ImpactCoefficient), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_ImpactCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_ImpactCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SubmergedVolume_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Coefficients" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SubmergedVolume = { UE4CodeGen_Private::EPropertyClass::Float, "SubmergedVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, SubmergedVolume), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SubmergedVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SubmergedVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DensityCorrectionModifier_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Coefficients" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DensityCorrectionModifier = { UE4CodeGen_Private::EPropertyClass::Float, "DensityCorrectionModifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, DensityCorrectionModifier), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DensityCorrectionModifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DensityCorrectionModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DensityCorrection_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Coefficients" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DensityCorrection = { UE4CodeGen_Private::EPropertyClass::Float, "DensityCorrection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, DensityCorrection), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DensityCorrection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DensityCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyancyPitchReductionCoefficient_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Coefficients" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyancyPitchReductionCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "BuoyancyPitchReductionCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, BuoyancyPitchReductionCoefficient), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyancyPitchReductionCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyancyPitchReductionCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyancyReductionCoefficient_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Coefficients" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyancyReductionCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "BuoyancyReductionCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, BuoyancyReductionCoefficient), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyancyReductionCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyancyReductionCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_FalseVolume_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Mesh Data" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_FalseVolume = { UE4CodeGen_Private::EPropertyClass::Float, "FalseVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, FalseVolume), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_FalseVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_FalseVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MeshTransform_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Mesh Data" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MeshTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, MeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MeshTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MeshTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyantMesh_MetaData[] = {
		{ "Category", "Advanced Buoyancy|Mesh Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
		{ "ToolTip", "The mesh the forces are being applied too, can be different from the mesh used for buoyancy." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyantMesh = { UE4CodeGen_Private::EPropertyClass::Object, "BuoyantMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, BuoyantMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyantMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyantMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MeshDensity_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MeshDensity = { UE4CodeGen_Private::EPropertyClass::Float, "MeshDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, MeshDensity), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MeshDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MeshDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "World Data" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_Gravity = { UE4CodeGen_Private::EPropertyClass::Float, "Gravity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, Gravity), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_Gravity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_WaterDensity_MetaData[] = {
		{ "Category", "World Data" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_WaterDensity = { UE4CodeGen_Private::EPropertyClass::Float, "WaterDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, WaterDensity), METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_WaterDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_WaterDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TheOcean_MetaData[] = {
		{ "Category", "World Data" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
		{ "ToolTip", "World information" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TheOcean = { UE4CodeGen_Private::EPropertyClass::Object, "TheOcean", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, TheOcean), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TheOcean_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TheOcean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bDebugOn_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
		{ "ToolTip", "will draw force arrows and buoyancy traingles/points" },
	};
#endif
	void Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bDebugOn_SetBit(void* Obj)
	{
		((UAdvancedBuoyancyComponent*)Obj)->bDebugOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bDebugOn = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedBuoyancyComponent), &Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bDebugOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bDebugOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bDebugOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bUseDrag_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
		{ "ToolTip", "use drag when using advanced buoyancy (most likely will always be yes)" },
	};
#endif
	void Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bUseDrag_SetBit(void* Obj)
	{
		((UAdvancedBuoyancyComponent*)Obj)->bUseDrag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bUseDrag = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDrag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedBuoyancyComponent), &Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bUseDrag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bUseDrag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bUseDrag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSubmergedArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSubmergedArea_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TriSizes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SubmergedTris,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SubmergedTris_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_AdvancedGridHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_AdvancedGridHeight_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MaxSlamAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_ViscousDragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SuctionCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_ImpactCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_SubmergedVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DensityCorrectionModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_DensityCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyancyPitchReductionCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyancyReductionCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_FalseVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MeshTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_BuoyantMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_MeshDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_WaterDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_TheOcean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bDebugOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::NewProp_bUseDrag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedBuoyancyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::ClassParams = {
		&UAdvancedBuoyancyComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedBuoyancyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedBuoyancyComponent, 3654460901);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedBuoyancyComponent(Z_Construct_UClass_UAdvancedBuoyancyComponent, &UAdvancedBuoyancyComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UAdvancedBuoyancyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedBuoyancyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
