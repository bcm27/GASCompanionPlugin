// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanionEditor/Public/Core/Common/GSCAttributesGenSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAttributesGenSettings() {}
// Cross Module References
	GASCOMPANIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeDefinition();
	UPackage* Z_Construct_UPackage__Script_GASCompanionEditor();
	GASCOMPANIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributesSettings();
	GASCOMPANIONEDITOR_API UClass* Z_Construct_UClass_UGSCAttributesGenSettings_NoRegister();
	GASCOMPANIONEDITOR_API UClass* Z_Construct_UClass_UGSCAttributesGenSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAttributeDefinition;
class UScriptStruct* FGSCAttributeDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAttributeDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAttributeDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAttributeDefinition, Z_Construct_UPackage__Script_GASCompanionEditor(), TEXT("GSCAttributeDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAttributeDefinition.OuterSingleton;
}
template<> GASCOMPANIONEDITOR_API UScriptStruct* StaticStruct<FGSCAttributeDefinition>()
{
	return FGSCAttributeDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicated_MetaData[];
#endif
		static void NewProp_bReplicated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAttributeDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** The GameplayAttribute name you want to generate */" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ToolTip", "The GameplayAttribute name you want to generate" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeDefinition, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** The default value for this attribute before getting initialized by a GameplayEffect */" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ToolTip", "The default value for this attribute before getting initialized by a GameplayEffect" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeDefinition, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** The UPROPERTY Category specifier for this attribute */" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ToolTip", "The UPROPERTY Category specifier for this attribute" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributeDefinition, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** GameplayAttributes are replicated by default, works for Single Player and Multiplayer */" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ToolTip", "GameplayAttributes are replicated by default, works for Single Player and Multiplayer" },
	};
#endif
	void Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated_SetBit(void* Obj)
	{
		((FGSCAttributeDefinition*)Obj)->bReplicated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated = { "bReplicated", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSCAttributeDefinition), &Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewProp_bReplicated,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanionEditor,
		nullptr,
		&NewStructOps,
		"GSCAttributeDefinition",
		sizeof(FGSCAttributeDefinition),
		alignof(FGSCAttributeDefinition),
		Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributeDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCAttributeDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAttributeDefinition.InnerSingleton, Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCAttributeDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAttributesSettings;
class UScriptStruct* FGSCAttributesSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAttributesSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAttributesSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAttributesSettings, Z_Construct_UPackage__Script_GASCompanionEditor(), TEXT("GSCAttributesSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAttributesSettings.OuterSingleton;
}
template<> GASCOMPANIONEDITOR_API UScriptStruct* StaticStruct<FGSCAttributesSettings>()
{
	return FGSCAttributesSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAttributesSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGSCAttributeDefinition, METADATA_PARAMS(nullptr, 0) }; // 3770707839
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** Define here any number of GameplayAttributes you want to generate (at least one) */" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ToolTip", "Define here any number of GameplayAttributes you want to generate (at least one)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAttributesSettings, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes_MetaData)) }; // 3770707839
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewProp_Attributes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanionEditor,
		nullptr,
		&NewStructOps,
		"GSCAttributesSettings",
		sizeof(FGSCAttributesSettings),
		alignof(FGSCAttributesSettings),
		Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAttributesSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCAttributesSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAttributesSettings.InnerSingleton, Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCAttributesSettings.InnerSingleton;
	}
	void UGSCAttributesGenSettings::StaticRegisterNativesUGSCAttributesGenSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAttributesGenSettings);
	UClass* Z_Construct_UClass_UGSCAttributesGenSettings_NoRegister()
	{
		return UGSCAttributesGenSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAttributesGenSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAttributesGenSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAttributesGenSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Core/Common/GSCAttributesGenSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAttributesGenSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "GASCompanion Attributes Generation" },
		{ "ModuleRelativePath", "Public/Core/Common/GSCAttributesGenSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAttributesGenSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCAttributesGenSettings, Settings), Z_Construct_UScriptStruct_FGSCAttributesSettings, METADATA_PARAMS(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::NewProp_Settings_MetaData)) }; // 1535624970
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCAttributesGenSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAttributesGenSettings_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAttributesGenSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAttributesGenSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAttributesGenSettings_Statics::ClassParams = {
		&UGSCAttributesGenSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCAttributesGenSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAttributesGenSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCAttributesGenSettings()
	{
		if (!Z_Registration_Info_UClass_UGSCAttributesGenSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAttributesGenSettings.OuterSingleton, Z_Construct_UClass_UGSCAttributesGenSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCAttributesGenSettings.OuterSingleton;
	}
	template<> GASCOMPANIONEDITOR_API UClass* StaticClass<UGSCAttributesGenSettings>()
	{
		return UGSCAttributesGenSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAttributesGenSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Core_Common_GSCAttributesGenSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Core_Common_GSCAttributesGenSettings_h_Statics::ScriptStructInfo[] = {
		{ FGSCAttributeDefinition::StaticStruct, Z_Construct_UScriptStruct_FGSCAttributeDefinition_Statics::NewStructOps, TEXT("GSCAttributeDefinition"), &Z_Registration_Info_UScriptStruct_GSCAttributeDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAttributeDefinition), 3770707839U) },
		{ FGSCAttributesSettings::StaticStruct, Z_Construct_UScriptStruct_FGSCAttributesSettings_Statics::NewStructOps, TEXT("GSCAttributesSettings"), &Z_Registration_Info_UScriptStruct_GSCAttributesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAttributesSettings), 1535624970U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Core_Common_GSCAttributesGenSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAttributesGenSettings, UGSCAttributesGenSettings::StaticClass, TEXT("UGSCAttributesGenSettings"), &Z_Registration_Info_UClass_UGSCAttributesGenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAttributesGenSettings), 4096769827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Core_Common_GSCAttributesGenSettings_h_312547699(TEXT("/Script/GASCompanionEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Core_Common_GSCAttributesGenSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Core_Common_GSCAttributesGenSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Core_Common_GSCAttributesGenSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Core_Common_GSCAttributesGenSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
