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
class UGameplayAbility;
class UAnimMontage;
struct FGameplayTagContainer;
class UGSCTask_PlayMontageWaitForEvent;
#ifdef GASCOMPANION_GSCTask_PlayMontageWaitForEvent_generated_h
#error "GSCTask_PlayMontageWaitForEvent.generated.h already included, missing '#pragma once' in GSCTask_PlayMontageWaitForEvent.h"
#endif
#define GASCOMPANION_GSCTask_PlayMontageWaitForEvent_generated_h

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_11_DELEGATE \
struct _Script_GASCompanion_eventGSCPlayMontageAndWaitForEventDelegate_Parms \
{ \
	FGameplayTag EventTag; \
	FGameplayEventData EventData; \
}; \
static inline void FGSCPlayMontageAndWaitForEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& GSCPlayMontageAndWaitForEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData) \
{ \
	_Script_GASCompanion_eventGSCPlayMontageAndWaitForEventDelegate_Parms Parms; \
	Parms.EventTag=EventTag; \
	Parms.EventData=EventData; \
	GSCPlayMontageAndWaitForEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_SPARSE_DATA
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayMontageAndWaitForEvent); \
	DECLARE_FUNCTION(execUnbindAllDelegate);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayMontageAndWaitForEvent); \
	DECLARE_FUNCTION(execUnbindAllDelegate);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCTask_PlayMontageWaitForEvent(); \
	friend struct Z_Construct_UClass_UGSCTask_PlayMontageWaitForEvent_Statics; \
public: \
	DECLARE_CLASS(UGSCTask_PlayMontageWaitForEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCTask_PlayMontageWaitForEvent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUGSCTask_PlayMontageWaitForEvent(); \
	friend struct Z_Construct_UClass_UGSCTask_PlayMontageWaitForEvent_Statics; \
public: \
	DECLARE_CLASS(UGSCTask_PlayMontageWaitForEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCTask_PlayMontageWaitForEvent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCTask_PlayMontageWaitForEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCTask_PlayMontageWaitForEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCTask_PlayMontageWaitForEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCTask_PlayMontageWaitForEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCTask_PlayMontageWaitForEvent(UGSCTask_PlayMontageWaitForEvent&&); \
	NO_API UGSCTask_PlayMontageWaitForEvent(const UGSCTask_PlayMontageWaitForEvent&); \
public:


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCTask_PlayMontageWaitForEvent(UGSCTask_PlayMontageWaitForEvent&&); \
	NO_API UGSCTask_PlayMontageWaitForEvent(const UGSCTask_PlayMontageWaitForEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCTask_PlayMontageWaitForEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCTask_PlayMontageWaitForEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCTask_PlayMontageWaitForEvent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_23_PROLOG
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_RPC_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_INCLASS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCTask_PlayMontageWaitForEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_Tasks_GSCTask_PlayMontageWaitForEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
