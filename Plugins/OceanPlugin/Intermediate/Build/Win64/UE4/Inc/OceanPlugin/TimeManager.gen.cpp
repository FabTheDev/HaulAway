// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/Sky/TimeManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeManager() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ATimeManager_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ATimeManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_CalculateMoonAngle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_CalculateMoonPhase();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_CalculateSunAngle();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetDayOfYear();
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTimeDate();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetDayPhase();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetDaysInMonth();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetDaysInYear();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetYearPhase();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_IncrementTime();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_InitializeCalendar();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_IsLeapYear();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime();
// End Cross Module References
	void ATimeManager::StaticRegisterNativesATimeManager()
	{
		UClass* Class = ATimeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateMoonAngle", &ATimeManager::execCalculateMoonAngle },
			{ "CalculateMoonPhase", &ATimeManager::execCalculateMoonPhase },
			{ "CalculateSunAngle", &ATimeManager::execCalculateSunAngle },
			{ "GetDayOfYear", &ATimeManager::execGetDayOfYear },
			{ "GetDayPhase", &ATimeManager::execGetDayPhase },
			{ "GetDaysInMonth", &ATimeManager::execGetDaysInMonth },
			{ "GetDaysInYear", &ATimeManager::execGetDaysInYear },
			{ "GetElapsedDayInMinutes", &ATimeManager::execGetElapsedDayInMinutes },
			{ "GetYearPhase", &ATimeManager::execGetYearPhase },
			{ "IncrementTime", &ATimeManager::execIncrementTime },
			{ "InitializeCalendar", &ATimeManager::execInitializeCalendar },
			{ "IsLeapYear", &ATimeManager::execIsLeapYear },
			{ "SetCurrentLocalTime", &ATimeManager::execSetCurrentLocalTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATimeManager_CalculateMoonAngle_Statics
	{
		struct TimeManager_eventCalculateMoonAngle_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATimeManager_CalculateMoonAngle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventCalculateMoonAngle_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_CalculateMoonAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_CalculateMoonAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_CalculateMoonAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "@Name: CalculateMoonAngle\n@Description: Calculates the moon angle rotator from the current time.\n\n@return: FRotator - The moon rotation value for the current time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_CalculateMoonAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "CalculateMoonAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(TimeManager_eventCalculateMoonAngle_Parms), Z_Construct_UFunction_ATimeManager_CalculateMoonAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_CalculateMoonAngle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_CalculateMoonAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_CalculateMoonAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_CalculateMoonAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_CalculateMoonAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_CalculateMoonPhase_Statics
	{
		struct TimeManager_eventCalculateMoonPhase_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimeManager_CalculateMoonPhase_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventCalculateMoonPhase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_CalculateMoonPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_CalculateMoonPhase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_CalculateMoonPhase_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "@Name: CalculateMoonPhase\n@Description: Calculates the moon phase for the current time and date.\n\n@return: FRotator - The moon rotation value for the current time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_CalculateMoonPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "CalculateMoonPhase", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventCalculateMoonPhase_Parms), Z_Construct_UFunction_ATimeManager_CalculateMoonPhase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_CalculateMoonPhase_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_CalculateMoonPhase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_CalculateMoonPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_CalculateMoonPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_CalculateMoonPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_CalculateSunAngle_Statics
	{
		struct TimeManager_eventCalculateSunAngle_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATimeManager_CalculateSunAngle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventCalculateSunAngle_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_CalculateSunAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_CalculateSunAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_CalculateSunAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "@Name: CalculateSunAngle\n@Description: Calculates the sun angle rotator from the current time.\n\n@return: FRotator - The sun rotation value for the current time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_CalculateSunAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "CalculateSunAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(TimeManager_eventCalculateSunAngle_Parms), Z_Construct_UFunction_ATimeManager_CalculateSunAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_CalculateSunAngle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_CalculateSunAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_CalculateSunAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_CalculateSunAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_CalculateSunAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics
	{
		struct TimeManager_eventGetDayOfYear_Parms
		{
			FTimeDate time;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDayOfYear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics::NewProp_time = { UE4CodeGen_Private::EPropertyClass::Struct, "time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDayOfYear_Parms, time), Z_Construct_UScriptStruct_FTimeDate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Name: GetDayOfYear\nDescription: Gets the number of full days elapsed in the current year for the provided date.\n\n@param: time (TimeDate) - The TimeDate value to calculate from.\n@return: int32 - The number of days elapsed in the current year." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "GetDayOfYear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventGetDayOfYear_Parms), Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_GetDayOfYear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_GetDayOfYear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_GetDayPhase_Statics
	{
		struct TimeManager_eventGetDayPhase_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimeManager_GetDayPhase_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDayPhase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_GetDayPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetDayPhase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_GetDayPhase_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Name: GetDayPhase\nDescription: Gets the current day phase in a 0 to 1 range (fractional).\n\n@return: float - The day phase in a 0.0 to 1.0 range." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_GetDayPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "GetDayPhase", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(TimeManager_eventGetDayPhase_Parms), Z_Construct_UFunction_ATimeManager_GetDayPhase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetDayPhase_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_GetDayPhase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetDayPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_GetDayPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_GetDayPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics
	{
		struct TimeManager_eventGetDaysInMonth_Parms
		{
			int32 year;
			int32 month;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_month;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_year;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDaysInMonth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::NewProp_month = { UE4CodeGen_Private::EPropertyClass::Int, "month", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDaysInMonth_Parms, month), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::NewProp_year = { UE4CodeGen_Private::EPropertyClass::Int, "year", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDaysInMonth_Parms, year), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::NewProp_month,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::NewProp_year,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Name: DaysInMonth\nDescription: The number of days in the specified month (leap years are taken into account).\n\n@param: month (int32) - The month value.\n@param: year (int32) - The year value.\n@return: int32 - The number of days in the given month for the given year." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "GetDaysInMonth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventGetDaysInMonth_Parms), Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_GetDaysInMonth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_GetDaysInMonth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics
	{
		struct TimeManager_eventGetDaysInYear_Parms
		{
			int32 year;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_year;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDaysInYear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics::NewProp_year = { UE4CodeGen_Private::EPropertyClass::Int, "year", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDaysInYear_Parms, year), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics::NewProp_year,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Name: DaysInYear\nDescription: Gets the total number of days in a given year (takes leap years into account).\n\n@param: year (int32) - The year value.\n@return: int32 - The total number of days in the given year." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "GetDaysInYear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventGetDaysInYear_Parms), Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_GetDaysInYear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_GetDaysInYear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes_Statics
	{
		struct TimeManager_eventGetElapsedDayInMinutes_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetElapsedDayInMinutes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Name: GetElapsedDayInMinutes\nDescription: Gets the accumulated number of minutes (plus fractional) for the current day.\n\n@return: float - The number of minutes (plus fractional minute - NOT seconds) elapsed in the given day." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "GetElapsedDayInMinutes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventGetElapsedDayInMinutes_Parms), Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_GetYearPhase_Statics
	{
		struct TimeManager_eventGetYearPhase_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimeManager_GetYearPhase_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetYearPhase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_GetYearPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetYearPhase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_GetYearPhase_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Name: GetYearPhase\nDescription: Gets the current year phase in a 0 to 1 range (fractional).\n\n@return: float - The year phase in a 0.0 to 1.0 range." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_GetYearPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "GetYearPhase", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(TimeManager_eventGetYearPhase_Parms), Z_Construct_UFunction_ATimeManager_GetYearPhase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetYearPhase_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_GetYearPhase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetYearPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_GetYearPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_GetYearPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_IncrementTime_Statics
	{
		struct TimeManager_eventIncrementTime_Parms
		{
			float deltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimeManager_IncrementTime_Statics::NewProp_deltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "deltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventIncrementTime_Parms, deltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_IncrementTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_IncrementTime_Statics::NewProp_deltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_IncrementTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Name: IncrementTime\nDescription: Increments time based on the deltaSeconds * TimeScaleMultiplier\n\n@param: deltaSeconds (float) - The Tick (or accumulated ticks) delta time since the last update" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_IncrementTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "IncrementTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventIncrementTime_Parms), Z_Construct_UFunction_ATimeManager_IncrementTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_IncrementTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_IncrementTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_IncrementTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_IncrementTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_IncrementTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_InitializeCalendar_Statics
	{
		struct TimeManager_eventInitializeCalendar_Parms
		{
			FTimeDate time;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATimeManager_InitializeCalendar_Statics::NewProp_time = { UE4CodeGen_Private::EPropertyClass::Struct, "time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventInitializeCalendar_Parms, time), Z_Construct_UScriptStruct_FTimeDate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_InitializeCalendar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_InitializeCalendar_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_InitializeCalendar_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Name: InitializeCalendar\nDescription: Initializes the calendar with the provided TimeDate, and validates the range of all input values.\n\n@param: time (TimeDate) - The TimeDate value to calculate from." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_InitializeCalendar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "InitializeCalendar", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventInitializeCalendar_Parms), Z_Construct_UFunction_ATimeManager_InitializeCalendar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_InitializeCalendar_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_InitializeCalendar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_InitializeCalendar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_InitializeCalendar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_InitializeCalendar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics
	{
		struct TimeManager_eventIsLeapYear_Parms
		{
			int32 year;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_year;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeManager_eventIsLeapYear_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimeManager_eventIsLeapYear_Parms), &Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::NewProp_year = { UE4CodeGen_Private::EPropertyClass::Int, "year", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventIsLeapYear_Parms, year), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::NewProp_year,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Name: IsLeapYear\nDescription: Determines whether the specified year is a leap year.\n\n@param: year (int32) - The year value to check\n@return: bool - Will return true if it is a leap year, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "IsLeapYear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventIsLeapYear_Parms), Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_IsLeapYear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_IsLeapYear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime_Statics
	{
		struct TimeManager_eventSetCurrentLocalTime_Parms
		{
			float time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime_Statics::NewProp_time = { UE4CodeGen_Private::EPropertyClass::Float, "time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventSetCurrentLocalTime_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Name: SetCurrentLocalTime\nDescription: Sets the local time from minutes, and runs InitializeCalendar to validate and set variables.\n\n@param: time (float) - The number of minutes (+ frac minutes) to calculate from." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "SetCurrentLocalTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventSetCurrentLocalTime_Parms), Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATimeManager_NoRegister()
	{
		return ATimeManager::StaticClass();
	}
	struct Z_Construct_UClass_ATimeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartL_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EcDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EcDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EcLatitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EcLatitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EcLongitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EcLongitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LunarElapsedDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LunarElapsedDays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LunarRightAsc_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LunarRightAsc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LunarAzimuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LunarAzimuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LunarDeclination_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LunarDeclination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LunarHRA_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LunarHRA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LunarAltAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LunarAltAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SiderealTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SiderealTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolarHRA_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolarHRA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolarAzimuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolarAzimuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolarDeclination_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolarDeclination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolarAltAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolarAltAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EoT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EoT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DayOfYear_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DayOfYear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LSTM_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LSTM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeCorrection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalClockTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocalClockTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolarTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolarTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDaylightSavingsActive_MetaData[];
#endif
		static void NewProp_bDaylightSavingsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDaylightSavingsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDaylightSavings_MetaData[];
#endif
		static void NewProp_bAllowDaylightSavings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDaylightSavings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetDST_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetDST;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetUTC_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetUTC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLocalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLocalTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATimeManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimeManager_CalculateMoonAngle, "CalculateMoonAngle" }, // 592955016
		{ &Z_Construct_UFunction_ATimeManager_CalculateMoonPhase, "CalculateMoonPhase" }, // 2709363441
		{ &Z_Construct_UFunction_ATimeManager_CalculateSunAngle, "CalculateSunAngle" }, // 1535514279
		{ &Z_Construct_UFunction_ATimeManager_GetDayOfYear, "GetDayOfYear" }, // 2479114300
		{ &Z_Construct_UFunction_ATimeManager_GetDayPhase, "GetDayPhase" }, // 3297924442
		{ &Z_Construct_UFunction_ATimeManager_GetDaysInMonth, "GetDaysInMonth" }, // 4133644846
		{ &Z_Construct_UFunction_ATimeManager_GetDaysInYear, "GetDaysInYear" }, // 4132153241
		{ &Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes, "GetElapsedDayInMinutes" }, // 3965837057
		{ &Z_Construct_UFunction_ATimeManager_GetYearPhase, "GetYearPhase" }, // 2750513632
		{ &Z_Construct_UFunction_ATimeManager_IncrementTime, "IncrementTime" }, // 3829701347
		{ &Z_Construct_UFunction_ATimeManager_InitializeCalendar, "InitializeCalendar" }, // 754978591
		{ &Z_Construct_UFunction_ATimeManager_IsLeapYear, "IsLeapYear" }, // 576756006
		{ &Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime, "SetCurrentLocalTime" }, // 767073428
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sky/TimeManager.h" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "An actor based calendar system for tracking date + time, and Sun/Moon rotation/phase." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_PartF_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_PartF = { UE4CodeGen_Private::EPropertyClass::Float, "PartF", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, PartF), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_PartF_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_PartF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_PartM_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_PartM = { UE4CodeGen_Private::EPropertyClass::Float, "PartM", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, PartM), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_PartM_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_PartM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_PartL_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_PartL = { UE4CodeGen_Private::EPropertyClass::Float, "PartL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, PartL), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_PartL_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_PartL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_EcDistance_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_EcDistance = { UE4CodeGen_Private::EPropertyClass::Float, "EcDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, EcDistance), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_EcDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_EcDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_EcLatitude_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_EcLatitude = { UE4CodeGen_Private::EPropertyClass::Float, "EcLatitude", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, EcLatitude), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_EcLatitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_EcLatitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_EcLongitude_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_EcLongitude = { UE4CodeGen_Private::EPropertyClass::Float, "EcLongitude", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, EcLongitude), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_EcLongitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_EcLongitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarElapsedDays_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarElapsedDays = { UE4CodeGen_Private::EPropertyClass::Float, "LunarElapsedDays", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LunarElapsedDays), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarElapsedDays_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarElapsedDays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarRightAsc_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The current Right Ascension angle for the moon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarRightAsc = { UE4CodeGen_Private::EPropertyClass::Float, "LunarRightAsc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LunarRightAsc), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarRightAsc_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarRightAsc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarAzimuth_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The current Azimuth angle of the moon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarAzimuth = { UE4CodeGen_Private::EPropertyClass::Float, "LunarAzimuth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LunarAzimuth), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarAzimuth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarAzimuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarDeclination_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The current Declination angle of the moon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarDeclination = { UE4CodeGen_Private::EPropertyClass::Float, "LunarDeclination", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LunarDeclination), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarDeclination_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarDeclination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarHRA_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The current Hour Angle of the moon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarHRA = { UE4CodeGen_Private::EPropertyClass::Float, "LunarHRA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LunarHRA), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarHRA_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarHRA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarAltAngle_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The current Altitude Angle of the moon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarAltAngle = { UE4CodeGen_Private::EPropertyClass::Float, "LunarAltAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LunarAltAngle), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarAltAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarAltAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_SiderealTime_MetaData[] = {
		{ "Category", "Lunar Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The current Sidereal Time value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_SiderealTime = { UE4CodeGen_Private::EPropertyClass::Float, "SiderealTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, SiderealTime), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_SiderealTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_SiderealTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarHRA_MetaData[] = {
		{ "Category", "Sun Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The current Hour Angle of the sun" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarHRA = { UE4CodeGen_Private::EPropertyClass::Float, "SolarHRA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, SolarHRA), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarHRA_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarHRA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarAzimuth_MetaData[] = {
		{ "Category", "Sun Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The Azimuth angle of the sun" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarAzimuth = { UE4CodeGen_Private::EPropertyClass::Float, "SolarAzimuth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, SolarAzimuth), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarAzimuth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarAzimuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarDeclination_MetaData[] = {
		{ "Category", "Sun Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The current Declination angle of the sun" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarDeclination = { UE4CodeGen_Private::EPropertyClass::Float, "SolarDeclination", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, SolarDeclination), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarDeclination_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarDeclination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarAltAngle_MetaData[] = {
		{ "Category", "Sun Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The current Altitude Angle of the sun" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarAltAngle = { UE4CodeGen_Private::EPropertyClass::Float, "SolarAltAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, SolarAltAngle), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarAltAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarAltAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_EoT_MetaData[] = {
		{ "Category", "Sun Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "THe current Equation of Time value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_EoT = { UE4CodeGen_Private::EPropertyClass::Float, "EoT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, EoT), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_EoT_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_EoT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_DayOfYear_MetaData[] = {
		{ "Category", "Sun Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_DayOfYear = { UE4CodeGen_Private::EPropertyClass::Int, "DayOfYear", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, DayOfYear), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_DayOfYear_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_DayOfYear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_LSTM_MetaData[] = {
		{ "Category", "Sun Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The value of the local Standard Time Meridian (15deg intervals)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_LSTM = { UE4CodeGen_Private::EPropertyClass::Int, "LSTM", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LSTM), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_LSTM_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_LSTM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeCorrection_MetaData[] = {
		{ "Category", "Sun Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The current Time Correction factor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeCorrection = { UE4CodeGen_Private::EPropertyClass::Float, "TimeCorrection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, TimeCorrection), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeCorrection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_LocalClockTime_MetaData[] = {
		{ "Category", "Sun Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The current Local Clock Time value (in minutes)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_LocalClockTime = { UE4CodeGen_Private::EPropertyClass::Float, "LocalClockTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LocalClockTime), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_LocalClockTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_LocalClockTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarTime_MetaData[] = {
		{ "Category", "Sun Debug" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The current Local Solar Time (in minutes)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarTime = { UE4CodeGen_Private::EPropertyClass::Float, "SolarTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, SolarTime), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeScaleMultiplier_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The value to multiply the base game time by (1 second real time is multiplied to equal X seconds in game)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeScaleMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "TimeScaleMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATimeManager, TimeScaleMultiplier), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeScaleMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_bDaylightSavingsActive_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Determines whether Daylight Savings is active for the current date" },
	};
#endif
	void Z_Construct_UClass_ATimeManager_Statics::NewProp_bDaylightSavingsActive_SetBit(void* Obj)
	{
		((ATimeManager*)Obj)->bDaylightSavingsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_bDaylightSavingsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bDaylightSavingsActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATimeManager), &Z_Construct_UClass_ATimeManager_Statics::NewProp_bDaylightSavingsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_bDaylightSavingsActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_bDaylightSavingsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_bAllowDaylightSavings_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Determines whether Daylight Savings time should be enabled for the local location" },
	};
#endif
	void Z_Construct_UClass_ATimeManager_Statics::NewProp_bAllowDaylightSavings_SetBit(void* Obj)
	{
		((ATimeManager*)Obj)->bAllowDaylightSavings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_bAllowDaylightSavings = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowDaylightSavings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATimeManager), &Z_Construct_UClass_ATimeManager_Statics::NewProp_bAllowDaylightSavings_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_bAllowDaylightSavings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_bAllowDaylightSavings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_OffsetDST_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The number of hours (0 or 1) to subtract for the current TimeDate for Daylight Savings Time (if enabled)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_OffsetDST = { UE4CodeGen_Private::EPropertyClass::Int, "OffsetDST", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, OffsetDST), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_OffsetDST_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_OffsetDST_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_OffsetUTC_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The number of hours offset from UTC for the local location (value in the range of -12 to +12 hours from UTC)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_OffsetUTC = { UE4CodeGen_Private::EPropertyClass::Int, "OffsetUTC", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATimeManager, OffsetUTC), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_OffsetUTC_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_OffsetUTC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The Longitude of the local location (-180 to +180 in degrees)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_Longitude = { UE4CodeGen_Private::EPropertyClass::Float, "Longitude", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATimeManager, Longitude), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_Longitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "The Latitude of the local location (-90 to +90 in degrees)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_Latitude = { UE4CodeGen_Private::EPropertyClass::Float, "Latitude", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATimeManager, Latitude), METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_Latitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentLocalTime_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
		{ "ToolTip", "Current Local Clock Time (LCT)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentLocalTime = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentLocalTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, CurrentLocalTime), Z_Construct_UScriptStruct_FTimeDate, METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentLocalTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentLocalTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_PartF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_PartM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_PartL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_EcDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_EcLatitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_EcLongitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarElapsedDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarRightAsc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarAzimuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarDeclination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarHRA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_LunarAltAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_SiderealTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarHRA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarAzimuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarDeclination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarAltAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_EoT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_DayOfYear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_LSTM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_LocalClockTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_SolarTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_TimeScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_bDaylightSavingsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_bAllowDaylightSavings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_OffsetDST,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_OffsetUTC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_Longitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_Latitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_CurrentLocalTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimeManager_Statics::ClassParams = {
		&ATimeManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATimeManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATimeManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimeManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimeManager, 2178594199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimeManager(Z_Construct_UClass_ATimeManager, &ATimeManager::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("ATimeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
