// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Core/Settings/GSCDeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCDeveloperSettings() {}
// Cross Module References
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCDeveloperSettings_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCDeveloperSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAttributeSetMinimumValues;
class UScriptStruct* FGSCAttributeSetMinimumValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAttributeSetMinimumValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAttributeSetMinimumValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues, Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCAttributeSetMinimumValues"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAttributeSetMinimumValues.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCAttributeSetMinimumValues>()
{
	return FGSCAttributeSetMinimumValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Attribute Set Settings\n */" },
		{ "ModuleRelativePath", "Public/Core/Settings/GSCDeveloperSettings.h" },
		{ "ToolTip", "Attribute Set Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAttributeSetMinimumValues>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "Comment", "/** The Attribute we want to configure clamp values for. */" },
		{ "FilterMetaTag", "HideFromModifiers" },
		{ "ModuleRelativePath", "Public/Core/Settings/GSCDeveloperSettings.h" },
		{ "ToolTip", "The Attribute we want to configure clamp values for." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeSetMinimumValues, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::NewProp_Attribute_MetaData)) }; // 3284257039
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::NewProp_MinimumValue_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/** Minimum value for this attribute when a Clamp is done in PostGameplayEffectExecute of Attribute Sets */" },
		{ "ModuleRelativePath", "Public/Core/Settings/GSCDeveloperSettings.h" },
		{ "ToolTip", "Minimum value for this attribute when a Clamp is done in PostGameplayEffectExecute of Attribute Sets" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeSetMinimumValues, MinimumValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::NewProp_MinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::NewProp_MinimumValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::NewProp_MinimumValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCAttributeSetMinimumValues",
		sizeof(FGSCAttributeSetMinimumValues),
		alignof(FGSCAttributeSetMinimumValues),
		Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCAttributeSetMinimumValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAttributeSetMinimumValues.InnerSingleton, Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCAttributeSetMinimumValues.InnerSingleton;
	}
	void UGSCDeveloperSettings::StaticRegisterNativesUGSCDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCDeveloperSettings);
	UClass* Z_Construct_UClass_UGSCDeveloperSettings_NoRegister()
	{
		return UGSCDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGSCDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreventGlobalDataInitialization_MetaData[];
#endif
		static void NewProp_bPreventGlobalDataInitialization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventGlobalDataInitialization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * General Settings for GAS Companion Plugin.\n */" },
		{ "DisplayName", "GAS Companion" },
		{ "IncludePath", "Core/Settings/GSCDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Settings/GSCDeveloperSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "General Settings for GAS Companion Plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization_MetaData[] = {
		{ "Category", "Ability System" },
		{ "Comment", "/**\n\x09 * Turn this on to prevent GAS Companion module to initialize UAbilitySystemGlobals (InitGlobalData) in the plugin StartupModule method.\n\x09 *\n\x09 * InitGlobalData() might be invoked a bit too early otherwise (with GAS Companion's StartupModule). It is expected that if you set this option to true to use\n\x09 * an AssetManager subclass where `UAbilitySystemGlobals::Get().InitGlobalData()` is called in `StartInitialLoading``\n\x09 *\n\x09 * You'll need to update `Project Settings -> Engine > General Settings > Asset Manager Class` to use your AssetManager subclass.\n\x09 *\n\x09 * GAS Companion provides one `GSCAssetManager` and the editor should ask you if you want to update the `Asset Manager Class` to use it if the current Manager class\n\x09 * is using engine's default one.\n\x09 */" },
		{ "DisplayName", "Prevent Ability System Global Data Initialization in Startup Module (Recommended)" },
		{ "ModuleRelativePath", "Public/Core/Settings/GSCDeveloperSettings.h" },
		{ "ToolTip", "Turn this on to prevent GAS Companion module to initialize UAbilitySystemGlobals (InitGlobalData) in the plugin StartupModule method.\n\nInitGlobalData() might be invoked a bit too early otherwise (with GAS Companion's StartupModule). It is expected that if you set this option to true to use\nan AssetManager subclass where `UAbilitySystemGlobals::Get().InitGlobalData()` is called in `StartInitialLoading``\n\nYou'll need to update `Project Settings -> Engine > General Settings > Asset Manager Class` to use your AssetManager subclass.\n\nGAS Companion provides one `GSCAssetManager` and the editor should ask you if you want to update the `Asset Manager Class` to use it if the current Manager class\nis using engine's default one." },
	};
#endif
	void Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization_SetBit(void* Obj)
	{
		((UGSCDeveloperSettings*)Obj)->bPreventGlobalDataInitialization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization = { "bPreventGlobalDataInitialization", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGSCDeveloperSettings), &Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCDeveloperSettings_Statics::ClassParams = {
		&UGSCDeveloperSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCDeveloperSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGSCDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_UGSCDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCDeveloperSettings.OuterSingleton, Z_Construct_UClass_UGSCDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCDeveloperSettings.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCDeveloperSettings>()
	{
		return UGSCDeveloperSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCDeveloperSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_Statics::ScriptStructInfo[] = {
		{ FGSCAttributeSetMinimumValues::StaticStruct, Z_Construct_UScriptStruct_FGSCAttributeSetMinimumValues_Statics::NewStructOps, TEXT("GSCAttributeSetMinimumValues"), &Z_Registration_Info_UScriptStruct_GSCAttributeSetMinimumValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAttributeSetMinimumValues), 3367940114U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCDeveloperSettings, UGSCDeveloperSettings::StaticClass, TEXT("UGSCDeveloperSettings"), &Z_Registration_Info_UClass_UGSCDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCDeveloperSettings), 3826943401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_4028185519(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
