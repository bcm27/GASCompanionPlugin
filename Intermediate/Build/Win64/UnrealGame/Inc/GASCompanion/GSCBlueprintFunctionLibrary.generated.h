// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayTag;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
struct FGameplayAttribute;
class UAttributeSet;
struct FGameplayTagContainer;
class UGSCAbilityInputBindingComponent;
class UGSCAbilityQueueComponent;
class UGSCCoreComponent;
class UGSCComboManagerComponent;
#ifdef GASCOMPANION_GSCBlueprintFunctionLibrary_generated_h
#error "GSCBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in GSCBlueprintFunctionLibrary.h"
#endif
#define GASCOMPANION_GSCBlueprintFunctionLibrary_generated_h

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_SPARSE_DATA
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveAllGameplayCues); \
	DECLARE_FUNCTION(execRemoveGameplayCue); \
	DECLARE_FUNCTION(execAddGameplayCueWithParams); \
	DECLARE_FUNCTION(execAddGameplayCue); \
	DECLARE_FUNCTION(execExecuteGameplayCueWithParams); \
	DECLARE_FUNCTION(execExecuteGameplayCueForActor); \
	DECLARE_FUNCTION(execNotEqual_GameplayAttributeGameplayAttribute); \
	DECLARE_FUNCTION(execGetAllAttributes); \
	DECLARE_FUNCTION(execGetDebugStringFromAttribute); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTag); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTagsFromActor); \
	DECLARE_FUNCTION(execAddLooseGameplayTagsToActor); \
	DECLARE_FUNCTION(execGetAbilityInputBindingComponent); \
	DECLARE_FUNCTION(execGetAbilityQueueComponent); \
	DECLARE_FUNCTION(execGetCompanionCoreComponent); \
	DECLARE_FUNCTION(execGetComboManagerComponent);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveAllGameplayCues); \
	DECLARE_FUNCTION(execRemoveGameplayCue); \
	DECLARE_FUNCTION(execAddGameplayCueWithParams); \
	DECLARE_FUNCTION(execAddGameplayCue); \
	DECLARE_FUNCTION(execExecuteGameplayCueWithParams); \
	DECLARE_FUNCTION(execExecuteGameplayCueForActor); \
	DECLARE_FUNCTION(execNotEqual_GameplayAttributeGameplayAttribute); \
	DECLARE_FUNCTION(execGetAllAttributes); \
	DECLARE_FUNCTION(execGetDebugStringFromAttribute); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTag); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTagsFromActor); \
	DECLARE_FUNCTION(execAddLooseGameplayTagsToActor); \
	DECLARE_FUNCTION(execGetAbilityInputBindingComponent); \
	DECLARE_FUNCTION(execGetAbilityQueueComponent); \
	DECLARE_FUNCTION(execGetCompanionCoreComponent); \
	DECLARE_FUNCTION(execGetComboManagerComponent);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGSCBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGSCBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCBlueprintFunctionLibrary)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUGSCBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGSCBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGSCBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCBlueprintFunctionLibrary)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCBlueprintFunctionLibrary(UGSCBlueprintFunctionLibrary&&); \
	NO_API UGSCBlueprintFunctionLibrary(const UGSCBlueprintFunctionLibrary&); \
public:


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCBlueprintFunctionLibrary(UGSCBlueprintFunctionLibrary&&); \
	NO_API UGSCBlueprintFunctionLibrary(const UGSCBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCBlueprintFunctionLibrary)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_20_PROLOG
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_RPC_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_INCLASS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
