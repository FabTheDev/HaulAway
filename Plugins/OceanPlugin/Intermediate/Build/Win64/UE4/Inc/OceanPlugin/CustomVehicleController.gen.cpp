// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/CustomVehicleController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomVehicleController() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ACustomVehicleController_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ACustomVehicleController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_EnterVehicle();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_ExitVehicle();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_GetIsDriving();
// End Cross Module References
	void ACustomVehicleController::StaticRegisterNativesACustomVehicleController()
	{
		UClass* Class = ACustomVehicleController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawBuoyancyPoints", &ACustomVehicleController::execDrawBuoyancyPoints },
			{ "EnableBuoyancy", &ACustomVehicleController::execEnableBuoyancy },
			{ "EnterVehicle", &ACustomVehicleController::execEnterVehicle },
			{ "ExitVehicle", &ACustomVehicleController::execExitVehicle },
			{ "GetIsDriving", &ACustomVehicleController::execGetIsDriving },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
		{ "ToolTip", "--Custom debugging console commands--" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomVehicleController, "DrawBuoyancyPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomVehicleController, "EnableBuoyancy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomVehicleController_EnterVehicle_Statics
	{
		struct CustomVehicleController_eventEnterVehicle_Parms
		{
			APawn* Vehicle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACustomVehicleController_EnterVehicle_Statics::NewProp_Vehicle = { UE4CodeGen_Private::EPropertyClass::Object, "Vehicle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CustomVehicleController_eventEnterVehicle_Parms, Vehicle), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomVehicleController_EnterVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomVehicleController_EnterVehicle_Statics::NewProp_Vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomVehicleController_EnterVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomVehicleController_EnterVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomVehicleController, "EnterVehicle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(CustomVehicleController_eventEnterVehicle_Parms), Z_Construct_UFunction_ACustomVehicleController_EnterVehicle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACustomVehicleController_EnterVehicle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomVehicleController_EnterVehicle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACustomVehicleController_EnterVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomVehicleController_EnterVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomVehicleController_EnterVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomVehicleController_ExitVehicle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomVehicleController_ExitVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomVehicleController_ExitVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomVehicleController, "ExitVehicle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomVehicleController_ExitVehicle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACustomVehicleController_ExitVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomVehicleController_ExitVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomVehicleController_ExitVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics
	{
		struct CustomVehicleController_eventGetIsDriving_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomVehicleController_eventGetIsDriving_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CustomVehicleController_eventGetIsDriving_Parms), &Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomVehicleController, "GetIsDriving", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020400, sizeof(CustomVehicleController_eventGetIsDriving_Parms), Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomVehicleController_GetIsDriving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomVehicleController_GetIsDriving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACustomVehicleController_NoRegister()
	{
		return ACustomVehicleController::StaticClass();
	}
	struct Z_Construct_UClass_ACustomVehicleController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomVehicleController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomVehicleController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints, "DrawBuoyancyPoints" }, // 4036908988
		{ &Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy, "EnableBuoyancy" }, // 3910401077
		{ &Z_Construct_UFunction_ACustomVehicleController_EnterVehicle, "EnterVehicle" }, // 2344144079
		{ &Z_Construct_UFunction_ACustomVehicleController_ExitVehicle, "ExitVehicle" }, // 893576470
		{ &Z_Construct_UFunction_ACustomVehicleController_GetIsDriving, "GetIsDriving" }, // 1705481187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomVehicleController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CustomVehicleController.h" },
		{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
		{ "ToolTip", "Custom player controller that has custom functionality to help possess vehicles." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomVehicleController_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomVehicleController_Statics::NewProp_PlayerPawn = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(ACustomVehicleController, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomVehicleController_Statics::NewProp_PlayerPawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACustomVehicleController_Statics::NewProp_PlayerPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomVehicleController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomVehicleController_Statics::NewProp_PlayerPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomVehicleController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomVehicleController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomVehicleController_Statics::ClassParams = {
		&ACustomVehicleController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ACustomVehicleController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACustomVehicleController_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACustomVehicleController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACustomVehicleController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomVehicleController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomVehicleController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomVehicleController, 2902501939);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomVehicleController(Z_Construct_UClass_ACustomVehicleController, &ACustomVehicleController::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("ACustomVehicleController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomVehicleController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
