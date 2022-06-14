// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AController;
class UEnhancedInputComponent;
#ifdef GASCOMPANION_GSCPlayerControlsComponent_generated_h
#error "GSCPlayerControlsComponent.generated.h already included, missing '#pragma once' in GSCPlayerControlsComponent.h"
#endif
#define GASCOMPANION_GSCPlayerControlsComponent_generated_h

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_SPARSE_DATA
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_RPC_WRAPPERS \
	virtual void TeardownPlayerControls_Implementation(UEnhancedInputComponent* PlayerInputComponent); \
	virtual void SetupPlayerControls_Implementation(UEnhancedInputComponent* PlayerInputComponent); \
 \
	DECLARE_FUNCTION(execOnControllerChanged); \
	DECLARE_FUNCTION(execOnPawnRestarted); \
	DECLARE_FUNCTION(execTeardownPlayerControls); \
	DECLARE_FUNCTION(execSetupPlayerControls);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TeardownPlayerControls_Implementation(UEnhancedInputComponent* PlayerInputComponent); \
	virtual void SetupPlayerControls_Implementation(UEnhancedInputComponent* PlayerInputComponent); \
 \
	DECLARE_FUNCTION(execOnControllerChanged); \
	DECLARE_FUNCTION(execOnPawnRestarted); \
	DECLARE_FUNCTION(execTeardownPlayerControls); \
	DECLARE_FUNCTION(execSetupPlayerControls);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_EVENT_PARMS \
	struct GSCPlayerControlsComponent_eventSetupPlayerControls_Parms \
	{ \
		UEnhancedInputComponent* PlayerInputComponent; \
	}; \
	struct GSCPlayerControlsComponent_eventTeardownPlayerControls_Parms \
	{ \
		UEnhancedInputComponent* PlayerInputComponent; \
	};


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCPlayerControlsComponent(); \
	friend struct Z_Construct_UClass_UGSCPlayerControlsComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCPlayerControlsComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCPlayerControlsComponent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUGSCPlayerControlsComponent(); \
	friend struct Z_Construct_UClass_UGSCPlayerControlsComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCPlayerControlsComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCPlayerControlsComponent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCPlayerControlsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCPlayerControlsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCPlayerControlsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCPlayerControlsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCPlayerControlsComponent(UGSCPlayerControlsComponent&&); \
	NO_API UGSCPlayerControlsComponent(const UGSCPlayerControlsComponent&); \
public:


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCPlayerControlsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCPlayerControlsComponent(UGSCPlayerControlsComponent&&); \
	NO_API UGSCPlayerControlsComponent(const UGSCPlayerControlsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCPlayerControlsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCPlayerControlsComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCPlayerControlsComponent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_23_PROLOG \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_EVENT_PARMS


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_RPC_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_INCLASS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCPlayerControlsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCPlayerControlsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
