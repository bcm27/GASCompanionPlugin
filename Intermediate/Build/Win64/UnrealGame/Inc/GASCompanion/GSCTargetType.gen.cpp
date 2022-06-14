// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Abilities/GSCTargetType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCTargetType() {}
// Cross Module References
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTargetType_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTargetType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(UGSCTargetType::execGetTargets)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetingActor);
		P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHitResults);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTargets_Implementation(Z_Param_TargetingActor,Z_Param_EventData,Z_Param_Out_OutHitResults,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	static FName NAME_UGSCTargetType_GetTargets = FName(TEXT("GetTargets"));
	void UGSCTargetType::GetTargets(AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const
	{
		GSCTargetType_eventGetTargets_Parms Parms;
		Parms.TargetingActor=TargetingActor;
		Parms.EventData=EventData;
		Parms.OutHitResults=OutHitResults;
		Parms.OutActors=OutActors;
		const_cast<UGSCTargetType*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGSCTargetType_GetTargets),&Parms);
		OutHitResults=Parms.OutHitResults;
		OutActors=Parms.OutActors;
	}
	void UGSCTargetType::StaticRegisterNativesUGSCTargetType()
	{
		UClass* Class = UGSCTargetType::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargets", &UGSCTargetType::execGetTargets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitResults_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHitResults;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::NewProp_TargetingActor = { "TargetingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSCTargetType_eventGetTargets_Parms, TargetingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSCTargetType_eventGetTargets_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) }; // 2837403565
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner = { "OutHitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::NewProp_OutHitResults = { "OutHitResults", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSCTargetType_eventGetTargets_Parms, OutHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSCTargetType_eventGetTargets_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::NewProp_TargetingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::NewProp_EventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::NewProp_OutHitResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called to determine targets to apply gameplay effects to */" },
		{ "ModuleRelativePath", "Public/Abilities/GSCTargetType.h" },
		{ "ToolTip", "Called to determine targets to apply gameplay effects to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCTargetType, nullptr, "GetTargets", nullptr, nullptr, sizeof(GSCTargetType_eventGetTargets_Parms), Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSCTargetType_GetTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCTargetType_GetTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCTargetType);
	UClass* Z_Construct_UClass_UGSCTargetType_NoRegister()
	{
		return UGSCTargetType::StaticClass();
	}
	struct Z_Construct_UClass_UGSCTargetType_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCTargetType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCTargetType_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCTargetType_GetTargets, "GetTargets" }, // 4002262375
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTargetType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Class that is used to determine targeting for abilities\n*\n* It is meant to be blueprinted to run target logic\n*\n* This does not subclass GameplayAbilityTargetActor because this class is never instanced into the world\n*\n* This can be used as a basis for a game-specific targeting blueprint .If your targeting is more complicated\n* you may need to instance into the world once or as a pooled actor\n*/" },
		{ "IncludePath", "Abilities/GSCTargetType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GSCTargetType.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "Class that is used to determine targeting for abilities\n\nIt is meant to be blueprinted to run target logic\n\nThis does not subclass GameplayAbilityTargetActor because this class is never instanced into the world\n\nThis can be used as a basis for a game-specific targeting blueprint .If your targeting is more complicated\nyou may need to instance into the world once or as a pooled actor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCTargetType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCTargetType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCTargetType_Statics::ClassParams = {
		&UGSCTargetType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGSCTargetType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTargetType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSCTargetType()
	{
		if (!Z_Registration_Info_UClass_UGSCTargetType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCTargetType.OuterSingleton, Z_Construct_UClass_UGSCTargetType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCTargetType.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCTargetType>()
	{
		return UGSCTargetType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCTargetType);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCTargetType, UGSCTargetType::StaticClass, TEXT("UGSCTargetType"), &Z_Registration_Info_UClass_UGSCTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCTargetType), 3592950453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_2638758290(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTargetType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
