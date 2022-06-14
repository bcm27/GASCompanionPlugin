// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanionEditor/Public/CreationMenu/GSCGameplayAbilityCreationMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCGameplayAbilityCreationMenu() {}
// Cross Module References
	GASCOMPANIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData();
	UPackage* Z_Construct_UPackage__Script_GASCompanionEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GASCOMPANIONEDITOR_API UClass* Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_NoRegister();
	GASCOMPANIONEDITOR_API UClass* Z_Construct_UClass_UGSCGameplayAbilityCreationMenu();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameplayAbilityCreationData;
class UScriptStruct* FGSCGameplayAbilityCreationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameplayAbilityCreationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameplayAbilityCreationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData, Z_Construct_UPackage__Script_GASCompanionEditor(), TEXT("GSCGameplayAbilityCreationData"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameplayAbilityCreationData.OuterSingleton;
}
template<> GASCOMPANIONEDITOR_API UScriptStruct* StaticStruct<FGSCGameplayAbilityCreationData>()
{
	return FGSCGameplayAbilityCreationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MenuPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPrefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TooltipText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TooltipText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayAbilityCreationMenu.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameplayAbilityCreationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_MenuPath_MetaData[] = {
		{ "Category", "Gameplay Ability" },
		{ "Comment", "/** Where to show this in the menu. Use \"|\" for sub categories. E.g, \"Ability|Skills|Ultimate\". */" },
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayAbilityCreationMenu.h" },
		{ "ToolTip", "Where to show this in the menu. Use \"|\" for sub categories. E.g, \"Ability|Skills|Ultimate\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_MenuPath = { "MenuPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameplayAbilityCreationData, MenuPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_MenuPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_MenuPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_BaseName_MetaData[] = {
		{ "Category", "Gameplay Ability" },
		{ "Comment", "/** The default BaseName of the new asset. E.g \"Damage\" -> GE_Damage or GE_HeroName_AbilityName_Damage */" },
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayAbilityCreationMenu.h" },
		{ "ToolTip", "The default BaseName of the new asset. E.g \"Damage\" -> GE_Damage or GE_HeroName_AbilityName_Damage" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameplayAbilityCreationData, BaseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_BaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_BaseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "Gameplay Ability" },
		{ "DisplayName", "Parent Gameplay Ability" },
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayAbilityCreationMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameplayAbilityCreationData, ParentClass), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_AssetPrefix_MetaData[] = {
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayAbilityCreationMenu.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_AssetPrefix = { "AssetPrefix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameplayAbilityCreationData, AssetPrefix), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_AssetPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_AssetPrefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_TooltipText_MetaData[] = {
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayAbilityCreationMenu.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_TooltipText = { "TooltipText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCGameplayAbilityCreationData, TooltipText), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_TooltipText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_TooltipText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_MenuPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_BaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_ParentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_AssetPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewProp_TooltipText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanionEditor,
		nullptr,
		&NewStructOps,
		"GSCGameplayAbilityCreationData",
		sizeof(FGSCGameplayAbilityCreationData),
		alignof(FGSCGameplayAbilityCreationData),
		Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameplayAbilityCreationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameplayAbilityCreationData.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameplayAbilityCreationData.InnerSingleton;
	}
	void UGSCGameplayAbilityCreationMenu::StaticRegisterNativesUGSCGameplayAbilityCreationMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCGameplayAbilityCreationMenu);
	UClass* Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_NoRegister()
	{
		return UGSCGameplayAbilityCreationMenu::StaticClass();
	}
	struct Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Definitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Definitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreationMenu/GSCGameplayAbilityCreationMenu.h" },
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayAbilityCreationMenu.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::NewProp_Definitions_Inner = { "Definitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData, METADATA_PARAMS(nullptr, 0) }; // 1901770510
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::NewProp_Definitions_MetaData[] = {
		{ "Category", "Gameplay Ability" },
		{ "ModuleRelativePath", "Public/CreationMenu/GSCGameplayAbilityCreationMenu.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::NewProp_Definitions = { "Definitions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCGameplayAbilityCreationMenu, Definitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::NewProp_Definitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::NewProp_Definitions_MetaData)) }; // 1901770510
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::NewProp_Definitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::NewProp_Definitions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCGameplayAbilityCreationMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::ClassParams = {
		&UGSCGameplayAbilityCreationMenu::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::PropPointers),
		0,
		0x001002A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCGameplayAbilityCreationMenu()
	{
		if (!Z_Registration_Info_UClass_UGSCGameplayAbilityCreationMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCGameplayAbilityCreationMenu.OuterSingleton, Z_Construct_UClass_UGSCGameplayAbilityCreationMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCGameplayAbilityCreationMenu.OuterSingleton;
	}
	template<> GASCOMPANIONEDITOR_API UClass* StaticClass<UGSCGameplayAbilityCreationMenu>()
	{
		return UGSCGameplayAbilityCreationMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCGameplayAbilityCreationMenu);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayAbilityCreationMenu_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayAbilityCreationMenu_h_Statics::ScriptStructInfo[] = {
		{ FGSCGameplayAbilityCreationData::StaticStruct, Z_Construct_UScriptStruct_FGSCGameplayAbilityCreationData_Statics::NewStructOps, TEXT("GSCGameplayAbilityCreationData"), &Z_Registration_Info_UScriptStruct_GSCGameplayAbilityCreationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameplayAbilityCreationData), 1901770510U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayAbilityCreationMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCGameplayAbilityCreationMenu, UGSCGameplayAbilityCreationMenu::StaticClass, TEXT("UGSCGameplayAbilityCreationMenu"), &Z_Registration_Info_UClass_UGSCGameplayAbilityCreationMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCGameplayAbilityCreationMenu), 3308072907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayAbilityCreationMenu_h_2437604164(TEXT("/Script/GASCompanionEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayAbilityCreationMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayAbilityCreationMenu_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayAbilityCreationMenu_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_CreationMenu_GSCGameplayAbilityCreationMenu_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
