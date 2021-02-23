// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMSPythonBridge;
#ifdef MEGASCANSPLUGIN_MSPythonBridge_generated_h
#error "MSPythonBridge.generated.h already included, missing '#pragma once' in MSPythonBridge.h"
#endif
#define MEGASCANSPLUGIN_MSPythonBridge_generated_h

#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_SPARSE_DATA
#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalledFromPython); \
	DECLARE_FUNCTION(execGet);


#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalledFromPython); \
	DECLARE_FUNCTION(execGet);


#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_EVENT_PARMS \
	struct MSPythonBridge_eventGetUeData_Parms \
	{ \
		FString CommandName; \
	};


#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_CALLBACK_WRAPPERS
#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMSPythonBridge(); \
	friend struct Z_Construct_UClass_UMSPythonBridge_Statics; \
public: \
	DECLARE_CLASS(UMSPythonBridge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MegascansPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMSPythonBridge)


#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUMSPythonBridge(); \
	friend struct Z_Construct_UClass_UMSPythonBridge_Statics; \
public: \
	DECLARE_CLASS(UMSPythonBridge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MegascansPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMSPythonBridge)


#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMSPythonBridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMSPythonBridge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSPythonBridge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSPythonBridge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMSPythonBridge(UMSPythonBridge&&); \
	NO_API UMSPythonBridge(const UMSPythonBridge&); \
public:


#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMSPythonBridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMSPythonBridge(UMSPythonBridge&&); \
	NO_API UMSPythonBridge(const UMSPythonBridge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSPythonBridge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSPythonBridge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMSPythonBridge)


#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_PRIVATE_PROPERTY_OFFSET
#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_5_PROLOG \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_EVENT_PARMS


#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_PRIVATE_PROPERTY_OFFSET \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_SPARSE_DATA \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_RPC_WRAPPERS \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_CALLBACK_WRAPPERS \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_INCLASS \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_PRIVATE_PROPERTY_OFFSET \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_SPARSE_DATA \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_CALLBACK_WRAPPERS \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_INCLASS_NO_PURE_DECLS \
	FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEGASCANSPLUGIN_API UClass* StaticClass<class UMSPythonBridge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FiveNightAtFreddys_Plugins_MegascansPlugin_Source_MegascansPlugin_Private_MSPythonBridge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
