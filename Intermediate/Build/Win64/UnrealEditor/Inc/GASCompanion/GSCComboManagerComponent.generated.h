// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGSCGameplayAbility;
#ifdef GASCOMPANION_GSCComboManagerComponent_generated_h
#error "GSCComboManagerComponent.generated.h already included, missing '#pragma once' in GSCComboManagerComponent.h"
#endif
#define GASCOMPANION_GSCComboManagerComponent_generated_h

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_SPARSE_DATA
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_RPC_WRAPPERS \
	virtual void MulticastSetComboIndex_Implementation(int32 InComboIndex); \
	virtual void ServerSetComboIndex_Implementation(int32 InComboIndex); \
	virtual void MulticastActivateComboAbility_Implementation(TSubclassOf<UGSCGameplayAbility>  AbilityClass, bool bAllowRemoteActivation); \
	virtual void ServerActivateComboAbility_Implementation(TSubclassOf<UGSCGameplayAbility>  AbilityClass, bool bAllowRemoteActivation); \
 \
	DECLARE_FUNCTION(execMulticastSetComboIndex); \
	DECLARE_FUNCTION(execServerSetComboIndex); \
	DECLARE_FUNCTION(execMulticastActivateComboAbility); \
	DECLARE_FUNCTION(execServerActivateComboAbility); \
	DECLARE_FUNCTION(execActivateComboAbility); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execIncrementCombo);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSetComboIndex_Implementation(int32 InComboIndex); \
	virtual void ServerSetComboIndex_Implementation(int32 InComboIndex); \
	virtual void MulticastActivateComboAbility_Implementation(TSubclassOf<UGSCGameplayAbility>  AbilityClass, bool bAllowRemoteActivation); \
	virtual void ServerActivateComboAbility_Implementation(TSubclassOf<UGSCGameplayAbility>  AbilityClass, bool bAllowRemoteActivation); \
 \
	DECLARE_FUNCTION(execMulticastSetComboIndex); \
	DECLARE_FUNCTION(execServerSetComboIndex); \
	DECLARE_FUNCTION(execMulticastActivateComboAbility); \
	DECLARE_FUNCTION(execServerActivateComboAbility); \
	DECLARE_FUNCTION(execActivateComboAbility); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execIncrementCombo);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_EVENT_PARMS \
	struct GSCComboManagerComponent_eventMulticastActivateComboAbility_Parms \
	{ \
		TSubclassOf<UGSCGameplayAbility>  AbilityClass; \
		bool bAllowRemoteActivation; \
	}; \
	struct GSCComboManagerComponent_eventMulticastSetComboIndex_Parms \
	{ \
		int32 InComboIndex; \
	}; \
	struct GSCComboManagerComponent_eventServerActivateComboAbility_Parms \
	{ \
		TSubclassOf<UGSCGameplayAbility>  AbilityClass; \
		bool bAllowRemoteActivation; \
	}; \
	struct GSCComboManagerComponent_eventServerSetComboIndex_Parms \
	{ \
		int32 InComboIndex; \
	};


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCComboManagerComponent(); \
	friend struct Z_Construct_UClass_UGSCComboManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCComboManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCComboManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ComboIndex=NETFIELD_REP_START, \
		bComboWindowOpened, \
		bShouldTriggerCombo, \
		bRequestTriggerCombo, \
		bNextComboAbilityActivated, \
		NETFIELD_REP_END=bNextComboAbilityActivated	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGSCComboManagerComponent(); \
	friend struct Z_Construct_UClass_UGSCComboManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCComboManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCComboManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ComboIndex=NETFIELD_REP_START, \
		bComboWindowOpened, \
		bShouldTriggerCombo, \
		bRequestTriggerCombo, \
		bNextComboAbilityActivated, \
		NETFIELD_REP_END=bNextComboAbilityActivated	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCComboManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCComboManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCComboManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCComboManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCComboManagerComponent(UGSCComboManagerComponent&&); \
	NO_API UGSCComboManagerComponent(const UGSCComboManagerComponent&); \
public:


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCComboManagerComponent(UGSCComboManagerComponent&&); \
	NO_API UGSCComboManagerComponent(const UGSCComboManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCComboManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCComboManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGSCComboManagerComponent)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_15_PROLOG \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_EVENT_PARMS


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_RPC_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_INCLASS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCComboManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
