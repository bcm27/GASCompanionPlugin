// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/ModularGameplayActors/GSCModularPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCModularPlayerController() {}
// Cross Module References
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCModularPlayerController_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCModularPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void AGSCModularPlayerController::StaticRegisterNativesAGSCModularPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSCModularPlayerController);
	UClass* Z_Construct_UClass_AGSCModularPlayerController_NoRegister()
	{
		return AGSCModularPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGSCModularPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGSCModularPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCModularPlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Minimal class that supports extension by game feature plugins */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ModularGameplayActors/GSCModularPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSCModularPlayerController.h" },
		{ "ToolTip", "Minimal class that supports extension by game feature plugins" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGSCModularPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSCModularPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSCModularPlayerController_Statics::ClassParams = {
		&AGSCModularPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGSCModularPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGSCModularPlayerController()
	{
		if (!Z_Registration_Info_UClass_AGSCModularPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSCModularPlayerController.OuterSingleton, Z_Construct_UClass_AGSCModularPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGSCModularPlayerController.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<AGSCModularPlayerController>()
	{
		return AGSCModularPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGSCModularPlayerController);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGSCModularPlayerController, AGSCModularPlayerController::StaticClass, TEXT("AGSCModularPlayerController"), &Z_Registration_Info_UClass_AGSCModularPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSCModularPlayerController), 856016318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPlayerController_h_3132586432(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
