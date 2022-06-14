// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Animations/GSCNativeAnimInstanceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCNativeAnimInstanceInterface() {}
// Cross Module References
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCNativeAnimInstanceInterface_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCNativeAnimInstanceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCNativeAnimInstanceInterface::StaticRegisterNativesUGSCNativeAnimInstanceInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCNativeAnimInstanceInterface);
	UClass* Z_Construct_UClass_UGSCNativeAnimInstanceInterface_NoRegister()
	{
		return UGSCNativeAnimInstanceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGSCNativeAnimInstanceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCNativeAnimInstanceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCNativeAnimInstanceInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Animations/GSCNativeAnimInstanceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCNativeAnimInstanceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGSCNativeAnimInstanceInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCNativeAnimInstanceInterface_Statics::ClassParams = {
		&UGSCNativeAnimInstanceInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGSCNativeAnimInstanceInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCNativeAnimInstanceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCNativeAnimInstanceInterface()
	{
		if (!Z_Registration_Info_UClass_UGSCNativeAnimInstanceInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCNativeAnimInstanceInterface.OuterSingleton, Z_Construct_UClass_UGSCNativeAnimInstanceInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCNativeAnimInstanceInterface.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCNativeAnimInstanceInterface>()
	{
		return UGSCNativeAnimInstanceInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCNativeAnimInstanceInterface);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCNativeAnimInstanceInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCNativeAnimInstanceInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCNativeAnimInstanceInterface, UGSCNativeAnimInstanceInterface::StaticClass, TEXT("UGSCNativeAnimInstanceInterface"), &Z_Registration_Info_UClass_UGSCNativeAnimInstanceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCNativeAnimInstanceInterface), 3624575355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCNativeAnimInstanceInterface_h_3977429554(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCNativeAnimInstanceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCNativeAnimInstanceInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
