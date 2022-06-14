// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Abilities/GSCAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAbilitySystemComponent() {}
// Cross Module References
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAbilityInputMapping();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GASCOMPANION_API UEnum* Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeSetDefinition();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCMappedAbility();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilitySystemComponent_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCComboManagerComponent_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping;
class UScriptStruct* FGSCAbilityInputMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAbilityInputMapping, Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCAbilityInputMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCAbilityInputMapping>()
{
	return FGSCAbilityInputMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAbilityInputMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Type of ability to grant */" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "Type of ability to grant" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAbilityInputMapping, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Input action to bind the ability to, if any (can be left unset) */" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "Input action to bind the ability to, if any (can be left unset)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAbilityInputMapping, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_InputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_InputAction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/**\n\x09 * The EnhancedInput Trigger Event type to use for the ability activation on pressed handle.\n\x09 *\n\x09 * ---\n\x09 *\n\x09 * The most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button,\n\x09 * and Triggered for continuous actions that happen every frame while holding an input\n\x09 *\n\x09 * Warning: The Triggered value should only be used for Input Actions that you know only trigger once. If your action\n\x09 * triggered event happens on every tick, this might lead to issues with ability activation (since you'll be\n\x09 * trying to activate abilities every frame). When in doubt, use the default Started value.\n\x09 */" },
		{ "EditCondition", "InputAction != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "The EnhancedInput Trigger Event type to use for the ability activation on pressed handle.\n\n---\n\nThe most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button,\nand Triggered for continuous actions that happen every frame while holding an input\n\nWarning: The Triggered value should only be used for Input Actions that you know only trigger once. If your action\ntriggered event happens on every tick, this might lead to issues with ability activation (since you'll be\ntrying to activate abilities every frame). When in doubt, use the default Started value." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAbilityInputMapping, TriggerEvent), Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent_MetaData)) }; // 3756966630
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewProp_TriggerEvent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCAbilityInputMapping",
		sizeof(FGSCAbilityInputMapping),
		alignof(FGSCAbilityInputMapping),
		Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAbilityInputMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping.InnerSingleton, Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition;
class UScriptStruct* FGSCAttributeSetDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition, Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCAttributeSetDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCAttributeSetDefinition>()
{
	return FGSCAttributeSetDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializationData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitializationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAttributeSetDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** Attribute Set to grant */" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "Attribute Set to grant" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeSetDefinition, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_InitializationData_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** Data table reference to initialize the attributes with, if any (can be left unset) */" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "RequiredAssetDataTags", "RowStructure=AttributeMetaData" },
		{ "ToolTip", "Data table reference to initialize the attributes with, if any (can be left unset)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_InitializationData = { "InitializationData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeSetDefinition, InitializationData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_InitializationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_InitializationData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewProp_InitializationData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCAttributeSetDefinition",
		sizeof(FGSCAttributeSetDefinition),
		alignof(FGSCAttributeSetDefinition),
		Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeSetDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition.InnerSingleton, Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCMappedAbility;
class UScriptStruct* FGSCMappedAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCMappedAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCMappedAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCMappedAbility, Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCMappedAbility"));
	}
	return Z_Registration_Info_UScriptStruct_GSCMappedAbility.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCMappedAbility>()
{
	return FGSCMappedAbility::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCMappedAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCMappedAbility>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewProp_InputAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCMappedAbility, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewProp_InputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewProp_InputAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewProp_InputAction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCMappedAbility",
		sizeof(FGSCMappedAbility),
		alignof(FGSCMappedAbility),
		Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCMappedAbility()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCMappedAbility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCMappedAbility.InnerSingleton, Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCMappedAbility.InnerSingleton;
	}
	DEFINE_FUNCTION(UGSCAbilitySystemComponent::execOnPawnControllerChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_OBJECT(AController,Z_Param_NewController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnControllerChanged(Z_Param_Pawn,Z_Param_NewController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCAbilitySystemComponent::execGrantAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_Ability);
		P_GET_UBOOL(Z_Param_bRemoveAfterActivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAbilitySpecHandle*)Z_Param__Result=P_THIS->GrantAbility(Z_Param_Ability,Z_Param_bRemoveAfterActivation);
		P_NATIVE_END;
	}
	void UGSCAbilitySystemComponent::StaticRegisterNativesUGSCAbilitySystemComponent()
	{
		UClass* Class = UGSCAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GrantAbility", &UGSCAbilitySystemComponent::execGrantAbility },
			{ "OnPawnControllerChanged", &UGSCAbilitySystemComponent::execOnPawnControllerChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics
	{
		struct GSCAbilitySystemComponent_eventGrantAbility_Parms
		{
			TSubclassOf<UGameplayAbility>  Ability;
			bool bRemoveAfterActivation;
			FGameplayAbilitySpecHandle ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
		static void NewProp_bRemoveAfterActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveAfterActivation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSCAbilitySystemComponent_eventGrantAbility_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_bRemoveAfterActivation_SetBit(void* Obj)
	{
		((GSCAbilitySystemComponent_eventGrantAbility_Parms*)Obj)->bRemoveAfterActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_bRemoveAfterActivation = { "bRemoveAfterActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GSCAbilitySystemComponent_eventGrantAbility_Parms), &Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_bRemoveAfterActivation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSCAbilitySystemComponent_eventGrantAbility_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) }; // 2663978299
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_bRemoveAfterActivation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion|Abilities" },
		{ "Comment", "//~ End UAbilitySystemComponent interface\n" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilitySystemComponent, nullptr, "GrantAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::GSCAbilitySystemComponent_eventGrantAbility_Parms), Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics
	{
		struct GSCAbilitySystemComponent_eventOnPawnControllerChanged_Parms
		{
			APawn* Pawn;
			AController* NewController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSCAbilitySystemComponent_eventOnPawnControllerChanged_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSCAbilitySystemComponent_eventOnPawnControllerChanged_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::NewProp_NewController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Reinit the cached ability actor info (specifically the player controller) */" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "Reinit the cached ability actor info (specifically the player controller)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCAbilitySystemComponent, nullptr, "OnPawnControllerChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::GSCAbilitySystemComponent_eventOnPawnControllerChanged_Parms), Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAbilitySystemComponent);
	UClass* Z_Construct_UClass_UGSCAbilitySystemComponent_NoRegister()
	{
		return UGSCAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FClassPropertyParams NewProp_GrantedEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetAbilitiesOnSpawn_MetaData[];
#endif
		static void NewProp_bResetAbilitiesOnSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAbilitiesOnSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetAttributesOnSpawn_MetaData[];
#endif
		static void NewProp_bResetAttributesOnSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAttributesOnSpawn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAbilityHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilityHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAbilityHandles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddedAttributes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddedEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddedEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCAbilitySystemComponent_GrantAbility, "GrantAbility" }, // 1881010698
		{ &Z_Construct_UFunction_UGSCAbilitySystemComponent_OnPawnControllerChanged, "OnPawnControllerChanged" }, // 3673123868
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GASCompanion" },
		{ "Comment", "/**\n * Revamped Ability System Component for 3.0.0\n *\n * This one is meant to be attached in Blueprint (or via a GameFeature), although 4.27 still requires ASC and IAbilitySystemInterface to be implemented in cpp.\n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Abilities/GSCAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "Revamped Ability System Component for 3.0.0\n\nThis one is meant to be attached in Blueprint (or via a GameFeature), although 4.27 still requires ASC and IAbilitySystemInterface to be implemented in cpp." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGSCAbilityInputMapping, METADATA_PARAMS(nullptr, 0) }; // 2255276341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
		{ "Comment", "/** List of Gameplay Abilities to grant when the Ability System Component is initialized */" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "List of Gameplay Abilities to grant when the Ability System Component is initialized" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities_MetaData)) }; // 2255276341
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGSCAttributeSetDefinition, METADATA_PARAMS(nullptr, 0) }; // 143464536
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
		{ "Comment", "/** List of Attribute Sets to grant when the Ability System Component is initialized, with optional initialization data */" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "List of Attribute Sets to grant when the Ability System Component is initialized, with optional initialization data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes_MetaData)) }; // 143464536
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects_Inner = { "GrantedEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
		{ "Comment", "/** List of GameplayEffects to apply when the Ability System Component is initialized (typically on begin play) */" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "List of GameplayEffects to apply when the Ability System Component is initialized (typically on begin play)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects = { "GrantedEffects", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, GrantedEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
		{ "Comment", "/**\n\x09 * Specifically set abilities to persist across deaths / respawns or possessions (Default is true)\n\x09 *\n\x09 * When this is set to false, abilities will only be granted the first time InitAbilityActor is called. This is the default\n\x09 * behavior for ASC living on Player States (GSCModularPlayerState specifically).\n\x09 *\n\x09 * Do not set it true for ASC living on Player States if you're using ability input binding. Only ASC living on Pawns supports this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "Specifically set abilities to persist across deaths / respawns or possessions (Default is true)\n\nWhen this is set to false, abilities will only be granted the first time InitAbilityActor is called. This is the default\nbehavior for ASC living on Player States (GSCModularPlayerState specifically).\n\nDo not set it true for ASC living on Player States if you're using ability input binding. Only ASC living on Pawns supports this." },
	};
#endif
	void Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn_SetBit(void* Obj)
	{
		((UGSCAbilitySystemComponent*)Obj)->bResetAbilitiesOnSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn = { "bResetAbilitiesOnSpawn", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGSCAbilitySystemComponent), &Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
		{ "Comment", "/**\n\x09 * Specifically set attributes to persist across deaths / respawns or possessions (Default is true)\n\x09 *\n\x09 * When this is set to false, attributes are only granted the first time InitAbilityActor is called. This is the default\n\x09 * behavior for ASC living on Player States (GSCModularPlayerState specifically).\n\x09 *\n\x09 * Set it (or leave it) to true if you want attribute values to be re-initialized to their default values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "Specifically set attributes to persist across deaths / respawns or possessions (Default is true)\n\nWhen this is set to false, attributes are only granted the first time InitAbilityActor is called. This is the default\nbehavior for ASC living on Player States (GSCModularPlayerState specifically).\n\nSet it (or leave it) to true if you want attribute values to be re-initialized to their default values." },
	};
#endif
	void Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn_SetBit(void* Obj)
	{
		((UGSCAbilitySystemComponent*)Obj)->bResetAttributesOnSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn = { "bResetAttributesOnSpawn", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGSCAbilitySystemComponent), &Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_DefaultAbilityHandles_Inner = { "DefaultAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGSCMappedAbility, METADATA_PARAMS(nullptr, 0) }; // 2915831120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_DefaultAbilityHandles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_DefaultAbilityHandles = { "DefaultAbilityHandles", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, DefaultAbilityHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_DefaultAbilityHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_DefaultAbilityHandles_MetaData)) }; // 2915831120
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes_Inner = { "AddedAttributes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes_MetaData[] = {
		{ "Comment", "// Cached granted AttributeSets\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "Cached granted AttributeSets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes = { "AddedAttributes", nullptr, (EPropertyFlags)0x0020088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, AddedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects_Inner = { "AddedEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 1296751506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects_MetaData[] = {
		{ "Comment", "// Cached applied Startup Effects\n" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "Cached applied Startup Effects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects = { "AddedEffects", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, AddedEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects_MetaData)) }; // 1296751506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_ComboComponent_MetaData[] = {
		{ "Comment", "// Cached ComboComponent on Character (if it has any)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySystemComponent.h" },
		{ "ToolTip", "Cached ComboComponent on Character (if it has any)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_ComboComponent = { "ComboComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCAbilitySystemComponent, ComboComponent), Z_Construct_UClass_UGSCComboManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_ComboComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_ComboComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_GrantedEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAbilitiesOnSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_bResetAttributesOnSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_DefaultAbilityHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_DefaultAbilityHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_AddedEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::NewProp_ComboComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::ClassParams = {
		&UGSCAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UGSCAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UGSCAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCAbilitySystemComponent.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCAbilitySystemComponent>()
	{
		return UGSCAbilitySystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAbilitySystemComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics::ScriptStructInfo[] = {
		{ FGSCAbilityInputMapping::StaticStruct, Z_Construct_UScriptStruct_FGSCAbilityInputMapping_Statics::NewStructOps, TEXT("GSCAbilityInputMapping"), &Z_Registration_Info_UScriptStruct_GSCAbilityInputMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAbilityInputMapping), 2255276341U) },
		{ FGSCAttributeSetDefinition::StaticStruct, Z_Construct_UScriptStruct_FGSCAttributeSetDefinition_Statics::NewStructOps, TEXT("GSCAttributeSetDefinition"), &Z_Registration_Info_UScriptStruct_GSCAttributeSetDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAttributeSetDefinition), 143464536U) },
		{ FGSCMappedAbility::StaticStruct, Z_Construct_UScriptStruct_FGSCMappedAbility_Statics::NewStructOps, TEXT("GSCMappedAbility"), &Z_Registration_Info_UScriptStruct_GSCMappedAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCMappedAbility), 2915831120U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAbilitySystemComponent, UGSCAbilitySystemComponent::StaticClass, TEXT("UGSCAbilitySystemComponent"), &Z_Registration_Info_UClass_UGSCAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAbilitySystemComponent), 3478501698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_2934659521(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySystemComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
