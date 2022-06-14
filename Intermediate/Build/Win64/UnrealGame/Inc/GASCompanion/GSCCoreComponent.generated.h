// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
struct FGameplayAttribute;
class UGSCAttributeSetBase;
class AActor;
struct FGSCGameplayEffectExecuteData;
class UGameplayAbility;
struct FActiveGameplayEffectHandle;
struct FGameplayTag;
class UGSCGameplayAbility;
#ifdef GASCOMPANION_GSCCoreComponent_generated_h
#error "GSCCoreComponent.generated.h already included, missing '#pragma once' in GSCCoreComponent.h"
#endif
#define GASCOMPANION_GSCCoreComponent_generated_h

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics; \
	GASCOMPANION_API static class UScriptStruct* StaticStruct();


template<> GASCOMPANION_API UScriptStruct* StaticStruct<struct FGSCGameplayEffectExecuteData>();

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_43_DELEGATE \
static inline void FGSCOnDeath_DelegateWrapper(const FMulticastScriptDelegate& GSCOnDeath) \
{ \
	GSCOnDeath.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_44_DELEGATE \
struct _Script_GASCompanion_eventGSCOnDefaultAttributeChange_Parms \
{ \
	float DeltaValue; \
	FGameplayTagContainer EventTags; \
}; \
static inline void FGSCOnDefaultAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnDefaultAttributeChange, float DeltaValue, const FGameplayTagContainer EventTags) \
{ \
	_Script_GASCompanion_eventGSCOnDefaultAttributeChange_Parms Parms; \
	Parms.DeltaValue=DeltaValue; \
	Parms.EventTags=EventTags; \
	GSCOnDefaultAttributeChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_45_DELEGATE \
struct _Script_GASCompanion_eventGSCOnAttributeChange_Parms \
{ \
	FGameplayAttribute Attribute; \
	float DeltaValue; \
	FGameplayTagContainer EventTags; \
}; \
static inline void FGSCOnAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAttributeChange, FGameplayAttribute Attribute, float DeltaValue, const FGameplayTagContainer EventTags) \
{ \
	_Script_GASCompanion_eventGSCOnAttributeChange_Parms Parms; \
	Parms.Attribute=Attribute; \
	Parms.DeltaValue=DeltaValue; \
	Parms.EventTags=EventTags; \
	GSCOnAttributeChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_46_DELEGATE \
struct _Script_GASCompanion_eventGSCOnPreAttributeChange_Parms \
{ \
	UGSCAttributeSetBase* AttributeSet; \
	FGameplayAttribute Attribute; \
	float NewValue; \
}; \
static inline void FGSCOnPreAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnPreAttributeChange, UGSCAttributeSetBase* AttributeSet, FGameplayAttribute Attribute, float NewValue) \
{ \
	_Script_GASCompanion_eventGSCOnPreAttributeChange_Parms Parms; \
	Parms.AttributeSet=AttributeSet; \
	Parms.Attribute=Attribute; \
	Parms.NewValue=NewValue; \
	GSCOnPreAttributeChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_47_DELEGATE \
struct _Script_GASCompanion_eventGSCOnPostGameplayEffectExecute_Parms \
{ \
	FGameplayAttribute Attribute; \
	AActor* SourceActor; \
	AActor* TargetActor; \
	FGameplayTagContainer SourceTags; \
	FGSCGameplayEffectExecuteData Payload; \
}; \
static inline void FGSCOnPostGameplayEffectExecute_DelegateWrapper(const FMulticastScriptDelegate& GSCOnPostGameplayEffectExecute, FGameplayAttribute Attribute, AActor* SourceActor, AActor* TargetActor, FGameplayTagContainer const& SourceTags, const FGSCGameplayEffectExecuteData Payload) \
{ \
	_Script_GASCompanion_eventGSCOnPostGameplayEffectExecute_Parms Parms; \
	Parms.Attribute=Attribute; \
	Parms.SourceActor=SourceActor; \
	Parms.TargetActor=TargetActor; \
	Parms.SourceTags=SourceTags; \
	Parms.Payload=Payload; \
	GSCOnPostGameplayEffectExecute.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_48_DELEGATE \
struct _Script_GASCompanion_eventGSCOnAbilityActivated_Parms \
{ \
	const UGameplayAbility* Ability; \
}; \
static inline void FGSCOnAbilityActivated_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAbilityActivated, const UGameplayAbility* Ability) \
{ \
	_Script_GASCompanion_eventGSCOnAbilityActivated_Parms Parms; \
	Parms.Ability=Ability; \
	GSCOnAbilityActivated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_49_DELEGATE \
struct _Script_GASCompanion_eventGSCOnAbilityEnded_Parms \
{ \
	const UGameplayAbility* Ability; \
}; \
static inline void FGSCOnAbilityEnded_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAbilityEnded, const UGameplayAbility* Ability) \
{ \
	_Script_GASCompanion_eventGSCOnAbilityEnded_Parms Parms; \
	Parms.Ability=Ability; \
	GSCOnAbilityEnded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_50_DELEGATE \
struct _Script_GASCompanion_eventGSCOnAbilityFailed_Parms \
{ \
	const UGameplayAbility* Ability; \
	FGameplayTagContainer ReasonTags; \
}; \
static inline void FGSCOnAbilityFailed_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAbilityFailed, const UGameplayAbility* Ability, FGameplayTagContainer const& ReasonTags) \
{ \
	_Script_GASCompanion_eventGSCOnAbilityFailed_Parms Parms; \
	Parms.Ability=Ability; \
	Parms.ReasonTags=ReasonTags; \
	GSCOnAbilityFailed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_51_DELEGATE \
struct _Script_GASCompanion_eventGSCOnGameplayEffectStackChange_Parms \
{ \
	FGameplayTagContainer AssetTags; \
	FGameplayTagContainer GrantedTags; \
	FActiveGameplayEffectHandle ActiveHandle; \
	int32 NewStackCount; \
	int32 OldStackCount; \
}; \
static inline void FGSCOnGameplayEffectStackChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayEffectStackChange, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, int32 NewStackCount, int32 OldStackCount) \
{ \
	_Script_GASCompanion_eventGSCOnGameplayEffectStackChange_Parms Parms; \
	Parms.AssetTags=AssetTags; \
	Parms.GrantedTags=GrantedTags; \
	Parms.ActiveHandle=ActiveHandle; \
	Parms.NewStackCount=NewStackCount; \
	Parms.OldStackCount=OldStackCount; \
	GSCOnGameplayEffectStackChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_52_DELEGATE \
struct _Script_GASCompanion_eventGSCOnGameplayEffectAdded_Parms \
{ \
	FGameplayTagContainer AssetTags; \
	FGameplayTagContainer GrantedTags; \
	FActiveGameplayEffectHandle ActiveHandle; \
}; \
static inline void FGSCOnGameplayEffectAdded_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayEffectAdded, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle) \
{ \
	_Script_GASCompanion_eventGSCOnGameplayEffectAdded_Parms Parms; \
	Parms.AssetTags=AssetTags; \
	Parms.GrantedTags=GrantedTags; \
	Parms.ActiveHandle=ActiveHandle; \
	GSCOnGameplayEffectAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_53_DELEGATE \
struct _Script_GASCompanion_eventGSCOnGameplayEffectRemoved_Parms \
{ \
	FGameplayTagContainer AssetTags; \
	FGameplayTagContainer GrantedTags; \
	FActiveGameplayEffectHandle ActiveHandle; \
}; \
static inline void FGSCOnGameplayEffectRemoved_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayEffectRemoved, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle) \
{ \
	_Script_GASCompanion_eventGSCOnGameplayEffectRemoved_Parms Parms; \
	Parms.AssetTags=AssetTags; \
	Parms.GrantedTags=GrantedTags; \
	Parms.ActiveHandle=ActiveHandle; \
	GSCOnGameplayEffectRemoved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_54_DELEGATE \
struct _Script_GASCompanion_eventGSCOnGameplayTagStackChange_Parms \
{ \
	FGameplayTag GameplayTag; \
	int32 NewTagCount; \
}; \
static inline void FGSCOnGameplayTagStackChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayTagStackChange, FGameplayTag GameplayTag, int32 NewTagCount) \
{ \
	_Script_GASCompanion_eventGSCOnGameplayTagStackChange_Parms Parms; \
	Parms.GameplayTag=GameplayTag; \
	Parms.NewTagCount=NewTagCount; \
	GSCOnGameplayTagStackChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_55_DELEGATE \
struct _Script_GASCompanion_eventGSCOnAbilityCommit_Parms \
{ \
	UGameplayAbility* Ability; \
}; \
static inline void FGSCOnAbilityCommit_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAbilityCommit, UGameplayAbility* Ability) \
{ \
	_Script_GASCompanion_eventGSCOnAbilityCommit_Parms Parms; \
	Parms.Ability=Ability; \
	GSCOnAbilityCommit.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_56_DELEGATE \
struct _Script_GASCompanion_eventGSCOnCooldownChanged_Parms \
{ \
	UGameplayAbility* Ability; \
	FGameplayTagContainer CooldownTags; \
	float TimeRemaining; \
	float Duration; \
}; \
static inline void FGSCOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& GSCOnCooldownChanged, UGameplayAbility* Ability, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration) \
{ \
	_Script_GASCompanion_eventGSCOnCooldownChanged_Parms Parms; \
	Parms.Ability=Ability; \
	Parms.CooldownTags=CooldownTags; \
	Parms.TimeRemaining=TimeRemaining; \
	Parms.Duration=Duration; \
	GSCOnCooldownChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_57_DELEGATE \
struct _Script_GASCompanion_eventGSCOnCooldownEnd_Parms \
{ \
	UGameplayAbility* Ability; \
	FGameplayTag CooldownTag; \
	float Duration; \
}; \
static inline void FGSCOnCooldownEnd_DelegateWrapper(const FMulticastScriptDelegate& GSCOnCooldownEnd, UGameplayAbility* Ability, FGameplayTag CooldownTag, float Duration) \
{ \
	_Script_GASCompanion_eventGSCOnCooldownEnd_Parms Parms; \
	Parms.Ability=Ability; \
	Parms.CooldownTag=CooldownTag; \
	Parms.Duration=Duration; \
	GSCOnCooldownEnd.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_58_DELEGATE \
struct _Script_GASCompanion_eventGSCOnDamage_Parms \
{ \
	float DamageAmount; \
	AActor* SourceCharacter; \
	FGameplayTagContainer DamageTags; \
}; \
static inline void FGSCOnDamage_DelegateWrapper(const FMulticastScriptDelegate& GSCOnDamage, float DamageAmount, AActor* SourceCharacter, FGameplayTagContainer const& DamageTags) \
{ \
	_Script_GASCompanion_eventGSCOnDamage_Parms Parms; \
	Parms.DamageAmount=DamageAmount; \
	Parms.SourceCharacter=SourceCharacter; \
	Parms.DamageTags=DamageTags; \
	GSCOnDamage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_59_DELEGATE \
struct _Script_GASCompanion_eventGSCOnGameplayEffectTimeChange_Parms \
{ \
	FGameplayTagContainer AssetTags; \
	FGameplayTagContainer GrantedTags; \
	FActiveGameplayEffectHandle ActiveHandle; \
	float NewStartTime; \
	float NewDuration; \
}; \
static inline void FGSCOnGameplayEffectTimeChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayEffectTimeChange, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, float NewStartTime, float NewDuration) \
{ \
	_Script_GASCompanion_eventGSCOnGameplayEffectTimeChange_Parms Parms; \
	Parms.AssetTags=AssetTags; \
	Parms.GrantedTags=GrantedTags; \
	Parms.ActiveHandle=ActiveHandle; \
	Parms.NewStartTime=NewStartTime; \
	Parms.NewDuration=NewDuration; \
	GSCOnGameplayEffectTimeChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_SPARSE_DATA
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdjustAttributeForMaxChange); \
	DECLARE_FUNCTION(execClampAttributeValue); \
	DECLARE_FUNCTION(execSetAttributeValue); \
	DECLARE_FUNCTION(execActivateAbilityByTags); \
	DECLARE_FUNCTION(execActivateAbilityByClass); \
	DECLARE_FUNCTION(execGetActiveAbilitiesByTags); \
	DECLARE_FUNCTION(execGetActiveAbilitiesByClass); \
	DECLARE_FUNCTION(execIsUsingAbilityByTags); \
	DECLARE_FUNCTION(execIsUsingAbilityByClass); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execClearAbilities); \
	DECLARE_FUNCTION(execClearAbility); \
	DECLARE_FUNCTION(execGrantAbility); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetCurrentAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execDie);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdjustAttributeForMaxChange); \
	DECLARE_FUNCTION(execClampAttributeValue); \
	DECLARE_FUNCTION(execSetAttributeValue); \
	DECLARE_FUNCTION(execActivateAbilityByTags); \
	DECLARE_FUNCTION(execActivateAbilityByClass); \
	DECLARE_FUNCTION(execGetActiveAbilitiesByTags); \
	DECLARE_FUNCTION(execGetActiveAbilitiesByClass); \
	DECLARE_FUNCTION(execIsUsingAbilityByTags); \
	DECLARE_FUNCTION(execIsUsingAbilityByClass); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execClearAbilities); \
	DECLARE_FUNCTION(execClearAbility); \
	DECLARE_FUNCTION(execGrantAbility); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetCurrentAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execDie);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCCoreComponent(); \
	friend struct Z_Construct_UClass_UGSCCoreComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCCoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCCoreComponent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUGSCCoreComponent(); \
	friend struct Z_Construct_UClass_UGSCCoreComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCCoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCCoreComponent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCCoreComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCCoreComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCCoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCCoreComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCCoreComponent(UGSCCoreComponent&&); \
	NO_API UGSCCoreComponent(const UGSCCoreComponent&); \
public:


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCCoreComponent(UGSCCoreComponent&&); \
	NO_API UGSCCoreComponent(const UGSCCoreComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCCoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCCoreComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGSCCoreComponent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_68_PROLOG
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_RPC_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_INCLASS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCCoreComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
