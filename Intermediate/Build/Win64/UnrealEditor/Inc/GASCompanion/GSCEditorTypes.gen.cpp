// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Core/Editor/GSCEditorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCEditorTypes() {}
// Cross Module References
	GASCOMPANION_API UEnum* Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
	GASCOMPANION_API UEnum* Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCLaunchPadItemAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCExampleMapManager_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGSCLaunchPadActionType;
	static UEnum* EGSCLaunchPadActionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGSCLaunchPadActionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGSCLaunchPadActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType, Z_Construct_UPackage__Script_GASCompanion(), TEXT("EGSCLaunchPadActionType"));
		}
		return Z_Registration_Info_UEnum_EGSCLaunchPadActionType.OuterSingleton;
	}
	template<> GASCOMPANION_API UEnum* StaticEnum<EGSCLaunchPadActionType>()
	{
		return EGSCLaunchPadActionType_StaticEnum();
	}
	struct Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType_Statics::Enumerators[] = {
		{ "EGSCLaunchPadActionType::OpenSample", (int64)EGSCLaunchPadActionType::OpenSample },
		{ "EGSCLaunchPadActionType::Documentation", (int64)EGSCLaunchPadActionType::Documentation },
		{ "EGSCLaunchPadActionType::InstallExamplesPlugin", (int64)EGSCLaunchPadActionType::InstallExamplesPlugin },
		{ "EGSCLaunchPadActionType::EnableExamplesPlugin", (int64)EGSCLaunchPadActionType::EnableExamplesPlugin },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType_Statics::Enum_MetaDataParams[] = {
		{ "Documentation.Name", "EGSCLaunchPadActionType::Documentation" },
		{ "EnableExamplesPlugin.Name", "EGSCLaunchPadActionType::EnableExamplesPlugin" },
		{ "InstallExamplesPlugin.Name", "EGSCLaunchPadActionType::InstallExamplesPlugin" },
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
		{ "OpenSample.Name", "EGSCLaunchPadActionType::OpenSample" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		"EGSCLaunchPadActionType",
		"EGSCLaunchPadActionType",
		Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType()
	{
		if (!Z_Registration_Info_UEnum_EGSCLaunchPadActionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGSCLaunchPadActionType.InnerSingleton, Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGSCLaunchPadActionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGSCLaunchPadDependencyType;
	static UEnum* EGSCLaunchPadDependencyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGSCLaunchPadDependencyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGSCLaunchPadDependencyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType, Z_Construct_UPackage__Script_GASCompanion(), TEXT("EGSCLaunchPadDependencyType"));
		}
		return Z_Registration_Info_UEnum_EGSCLaunchPadDependencyType.OuterSingleton;
	}
	template<> GASCOMPANION_API UEnum* StaticEnum<EGSCLaunchPadDependencyType>()
	{
		return EGSCLaunchPadDependencyType_StaticEnum();
	}
	struct Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType_Statics::Enumerators[] = {
		{ "EGSCLaunchPadDependencyType::Module", (int64)EGSCLaunchPadDependencyType::Module },
		{ "EGSCLaunchPadDependencyType::Content", (int64)EGSCLaunchPadDependencyType::Content },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType_Statics::Enum_MetaDataParams[] = {
		{ "Content.Name", "EGSCLaunchPadDependencyType::Content" },
		{ "Module.Name", "EGSCLaunchPadDependencyType::Module" },
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		"EGSCLaunchPadDependencyType",
		"EGSCLaunchPadDependencyType",
		Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType()
	{
		if (!Z_Registration_Info_UEnum_EGSCLaunchPadDependencyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGSCLaunchPadDependencyType.InnerSingleton, Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGSCLaunchPadDependencyType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCLaunchPadItemDependency;
class UScriptStruct* FGSCLaunchPadItemDependency::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCLaunchPadItemDependency.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCLaunchPadItemDependency.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency, Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCLaunchPadItemDependency"));
	}
	return Z_Registration_Info_UScriptStruct_GSCLaunchPadItemDependency.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCLaunchPadItemDependency>()
{
	return FGSCLaunchPadItemDependency::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCLaunchPadItemDependency>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemDependency, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemDependency, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Url_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemDependency, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemDependency, Type), Z_Construct_UEnum_GASCompanion_EGSCLaunchPadDependencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Type_MetaData)) }; // 3898114976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCLaunchPadItemDependency",
		sizeof(FGSCLaunchPadItemDependency),
		alignof(FGSCLaunchPadItemDependency),
		Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCLaunchPadItemDependency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCLaunchPadItemDependency.InnerSingleton, Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCLaunchPadItemDependency.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCLaunchPadItemAction;
class UScriptStruct* FGSCLaunchPadItemAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCLaunchPadItemAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCLaunchPadItemAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction, Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCLaunchPadItemAction"));
	}
	return Z_Registration_Info_UScriptStruct_GSCLaunchPadItemAction.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCLaunchPadItemAction>()
{
	return FGSCLaunchPadItemAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dependencies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleManager_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SampleManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCLaunchPadItemAction>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemAction, Type), Z_Construct_UEnum_GASCompanion_EGSCLaunchPadActionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Type_MetaData)) }; // 463231434
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemAction, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Folder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemAction, Folder), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Folder_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency, METADATA_PARAMS(nullptr, 0) }; // 2319146932
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Dependencies_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemAction, Dependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Dependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Dependencies_MetaData)) }; // 2319146932
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_SampleManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editor/GSCEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_SampleManager = { "SampleManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSCLaunchPadItemAction, SampleManager), Z_Construct_UClass_AGSCExampleMapManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_SampleManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_SampleManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Dependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_Dependencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewProp_SampleManager,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCLaunchPadItemAction",
		sizeof(FGSCLaunchPadItemAction),
		alignof(FGSCLaunchPadItemAction),
		Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSCLaunchPadItemAction()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCLaunchPadItemAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCLaunchPadItemAction.InnerSingleton, Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCLaunchPadItemAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCEditorTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCEditorTypes_h_Statics::EnumInfo[] = {
		{ EGSCLaunchPadActionType_StaticEnum, TEXT("EGSCLaunchPadActionType"), &Z_Registration_Info_UEnum_EGSCLaunchPadActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 463231434U) },
		{ EGSCLaunchPadDependencyType_StaticEnum, TEXT("EGSCLaunchPadDependencyType"), &Z_Registration_Info_UEnum_EGSCLaunchPadDependencyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3898114976U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCEditorTypes_h_Statics::ScriptStructInfo[] = {
		{ FGSCLaunchPadItemDependency::StaticStruct, Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics::NewStructOps, TEXT("GSCLaunchPadItemDependency"), &Z_Registration_Info_UScriptStruct_GSCLaunchPadItemDependency, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCLaunchPadItemDependency), 2319146932U) },
		{ FGSCLaunchPadItemAction::StaticStruct, Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics::NewStructOps, TEXT("GSCLaunchPadItemAction"), &Z_Registration_Info_UScriptStruct_GSCLaunchPadItemAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCLaunchPadItemAction), 84937131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCEditorTypes_h_1368263837(TEXT("/Script/GASCompanion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCEditorTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCEditorTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCEditorTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCEditorTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
