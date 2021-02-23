// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MegascansPlugin/Private/UI/MSSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSSettings() {}
// Cross Module References
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMegascansSettings_NoRegister();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMegascansSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MegascansPlugin();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialBlendSettings_NoRegister();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialBlendSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialAssetSettings_NoRegister();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialAssetSettings();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialPresetsSettings_NoRegister();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialPresetsSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void UMegascansSettings::StaticRegisterNativesUMegascansSettings()
	{
	}
	UClass* Z_Construct_UClass_UMegascansSettings_NoRegister()
	{
		return UMegascansSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMegascansSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateFoliage_MetaData[];
#endif
		static void NewProp_bCreateFoliage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateFoliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLods_MetaData[];
#endif
		static void NewProp_bEnableLods_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLods;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBatchImportPrompt_MetaData[];
#endif
		static void NewProp_bBatchImportPrompt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBatchImportPrompt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDisplacement_MetaData[];
#endif
		static void NewProp_bEnableDisplacement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDisplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyToSelection_MetaData[];
#endif
		static void NewProp_bApplyToSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyToSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFilterMasterMaterialMaps_MetaData[];
#endif
		static void NewProp_bFilterMasterMaterialMaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFilterMasterMaterialMaps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMegascansSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegascansSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MSSettings.h" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage_MetaData[] = {
		{ "Category", "MegascansSettings" },
		{ "Comment", "/** Create foliage assets and populate Foliage Editor for 3D Plant and Scatter types. */" },
		{ "DisplayName", "Auto-Populate Foliage Painter" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
		{ "ToolTip", "Create foliage assets and populate Foliage Editor for 3D Plant and Scatter types." },
	};
#endif
	void Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage_SetBit(void* Obj)
	{
		((UMegascansSettings*)Obj)->bCreateFoliage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage = { "bCreateFoliage", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMegascansSettings), &Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableLods_MetaData[] = {
		{ "Category", "MegascansSettings" },
		{ "Comment", "/** Import LODs for 3D and 3D Plant assets. */" },
		{ "DisplayName", "Enable LOD Setup" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
		{ "ToolTip", "Import LODs for 3D and 3D Plant assets." },
	};
#endif
	void Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableLods_SetBit(void* Obj)
	{
		((UMegascansSettings*)Obj)->bEnableLods = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableLods = { "bEnableLods", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMegascansSettings), &Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableLods_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableLods_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableLods_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bBatchImportPrompt_MetaData[] = {
		{ "Category", "MegascansSettings" },
		{ "Comment", "/** Ask for confirmation when importing more than 10 assets. */" },
		{ "DisplayName", "Prompt Before Batch Import" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
		{ "ToolTip", "Ask for confirmation when importing more than 10 assets." },
	};
#endif
	void Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bBatchImportPrompt_SetBit(void* Obj)
	{
		((UMegascansSettings*)Obj)->bBatchImportPrompt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bBatchImportPrompt = { "bBatchImportPrompt", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMegascansSettings), &Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bBatchImportPrompt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bBatchImportPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bBatchImportPrompt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableDisplacement_MetaData[] = {
		{ "Category", "MegascansSettings" },
		{ "Comment", "/** Setup Displacement map supported default master material. */" },
		{ "DisplayName", "Enable Displacement" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
		{ "ToolTip", "Setup Displacement map supported default master material." },
	};
#endif
	void Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableDisplacement_SetBit(void* Obj)
	{
		((UMegascansSettings*)Obj)->bEnableDisplacement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableDisplacement = { "bEnableDisplacement", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMegascansSettings), &Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableDisplacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableDisplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection_MetaData[] = {
		{ "Category", "MegascansSettings" },
		{ "Comment", "/** Apply imported Surface on selected Actors in Editor. */" },
		{ "DisplayName", "Apply to Selection" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
		{ "ToolTip", "Apply imported Surface on selected Actors in Editor." },
	};
#endif
	void Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection_SetBit(void* Obj)
	{
		((UMegascansSettings*)Obj)->bApplyToSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection = { "bApplyToSelection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMegascansSettings), &Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bFilterMasterMaterialMaps_MetaData[] = {
		{ "Category", "MegascansSettings" },
		{ "Comment", "/** Only import textures that are supported by the selected Master Material for the asset type. */" },
		{ "DisplayName", "Import Master Material Textures" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
		{ "ToolTip", "Only import textures that are supported by the selected Master Material for the asset type." },
	};
#endif
	void Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bFilterMasterMaterialMaps_SetBit(void* Obj)
	{
		((UMegascansSettings*)Obj)->bFilterMasterMaterialMaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bFilterMasterMaterialMaps = { "bFilterMasterMaterialMaps", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMegascansSettings), &Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bFilterMasterMaterialMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bFilterMasterMaterialMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bFilterMasterMaterialMaps_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMegascansSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableLods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bBatchImportPrompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bEnableDisplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bFilterMasterMaterialMaps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMegascansSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMegascansSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMegascansSettings_Statics::ClassParams = {
		&UMegascansSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMegascansSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMegascansSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMegascansSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMegascansSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMegascansSettings, 1100190218);
	template<> MEGASCANSPLUGIN_API UClass* StaticClass<UMegascansSettings>()
	{
		return UMegascansSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMegascansSettings(Z_Construct_UClass_UMegascansSettings, &UMegascansSettings::StaticClass, TEXT("/Script/MegascansPlugin"), TEXT("UMegascansSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMegascansSettings);
	void UMaterialBlendSettings::StaticRegisterNativesUMaterialBlendSettings()
	{
	}
	UClass* Z_Construct_UClass_UMaterialBlendSettings_NoRegister()
	{
		return UMaterialBlendSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialBlendSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendedMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlendedMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendedMaterialPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendedMaterialPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialBlendSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialBlendSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MSSettings.h" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialName_MetaData[] = {
		{ "Category", "MaterialBlendSettings" },
		{ "Comment", "/** Package name for Material Blend instance. */" },
		{ "DisplayName", "Material Name" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
		{ "ToolTip", "Package name for Material Blend instance." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialName = { "BlendedMaterialName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialBlendSettings, BlendedMaterialName), METADATA_PARAMS(Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialPath_MetaData[] = {
		{ "Category", "MaterialBlendSettings" },
		{ "Comment", "/** Destination path for Material Blend instance. */" },
		{ "ContentDir", "" },
		{ "DisplayName", "Destination Path" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
		{ "ToolTip", "Destination path for Material Blend instance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialPath = { "BlendedMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialBlendSettings, BlendedMaterialPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialBlendSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialBlendSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialBlendSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialBlendSettings_Statics::ClassParams = {
		&UMaterialBlendSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialBlendSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBlendSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialBlendSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBlendSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialBlendSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialBlendSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialBlendSettings, 4240499316);
	template<> MEGASCANSPLUGIN_API UClass* StaticClass<UMaterialBlendSettings>()
	{
		return UMaterialBlendSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialBlendSettings(Z_Construct_UClass_UMaterialBlendSettings, &UMaterialBlendSettings::StaticClass, TEXT("/Script/MegascansPlugin"), TEXT("UMaterialBlendSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialBlendSettings);
	void UMaterialAssetSettings::StaticRegisterNativesUMaterialAssetSettings()
	{
	}
	UClass* Z_Construct_UClass_UMaterialAssetSettings_NoRegister()
	{
		return UMaterialAssetSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialAssetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterMaterial3d_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterMaterial3d;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterMaterialSurface_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterMaterialSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterMaterialPlant_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterMaterialPlant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialAssetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialAssetSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MSSettings.h" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterial3d_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "DisplayName", "3D Master Material" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterial3d = { "MasterMaterial3d", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialAssetSettings, MasterMaterial3d), METADATA_PARAMS(Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterial3d_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterial3d_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialSurface_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "DisplayName", "Surface Master Material" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialSurface = { "MasterMaterialSurface", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialAssetSettings, MasterMaterialSurface), METADATA_PARAMS(Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialPlant_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "DisplayName", "Plant Master Material" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialPlant = { "MasterMaterialPlant", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialAssetSettings, MasterMaterialPlant), METADATA_PARAMS(Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialPlant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialPlant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialAssetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterial3d,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialPlant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialAssetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialAssetSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialAssetSettings_Statics::ClassParams = {
		&UMaterialAssetSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialAssetSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialAssetSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialAssetSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialAssetSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialAssetSettings, 3673357399);
	template<> MEGASCANSPLUGIN_API UClass* StaticClass<UMaterialAssetSettings>()
	{
		return UMaterialAssetSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialAssetSettings(Z_Construct_UClass_UMaterialAssetSettings, &UMaterialAssetSettings::StaticClass, TEXT("/Script/MegascansPlugin"), TEXT("UMaterialAssetSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialAssetSettings);
	void UMaterialPresetsSettings::StaticRegisterNativesUMaterialPresetsSettings()
	{
	}
	UClass* Z_Construct_UClass_UMaterialPresetsSettings_NoRegister()
	{
		return UMaterialPresetsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialPresetsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterMaterial3d_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_MasterMaterial3d;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterMaterialSurface_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_MasterMaterialSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterMaterialPlant_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_MasterMaterialPlant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialPresetsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialPresetsSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MSSettings.h" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterial3d_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "Comment", "/** Replace default master material with your own custom master material for all 3D assets. Default material is used if field is left empty. */" },
		{ "DisplayName", "3D Master Material" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
		{ "ToolTip", "Replace default master material with your own custom master material for all 3D assets. Default material is used if field is left empty." },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterial3d = { "MasterMaterial3d", nullptr, (EPropertyFlags)0x0014000000002001, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialPresetsSettings, MasterMaterial3d), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterial3d_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterial3d_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialSurface_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "Comment", "/** Replace default master material with your own custom master material for all Surfaces. Default material is used if field is left empty. */" },
		{ "DisplayName", "Surface Master Material" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
		{ "ToolTip", "Replace default master material with your own custom master material for all Surfaces. Default material is used if field is left empty." },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialSurface = { "MasterMaterialSurface", nullptr, (EPropertyFlags)0x0014000000002001, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialPresetsSettings, MasterMaterialSurface), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialPlant_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "Comment", "/** Replace default master material with your own custom master material for all 3D Plants. Default material is used if field is left empty. */" },
		{ "DisplayName", "Plant Master Material" },
		{ "ModuleRelativePath", "Private/UI/MSSettings.h" },
		{ "ToolTip", "Replace default master material with your own custom master material for all 3D Plants. Default material is used if field is left empty." },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialPlant = { "MasterMaterialPlant", nullptr, (EPropertyFlags)0x0014000000002001, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialPresetsSettings, MasterMaterialPlant), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialPlant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialPlant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialPresetsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterial3d,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialPlant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialPresetsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialPresetsSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialPresetsSettings_Statics::ClassParams = {
		&UMaterialPresetsSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialPresetsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialPresetsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialPresetsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialPresetsSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialPresetsSettings, 3328431267);
	template<> MEGASCANSPLUGIN_API UClass* StaticClass<UMaterialPresetsSettings>()
	{
		return UMaterialPresetsSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialPresetsSettings(Z_Construct_UClass_UMaterialPresetsSettings, &UMaterialPresetsSettings::StaticClass, TEXT("/Script/MegascansPlugin"), TEXT("UMaterialPresetsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialPresetsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
