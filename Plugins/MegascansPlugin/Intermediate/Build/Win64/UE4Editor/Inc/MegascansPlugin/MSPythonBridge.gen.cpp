// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MegascansPlugin/Private/MSPythonBridge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSPythonBridge() {}
// Cross Module References
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMSPythonBridge_NoRegister();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMSPythonBridge();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MegascansPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UMSPythonBridge::execCalledFromPython)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMSPythonBridge::CalledFromPython(Z_Param_InputString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMSPythonBridge::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMSPythonBridge**)Z_Param__Result=UMSPythonBridge::Get();
		P_NATIVE_END;
	}
	static FName NAME_UMSPythonBridge_GetUeData = FName(TEXT("GetUeData"));
	void UMSPythonBridge::GetUeData(const FString& CommandName) const
	{
		MSPythonBridge_eventGetUeData_Parms Parms;
		Parms.CommandName=CommandName;
		const_cast<UMSPythonBridge*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMSPythonBridge_GetUeData),&Parms);
	}
	static FName NAME_UMSPythonBridge_InitializePythonWindow = FName(TEXT("InitializePythonWindow"));
	void UMSPythonBridge::InitializePythonWindow() const
	{
		const_cast<UMSPythonBridge*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMSPythonBridge_InitializePythonWindow),NULL);
	}
	static FName NAME_UMSPythonBridge_TestFbxImport = FName(TEXT("TestFbxImport"));
	void UMSPythonBridge::TestFbxImport() const
	{
		const_cast<UMSPythonBridge*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMSPythonBridge_TestFbxImport),NULL);
	}
	void UMSPythonBridge::StaticRegisterNativesUMSPythonBridge()
	{
		UClass* Class = UMSPythonBridge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalledFromPython", &UMSPythonBridge::execCalledFromPython },
			{ "Get", &UMSPythonBridge::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMSPythonBridge_CalledFromPython_Statics
	{
		struct MSPythonBridge_eventCalledFromPython_Parms
		{
			FString InputString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSPythonBridge_CalledFromPython_Statics::NewProp_InputString = { "InputString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MSPythonBridge_eventCalledFromPython_Parms, InputString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSPythonBridge_CalledFromPython_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSPythonBridge_CalledFromPython_Statics::NewProp_InputString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSPythonBridge_CalledFromPython_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "Comment", "//Testing bridge from Python to C++\n" },
		{ "ModuleRelativePath", "Private/MSPythonBridge.h" },
		{ "ToolTip", "Testing bridge from Python to C++" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSPythonBridge_CalledFromPython_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSPythonBridge, nullptr, "CalledFromPython", nullptr, nullptr, sizeof(MSPythonBridge_eventCalledFromPython_Parms), Z_Construct_UFunction_UMSPythonBridge_CalledFromPython_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSPythonBridge_CalledFromPython_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMSPythonBridge_CalledFromPython_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSPythonBridge_CalledFromPython_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMSPythonBridge_CalledFromPython()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMSPythonBridge_CalledFromPython_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSPythonBridge_Get_Statics
	{
		struct MSPythonBridge_eventGet_Parms
		{
			UMSPythonBridge* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSPythonBridge_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MSPythonBridge_eventGet_Parms, ReturnValue), Z_Construct_UClass_UMSPythonBridge_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSPythonBridge_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSPythonBridge_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSPythonBridge_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Private/MSPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSPythonBridge_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSPythonBridge, nullptr, "Get", nullptr, nullptr, sizeof(MSPythonBridge_eventGet_Parms), Z_Construct_UFunction_UMSPythonBridge_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSPythonBridge_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMSPythonBridge_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSPythonBridge_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMSPythonBridge_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMSPythonBridge_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::NewProp_CommandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::NewProp_CommandName = { "CommandName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MSPythonBridge_eventGetUeData_Parms, CommandName), METADATA_PARAMS(Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::NewProp_CommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::NewProp_CommandName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::NewProp_CommandName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Private/MSPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSPythonBridge, nullptr, "GetUeData", nullptr, nullptr, sizeof(MSPythonBridge_eventGetUeData_Parms), Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMSPythonBridge_GetUeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMSPythonBridge_GetUeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSPythonBridge_InitializePythonWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSPythonBridge_InitializePythonWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Private/MSPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSPythonBridge_InitializePythonWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSPythonBridge, nullptr, "InitializePythonWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMSPythonBridge_InitializePythonWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSPythonBridge_InitializePythonWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMSPythonBridge_InitializePythonWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMSPythonBridge_InitializePythonWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMSPythonBridge_TestFbxImport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMSPythonBridge_TestFbxImport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Private/MSPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSPythonBridge_TestFbxImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSPythonBridge, nullptr, "TestFbxImport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMSPythonBridge_TestFbxImport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSPythonBridge_TestFbxImport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMSPythonBridge_TestFbxImport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMSPythonBridge_TestFbxImport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMSPythonBridge_NoRegister()
	{
		return UMSPythonBridge::StaticClass();
	}
	struct Z_Construct_UClass_UMSPythonBridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMSPythonBridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMSPythonBridge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMSPythonBridge_CalledFromPython, "CalledFromPython" }, // 3639013240
		{ &Z_Construct_UFunction_UMSPythonBridge_Get, "Get" }, // 3170261901
		{ &Z_Construct_UFunction_UMSPythonBridge_GetUeData, "GetUeData" }, // 2053462687
		{ &Z_Construct_UFunction_UMSPythonBridge_InitializePythonWindow, "InitializePythonWindow" }, // 1046549489
		{ &Z_Construct_UFunction_UMSPythonBridge_TestFbxImport, "TestFbxImport" }, // 2745462061
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSPythonBridge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MSPythonBridge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/MSPythonBridge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMSPythonBridge_Statics::NewProp_JsonData_MetaData[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Private/MSPythonBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMSPythonBridge_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMSPythonBridge, JsonData), METADATA_PARAMS(Z_Construct_UClass_UMSPythonBridge_Statics::NewProp_JsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMSPythonBridge_Statics::NewProp_JsonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSPythonBridge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSPythonBridge_Statics::NewProp_JsonData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMSPythonBridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSPythonBridge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMSPythonBridge_Statics::ClassParams = {
		&UMSPythonBridge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMSPythonBridge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMSPythonBridge_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMSPythonBridge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMSPythonBridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMSPythonBridge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMSPythonBridge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMSPythonBridge, 3965309557);
	template<> MEGASCANSPLUGIN_API UClass* StaticClass<UMSPythonBridge>()
	{
		return UMSPythonBridge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMSPythonBridge(Z_Construct_UClass_UMSPythonBridge, &UMSPythonBridge::StaticClass, TEXT("/Script/MegascansPlugin"), TEXT("UMSPythonBridge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMSPythonBridge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
