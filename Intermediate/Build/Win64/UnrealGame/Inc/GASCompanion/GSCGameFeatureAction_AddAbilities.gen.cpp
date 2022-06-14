// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCGameFeatureAction_AddAbilities() {}
// Cross Module References
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GASCOMPANION_API UEnum* Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping;
class UScriptStruct* FGSCGameFeatureAbilityMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping, Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCGameFeatureAbilityMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCGameFeatureAbilityMapping>()
{
	return FGSCGameFeatureAbilityMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AbilityType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameFeatureAbilityMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_AbilityType_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Type of ability to grant\n" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "Type of ability to grant" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameFeatureAbilityMapping, AbilityType), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_AbilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_AbilityType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Input action to bind the ability to, if any (can be left unset)\n" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "Input action to bind the ability to, if any (can be left unset)" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameFeatureAbilityMapping, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_InputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_InputAction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent_MetaData[] = {
		{ "Category", "Ability" },
		{ "EditCondition", "InputAction != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameFeatureAbilityMapping, TriggerEvent), Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent_MetaData)) }; // 3756966630
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_AbilityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCGameFeatureAbilityMapping",
		sizeof(FGSCGameFeatureAbilityMapping),
		alignof(FGSCGameFeatureAbilityMapping),
		Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping;
class UScriptStruct* FGSCGameFeatureAttributeSetMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping, Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCGameFeatureAttributeSetMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCGameFeatureAttributeSetMapping>()
{
	return FGSCGameFeatureAttributeSetMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializationData_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InitializationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameFeatureAttributeSetMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "// Attribute Set to grant\n" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "Attribute Set to grant" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameFeatureAttributeSetMapping, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_InitializationData_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "// Data table referent to initialize the attributes with, if any (can be left unset)\n" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "Data table referent to initialize the attributes with, if any (can be left unset)" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_InitializationData = { "InitializationData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameFeatureAttributeSetMapping, InitializationData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_InitializationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_InitializationData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_InitializationData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCGameFeatureAttributeSetMapping",
		sizeof(FGSCGameFeatureAttributeSetMapping),
		alignof(FGSCGameFeatureAttributeSetMapping),
		Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry;
class UScriptStruct* FGSCGameFeatureAbilitiesEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry, Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCGameFeatureAbilitiesEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCGameFeatureAbilitiesEntry>()
{
	return FGSCGameFeatureAbilitiesEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameFeatureAbilitiesEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "// The base actor class to add to\n" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "The base actor class to add to" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameFeatureAbilitiesEntry, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping, METADATA_PARAMS(nullptr, 0) }; // 3532417897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "// List of abilities to grant to actors of the specified class\n" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "List of abilities to grant to actors of the specified class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameFeatureAbilitiesEntry, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_MetaData)) }; // 3532417897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping, METADATA_PARAMS(nullptr, 0) }; // 115726368
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "// List of attribute sets to grant to actors of the specified class\n" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "List of attribute sets to grant to actors of the specified class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameFeatureAbilitiesEntry, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_MetaData)) }; // 115726368
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCGameFeatureAbilitiesEntry",
		sizeof(FGSCGameFeatureAbilitiesEntry),
		alignof(FGSCGameFeatureAbilitiesEntry),
		Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry.InnerSingleton;
	}
	void UGSCGameFeatureAction_AddAbilities::StaticRegisterNativesUGSCGameFeatureAction_AddAbilities()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCGameFeatureAction_AddAbilities);
	UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_NoRegister()
	{
		return UGSCGameFeatureAction_AddAbilities::StaticClass();
	}
	struct Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitiesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitiesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type.\n */" },
		{ "DisplayName", "Add Abilities (GAS Companion)" },
		{ "IncludePath", "GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_Inner = { "AbilitiesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry, METADATA_PARAMS(nullptr, 0) }; // 2235460593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** List of Ability to grant to actors of the specified class */" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "TitleProperty", "ActorClass" },
		{ "ToolTip", "List of Ability to grant to actors of the specified class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList = { "AbilitiesList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCGameFeatureAction_AddAbilities, AbilitiesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_MetaData)) }; // 2235460593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCGameFeatureAction_AddAbilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::ClassParams = {
		&UGSCGameFeatureAction_AddAbilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities()
	{
		if (!Z_Registration_Info_UClass_UGSCGameFeatureAction_AddAbilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCGameFeatureAction_AddAbilities.OuterSingleton, Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCGameFeatureAction_AddAbilities.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCGameFeatureAction_AddAbilities>()
	{
		return UGSCGameFeatureAction_AddAbilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCGameFeatureAction_AddAbilities);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo[] = {
		{ FGSCGameFeatureAbilityMapping::StaticStruct, Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewStructOps, TEXT("GSCGameFeatureAbilityMapping"), &Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameFeatureAbilityMapping), 3532417897U) },
		{ FGSCGameFeatureAttributeSetMapping::StaticStruct, Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewStructOps, TEXT("GSCGameFeatureAttributeSetMapping"), &Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameFeatureAttributeSetMapping), 115726368U) },
		{ FGSCGameFeatureAbilitiesEntry::StaticStruct, Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewStructOps, TEXT("GSCGameFeatureAbilitiesEntry"), &Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameFeatureAbilitiesEntry), 2235460593U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities, UGSCGameFeatureAction_AddAbilities::StaticClass, TEXT("UGSCGameFeatureAction_AddAbilities"), &Z_Registration_Info_UClass_UGSCGameFeatureAction_AddAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCGameFeatureAction_AddAbilities), 360152456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_2514812726(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
