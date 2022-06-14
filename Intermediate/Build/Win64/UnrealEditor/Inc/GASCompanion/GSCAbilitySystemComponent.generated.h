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
class UGameplayAbility;
struct FGameplayAbilitySpecHandle;
#ifdef GASCOMPANION_GSCAbilitySystemComponent_generated_h
#error "GSCAbilitySystemComponent.generated.h already included, missing '#pragma once' in GSCAbilitySystemComponent.h"
#endif
#define GASCOMPANION_GSCAbilitySystemComponent_generated_h

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics; \
	GASCOMPANION_API static class UScriptStruct* StaticStruct();


template<> GASCOMPANION_API UScriptStruct* StaticStruct<struct FGSCAbilityInputMapping>();

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics; \
	GASCOMPANION_API static class UScriptStruct* StaticStruct();


template<> GASCOMPANION_API UScriptStruct* StaticStruct<struct FGSCAttributeSetDefinition>();

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSCMappedAbility_Statics; \
	GASCOMPANION_API static class UScriptStruct* StaticStruct();


template<> GASCOMPANION_API UScriptStruct* StaticStruct<struct FGSCMappedAbility>();

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_SPARSE_DATA
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnControllerChanged); \
	DECLARE_FUNCTION(execGrantAbility);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnControllerChanged); \
	DECLARE_FUNCTION(execGrantAbility);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UGSCAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCAbilitySystemComponent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUGSCAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UGSCAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCAbilitySystemComponent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCAbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCAbilitySystemComponent(UGSCAbilitySystemComponent&&); \
	NO_API UGSCAbilitySystemComponent(const UGSCAbilitySystemComponent&); \
public:


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCAbilitySystemComponent(UGSCAbilitySystemComponent&&); \
	NO_API UGSCAbilitySystemComponent(const UGSCAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCAbilitySystemComponent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_87_PROLOG
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_RPC_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_INCLASS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
