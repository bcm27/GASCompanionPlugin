// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanionEditor/Public/Editors/LaunchPad/GSCSampleManagerEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCSampleManagerEditor() {}
// Cross Module References
	GASCOMPANIONEDITOR_API UClass* Z_Construct_UClass_AGSCSampleManagerEditor_NoRegister();
	GASCOMPANIONEDITOR_API UClass* Z_Construct_UClass_AGSCSampleManagerEditor();
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCExampleMapManager();
	UPackage* Z_Construct_UPackage__Script_GASCompanionEditor();
// End Cross Module References
	void AGSCSampleManagerEditor::StaticRegisterNativesAGSCSampleManagerEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSCSampleManagerEditor);
	UClass* Z_Construct_UClass_AGSCSampleManagerEditor_NoRegister()
	{
		return AGSCSampleManagerEditor::StaticClass();
	}
	struct Z_Construct_UClass_AGSCSampleManagerEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGSCSampleManagerEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGSCExampleMapManager,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCSampleManagerEditor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editors/LaunchPad/GSCSampleManagerEditor.h" },
		{ "ModuleRelativePath", "Public/Editors/LaunchPad/GSCSampleManagerEditor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGSCSampleManagerEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSCSampleManagerEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSCSampleManagerEditor_Statics::ClassParams = {
		&AGSCSampleManagerEditor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGSCSampleManagerEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGSCSampleManagerEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGSCSampleManagerEditor()
	{
		if (!Z_Registration_Info_UClass_AGSCSampleManagerEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSCSampleManagerEditor.OuterSingleton, Z_Construct_UClass_AGSCSampleManagerEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGSCSampleManagerEditor.OuterSingleton;
	}
	template<> GASCOMPANIONEDITOR_API UClass* StaticClass<AGSCSampleManagerEditor>()
	{
		return AGSCSampleManagerEditor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGSCSampleManagerEditor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Editors_LaunchPad_GSCSampleManagerEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Editors_LaunchPad_GSCSampleManagerEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGSCSampleManagerEditor, AGSCSampleManagerEditor::StaticClass, TEXT("AGSCSampleManagerEditor"), &Z_Registration_Info_UClass_AGSCSampleManagerEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSCSampleManagerEditor), 3602241992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Editors_LaunchPad_GSCSampleManagerEditor_h_3787220029(TEXT("/Script/GASCompanionEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Editors_LaunchPad_GSCSampleManagerEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Editors_LaunchPad_GSCSampleManagerEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
