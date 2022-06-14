// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Core/Editor/GSCExampleMapManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCExampleMapManager() {}
// Cross Module References
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCExampleMapManager_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCExampleMapManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
// End Cross Module References
	void AGSCExampleMapManager::StaticRegisterNativesAGSCExampleMapManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSCExampleMapManager);
	UClass* Z_Construct_UClass_AGSCExampleMapManager_NoRegister()
	{
		return AGSCExampleMapManager::StaticClass();
	}
	struct Z_Construct_UClass_AGSCExampleMapManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameplayTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTags;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGSCExampleMapManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCExampleMapManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editor/GSCExampleMapManager.h" },
		{ "ModuleRelativePath", "Public/Core/Editor/GSCExampleMapManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 2971228154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_ActionMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/**\n\x09* List of Action Mappings required to run the template / sample.\n\x09*\n\x09* Define here the list of action mappings and their associated key input.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Editor/GSCExampleMapManager.h" },
		{ "ToolTip", "List of Action Mappings required to run the template / sample.\n\nDefine here the list of action mappings and their associated key input." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGSCExampleMapManager, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_ActionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_ActionMappings_MetaData)) }; // 2971228154
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AxisMappings_Inner = { "AxisMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 3392225251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AxisMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/**\n\x09* List of Action Mappings required to run the template / sample.\n\x09*\n\x09* Define here the list of axis mappings and their associated axis input.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Editor/GSCExampleMapManager.h" },
		{ "ToolTip", "List of Action Mappings required to run the template / sample.\n\nDefine here the list of axis mappings and their associated axis input." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AxisMappings = { "AxisMappings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGSCExampleMapManager, AxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AxisMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AxisMappings_MetaData)) }; // 3392225251
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_GameplayTags_Inner = { "GameplayTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "Required Gameplay Tags" },
		{ "Comment", "/**\n\x09* List of GameplayTags required to run the template / sample.\n\x09*\n\x09* Define here the list of GameplayTags Strings in the form of \"A.B.C\".\n\x09*\n\x09* When the map loads, the user will be asked if these tags can be created for him.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Editor/GSCExampleMapManager.h" },
		{ "ToolTip", "List of GameplayTags required to run the template / sample.\n\nDefine here the list of GameplayTags Strings in the form of \"A.B.C\".\n\nWhen the map loads, the user will be asked if these tags can be created for him." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGSCExampleMapManager, GameplayTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_GameplayTags_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AttributeSets_Inner = { "AttributeSets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAttributeSet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AttributeSets_MetaData[] = {
		{ "Category", "Required Attribute Sets" },
		{ "Comment", "/**\n\x09* List of Attribute Sets required to run the template / sample.\n\x09*\n\x09* Define here the list of AttributeSets that are meant to be configured in GAS Companion Project's Settings.\n\x09*\n\x09* When the map loads, the user will be asked if these AttributeSets can be registered for him.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Core/Editor/GSCExampleMapManager.h" },
		{ "ToolTip", "List of Attribute Sets required to run the template / sample.\n\nDefine here the list of AttributeSets that are meant to be configured in GAS Companion Project's Settings.\n\nWhen the map loads, the user will be asked if these AttributeSets can be registered for him." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AttributeSets = { "AttributeSets", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGSCExampleMapManager, AttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AttributeSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGSCExampleMapManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_ActionMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_ActionMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AxisMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AxisMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_GameplayTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AttributeSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSCExampleMapManager_Statics::NewProp_AttributeSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGSCExampleMapManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSCExampleMapManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSCExampleMapManager_Statics::ClassParams = {
		&AGSCExampleMapManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGSCExampleMapManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGSCExampleMapManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGSCExampleMapManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGSCExampleMapManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGSCExampleMapManager()
	{
		if (!Z_Registration_Info_UClass_AGSCExampleMapManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSCExampleMapManager.OuterSingleton, Z_Construct_UClass_AGSCExampleMapManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGSCExampleMapManager.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<AGSCExampleMapManager>()
	{
		return AGSCExampleMapManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGSCExampleMapManager);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCExampleMapManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCExampleMapManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGSCExampleMapManager, AGSCExampleMapManager::StaticClass, TEXT("AGSCExampleMapManager"), &Z_Registration_Info_UClass_AGSCExampleMapManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSCExampleMapManager), 3106111923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCExampleMapManager_h_3150617920(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCExampleMapManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCExampleMapManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
