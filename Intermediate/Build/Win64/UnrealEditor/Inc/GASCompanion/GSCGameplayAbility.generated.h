// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayEventData;
struct FActiveGameplayEffectHandle;
struct FGSCGameplayEffectContainerSpec;
struct FGSCGameplayEffectContainer;
#ifdef GASCOMPANION_GSCGameplayAbility_generated_h
#error "GSCGameplayAbility.generated.h already included, missing '#pragma once' in GSCGameplayAbility.h"
#endif
#define GASCOMPANION_GSCGameplayAbility_generated_h

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_11_DELEGATE \
static inline void FOnAbilityEnded_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityEnded) \
{ \
	OnAbilityEnded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_SPARSE_DATA
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyEffectContainer); \
	DECLARE_FUNCTION(execApplyEffectContainerSpec); \
	DECLARE_FUNCTION(execMakeEffectContainerSpec); \
	DECLARE_FUNCTION(execMakeEffectContainerSpecFromContainer);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyEffectContainer); \
	DECLARE_FUNCTION(execApplyEffectContainerSpec); \
	DECLARE_FUNCTION(execMakeEffectContainerSpec); \
	DECLARE_FUNCTION(execMakeEffectContainerSpecFromContainer);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCGameplayAbility(); \
	friend struct Z_Construct_UClass_UGSCGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGSCGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCGameplayAbility)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUGSCGameplayAbility(); \
	friend struct Z_Construct_UClass_UGSCGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGSCGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCGameplayAbility)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCGameplayAbility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCGameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCGameplayAbility(UGSCGameplayAbility&&); \
	NO_API UGSCGameplayAbility(const UGSCGameplayAbility&); \
public:


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCGameplayAbility(UGSCGameplayAbility&&); \
	NO_API UGSCGameplayAbility(const UGSCGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCGameplayAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGSCGameplayAbility)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_25_PROLOG
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_RPC_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_INCLASS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
