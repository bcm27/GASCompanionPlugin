// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanionEditor/Public/Editors/LaunchPad/GSCLaunchPadData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCLaunchPadData() {}
// Cross Module References
	GASCOMPANIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo();
	UPackage* Z_Construct_UPackage__Script_GASCompanionEditor();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCLaunchPadItemAction();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCLaunchPadItemInfo;
class UScriptStruct* FGSCLaunchPadItemInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCLaunchPadItemInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCLaunchPadItemInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo, Z_Construct_UPackage__Script_GASCompanionEditor(), TEXT("GSCLaunchPadItemInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GSCLaunchPadItemInfo.OuterSingleton;
}
template<> GASCOMPANIONEDITOR_API UScriptStruct* StaticStruct<FGSCLaunchPadItemInfo>()
{
	return FGSCLaunchPadItemInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Image;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Editors/LaunchPad/GSCLaunchPadData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCLaunchPadItemInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/Editors/LaunchPad/GSCLaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemInfo, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_SubTitle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Editors/LaunchPad/GSCLaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_SubTitle = { "SubTitle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemInfo, SubTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_SubTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_SubTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/Editors/LaunchPad/GSCLaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Image_MetaData[] = {
		{ "ModuleRelativePath", "Public/Editors/LaunchPad/GSCLaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemInfo, Image), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Image_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGSCLaunchPadItemAction, METADATA_PARAMS(nullptr, 0) }; // 84937131
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Actions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Editors/LaunchPad/GSCLaunchPadData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemInfo, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Actions_MetaData)) }; // 84937131
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_SubTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewProp_Actions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanionEditor,
		nullptr,
		&NewStructOps,
		"GSCLaunchPadItemInfo",
		sizeof(FGSCLaunchPadItemInfo),
		alignof(FGSCLaunchPadItemInfo),
		Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCLaunchPadItemInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCLaunchPadItemInfo.InnerSingleton, Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCLaunchPadItemInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Editors_LaunchPad_GSCLaunchPadData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Editors_LaunchPad_GSCLaunchPadData_h_Statics::ScriptStructInfo[] = {
		{ FGSCLaunchPadItemInfo::StaticStruct, Z_Construct_UScriptStruct_FGSCLaunchPadItemInfo_Statics::NewStructOps, TEXT("GSCLaunchPadItemInfo"), &Z_Registration_Info_UScriptStruct_GSCLaunchPadItemInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCLaunchPadItemInfo), 581692866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Editors_LaunchPad_GSCLaunchPadData_h_3125383354(TEXT("/Script/GASCompanionEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Editors_LaunchPad_GSCLaunchPadData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanionEditor_Public_Editors_LaunchPad_GSCLaunchPadData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
