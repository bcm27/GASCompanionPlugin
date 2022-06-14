// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/GameFeatures/Actions/GSCGameFeatureAction_AddAnimLayers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCGameFeatureAction_AddAnimLayers() {}
// Cross Module References
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAnimLayerEntry();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAnimLayerEntry;
class UScriptStruct* FGSCAnimLayerEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAnimLayerEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAnimLayerEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAnimLayerEntry, Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCAnimLayerEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAnimLayerEntry.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCAnimLayerEntry>()
{
	return FGSCAnimLayerEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AnimLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAnimLayers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAnimLayerEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Anim Layers" },
		{ "Comment", "// The base actor class to add anim layers to\n" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAnimLayers.h" },
		{ "ToolTip", "The base actor class to add anim layers to" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAnimLayerEntry, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewProp_ActorClass_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewProp_AnimLayers_Inner = { "AnimLayers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewProp_AnimLayers_MetaData[] = {
		{ "Category", "Anim Layers" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAnimLayers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewProp_AnimLayers = { "AnimLayers", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCAnimLayerEntry, AnimLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewProp_AnimLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewProp_AnimLayers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewProp_AnimLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewProp_AnimLayers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCAnimLayerEntry",
		sizeof(FGSCAnimLayerEntry),
		alignof(FGSCAnimLayerEntry),
		Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAnimLayerEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCAnimLayerEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAnimLayerEntry.InnerSingleton, Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCAnimLayerEntry.InnerSingleton;
	}
	void UGSCGameFeatureAction_AddAnimLayers::StaticRegisterNativesUGSCGameFeatureAction_AddAnimLayers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCGameFeatureAction_AddAnimLayers);
	UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_NoRegister()
	{
		return UGSCGameFeatureAction_AddAnimLayers::StaticClass();
	}
	struct Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimLayerEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimLayerEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimLayerEntries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* GameFeatureAction responsible for \"pushing\" linked Anim Layers to main Animation Blueprint\n*/" },
		{ "DisplayName", "Add Anim Layers (GAS Companion)" },
		{ "IncludePath", "GameFeatures/Actions/GSCGameFeatureAction_AddAnimLayers.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAnimLayers.h" },
		{ "ToolTip", "GameFeatureAction responsible for \"pushing\" linked Anim Layers to main Animation Blueprint" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::NewProp_AnimLayerEntries_Inner = { "AnimLayerEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGSCAnimLayerEntry, METADATA_PARAMS(nullptr, 0) }; // 2388923157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::NewProp_AnimLayerEntries_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** List of components to add to gameplay actors when this game feature is enabled */// ShowOnlyInnerProperties ?\n" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAnimLayers.h" },
		{ "TitleProperty", "ActorClass" },
		{ "ToolTip", "List of components to add to gameplay actors when this game feature is enabled // ShowOnlyInnerProperties ?" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::NewProp_AnimLayerEntries = { "AnimLayerEntries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCGameFeatureAction_AddAnimLayers, AnimLayerEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::NewProp_AnimLayerEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::NewProp_AnimLayerEntries_MetaData)) }; // 2388923157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::NewProp_AnimLayerEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::NewProp_AnimLayerEntries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCGameFeatureAction_AddAnimLayers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::ClassParams = {
		&UGSCGameFeatureAction_AddAnimLayers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers()
	{
		if (!Z_Registration_Info_UClass_UGSCGameFeatureAction_AddAnimLayers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCGameFeatureAction_AddAnimLayers.OuterSingleton, Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCGameFeatureAction_AddAnimLayers.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCGameFeatureAction_AddAnimLayers>()
	{
		return UGSCGameFeatureAction_AddAnimLayers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCGameFeatureAction_AddAnimLayers);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAnimLayers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAnimLayers_h_Statics::ScriptStructInfo[] = {
		{ FGSCAnimLayerEntry::StaticStruct, Z_Construct_UScriptStruct_FGSCAnimLayerEntry_Statics::NewStructOps, TEXT("GSCAnimLayerEntry"), &Z_Registration_Info_UScriptStruct_GSCAnimLayerEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAnimLayerEntry), 2388923157U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAnimLayers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCGameFeatureAction_AddAnimLayers, UGSCGameFeatureAction_AddAnimLayers::StaticClass, TEXT("UGSCGameFeatureAction_AddAnimLayers"), &Z_Registration_Info_UClass_UGSCGameFeatureAction_AddAnimLayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCGameFeatureAction_AddAnimLayers), 1630518292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAnimLayers_h_2599053733(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAnimLayers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAnimLayers_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAnimLayers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAnimLayers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
