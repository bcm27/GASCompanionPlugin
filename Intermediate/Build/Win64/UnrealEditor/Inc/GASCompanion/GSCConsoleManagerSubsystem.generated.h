// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASCOMPANION_GSCConsoleManagerSubsystem_generated_h
#error "GSCConsoleManagerSubsystem.generated.h already included, missing '#pragma once' in GSCConsoleManagerSubsystem.h"
#endif
#define GASCOMPANION_GSCConsoleManagerSubsystem_generated_h

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_SPARSE_DATA
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleAbilityQueueDebugWidget); \
	DECLARE_FUNCTION(execToggleComboDebugWidget);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleAbilityQueueDebugWidget); \
	DECLARE_FUNCTION(execToggleComboDebugWidget);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCConsoleManagerSubsystem(); \
	friend struct Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGSCConsoleManagerSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCConsoleManagerSubsystem)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGSCConsoleManagerSubsystem(); \
	friend struct Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGSCConsoleManagerSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCConsoleManagerSubsystem)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCConsoleManagerSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCConsoleManagerSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCConsoleManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCConsoleManagerSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCConsoleManagerSubsystem(UGSCConsoleManagerSubsystem&&); \
	NO_API UGSCConsoleManagerSubsystem(const UGSCConsoleManagerSubsystem&); \
public:


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCConsoleManagerSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCConsoleManagerSubsystem(UGSCConsoleManagerSubsystem&&); \
	NO_API UGSCConsoleManagerSubsystem(const UGSCConsoleManagerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCConsoleManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCConsoleManagerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGSCConsoleManagerSubsystem)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_13_PROLOG
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_RPC_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_INCLASS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCConsoleManagerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
