// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayEventData;
struct FHitResult;
#ifdef GASCOMPANION_GSCTargetType_generated_h
#error "GSCTargetType.generated.h already included, missing '#pragma once' in GSCTargetType.h"
#endif
#define GASCOMPANION_GSCTargetType_generated_h

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_SPARSE_DATA
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_RPC_WRAPPERS \
	virtual void GetTargets_Implementation(AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const; \
 \
	DECLARE_FUNCTION(execGetTargets);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetTargets_Implementation(AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const; \
 \
	DECLARE_FUNCTION(execGetTargets);


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_EVENT_PARMS \
	struct GSCTargetType_eventGetTargets_Parms \
	{ \
		AActor* TargetingActor; \
		FGameplayEventData EventData; \
		TArray<FHitResult> OutHitResults; \
		TArray<AActor*> OutActors; \
	};


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCTargetType(); \
	friend struct Z_Construct_UClass_UGSCTargetType_Statics; \
public: \
	DECLARE_CLASS(UGSCTargetType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCTargetType)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUGSCTargetType(); \
	friend struct Z_Construct_UClass_UGSCTargetType_Statics; \
public: \
	DECLARE_CLASS(UGSCTargetType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCTargetType)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCTargetType(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCTargetType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCTargetType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCTargetType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCTargetType(UGSCTargetType&&); \
	NO_API UGSCTargetType(const UGSCTargetType&); \
public:


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCTargetType(UGSCTargetType&&); \
	NO_API UGSCTargetType(const UGSCTargetType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCTargetType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCTargetType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGSCTargetType)


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_19_PROLOG \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_EVENT_PARMS


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_RPC_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_INCLASS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_SPARSE_DATA \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCTargetType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
