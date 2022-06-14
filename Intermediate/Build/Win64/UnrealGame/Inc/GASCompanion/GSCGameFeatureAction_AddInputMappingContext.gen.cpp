// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/GameFeatures/Actions/GSCGameFeatureAction_AddInputMappingContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCGameFeatureAction_AddInputMappingContext() {}
// Cross Module References
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
// End Cross Module References
	void UGSCGameFeatureAction_AddInputMappingContext::StaticRegisterNativesUGSCGameFeatureAction_AddInputMappingContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCGameFeatureAction_AddInputMappingContext);
	UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_NoRegister()
	{
		return UGSCGameFeatureAction_AddInputMappingContext::StaticClass();
	}
	struct Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Adds InputMappingContext to local players' EnhancedInput system.\n*\n* Expects that local players are set up to use the EnhancedInput system.\n*/" },
		{ "DisplayName", "Add Input Mapping (GAS Companion)" },
		{ "IncludePath", "GameFeatures/Actions/GSCGameFeatureAction_AddInputMappingContext.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddInputMappingContext.h" },
		{ "ToolTip", "Adds InputMappingContext to local players' EnhancedInput system.\n\nExpects that local players are set up to use the EnhancedInput system." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Input Mapping Context to add to local players EnhancedInput system.\n" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddInputMappingContext.h" },
		{ "ToolTip", "Input Mapping Context to add to local players EnhancedInput system." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCGameFeatureAction_AddInputMappingContext, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::NewProp_InputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::NewProp_InputMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Higher priority input mappings will be prioritized over mappings with a lower priority.\n" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddInputMappingContext.h" },
		{ "ToolTip", "Higher priority input mappings will be prioritized over mappings with a lower priority." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGSCGameFeatureAction_AddInputMappingContext, Priority), METADATA_PARAMS(Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCGameFeatureAction_AddInputMappingContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::ClassParams = {
		&UGSCGameFeatureAction_AddInputMappingContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext()
	{
		if (!Z_Registration_Info_UClass_UGSCGameFeatureAction_AddInputMappingContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCGameFeatureAction_AddInputMappingContext.OuterSingleton, Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCGameFeatureAction_AddInputMappingContext.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCGameFeatureAction_AddInputMappingContext>()
	{
		return UGSCGameFeatureAction_AddInputMappingContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCGameFeatureAction_AddInputMappingContext);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddInputMappingContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddInputMappingContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCGameFeatureAction_AddInputMappingContext, UGSCGameFeatureAction_AddInputMappingContext::StaticClass, TEXT("UGSCGameFeatureAction_AddInputMappingContext"), &Z_Registration_Info_UClass_UGSCGameFeatureAction_AddInputMappingContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCGameFeatureAction_AddInputMappingContext), 3752495389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddInputMappingContext_h_2835703752(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddInputMappingContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddInputMappingContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
