// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Templates/GSCDeprecatedGameplayEffectTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCDeprecatedGameplayEffectTemplate() {}
// Cross Module References
	GASCOMPANION_API UClass* Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UDEPRECATED_GSCDeprecatedGameplayEffectTemplate::StaticRegisterNativesUDEPRECATED_GSCDeprecatedGameplayEffectTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_GSCDeprecatedGameplayEffectTemplate);
	UClass* Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate_NoRegister()
	{
		return UDEPRECATED_GSCDeprecatedGameplayEffectTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class is introduced just to handle deprecation of various Gameplay Effect Template that\n * were used in GAS Companion to generate Context Menu Gameplay Effects (defined in Project Settings)\n *\n * Those template Blueprints are not meant to be used directly, and GE Blueprints created via Context Menu before\n * were child of it. Creation Menu has been reworked to instead create a direct child of UGameplayEffect\n * (not the BP template) by copying over Class Default Object properties in the newly created Blueprint, from\n * the Template Blueprint.\n *\n * Distinction between GE Template Blueprint and real GE Blueprints is important to make to hide templates in various dropdown\n * (Subclass of GameplayEffect properties, or nodes like ApplyGameplayEffect) and not clutter project with all pre-defined templates.\n */" },
		{ "IncludePath", "Templates/GSCDeprecatedGameplayEffectTemplate.h" },
		{ "ModuleRelativePath", "Public/Templates/GSCDeprecatedGameplayEffectTemplate.h" },
		{ "ToolTip", "This class is introduced just to handle deprecation of various Gameplay Effect Template that\nwere used in GAS Companion to generate Context Menu Gameplay Effects (defined in Project Settings)\n\nThose template Blueprints are not meant to be used directly, and GE Blueprints created via Context Menu before\nwere child of it. Creation Menu has been reworked to instead create a direct child of UGameplayEffect\n(not the BP template) by copying over Class Default Object properties in the newly created Blueprint, from\nthe Template Blueprint.\n\nDistinction between GE Template Blueprint and real GE Blueprints is important to make to hide templates in various dropdown\n(Subclass of GameplayEffect properties, or nodes like ApplyGameplayEffect) and not clutter project with all pre-defined templates." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GSCDeprecatedGameplayEffectTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate_Statics::ClassParams = {
		&UDEPRECATED_GSCDeprecatedGameplayEffectTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x028002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate.OuterSingleton, Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UDEPRECATED_GSCDeprecatedGameplayEffectTemplate>()
	{
		return UDEPRECATED_GSCDeprecatedGameplayEffectTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GSCDeprecatedGameplayEffectTemplate);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Templates_GSCDeprecatedGameplayEffectTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Templates_GSCDeprecatedGameplayEffectTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate, UDEPRECATED_GSCDeprecatedGameplayEffectTemplate::StaticClass, TEXT("UDEPRECATED_GSCDeprecatedGameplayEffectTemplate"), &Z_Registration_Info_UClass_UDEPRECATED_GSCDeprecatedGameplayEffectTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_GSCDeprecatedGameplayEffectTemplate), 3197819884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Templates_GSCDeprecatedGameplayEffectTemplate_h_3102787713(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Templates_GSCDeprecatedGameplayEffectTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Templates_GSCDeprecatedGameplayEffectTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
