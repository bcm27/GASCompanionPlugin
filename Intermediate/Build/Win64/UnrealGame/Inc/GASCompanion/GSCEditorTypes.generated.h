// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASCOMPANION_GSCEditorTypes_generated_h
#error "GSCEditorTypes.generated.h already included, missing '#pragma once' in GSCEditorTypes.h"
#endif
#define GASCOMPANION_GSCEditorTypes_generated_h

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCEditorTypes_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSCLaunchPadItemDependency_Statics; \
	GASCOMPANION_API static class UScriptStruct* StaticStruct();


template<> GASCOMPANION_API UScriptStruct* StaticStruct<struct FGSCLaunchPadItemDependency>();

#define FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCEditorTypes_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSCLaunchPadItemAction_Statics; \
	GASCOMPANION_API static class UScriptStruct* StaticStruct();


template<> GASCOMPANION_API UScriptStruct* StaticStruct<struct FGSCLaunchPadItemAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Editor_GSCEditorTypes_h


#define FOREACH_ENUM_EGSCLAUNCHPADACTIONTYPE(op) \
	op(EGSCLaunchPadActionType::OpenSample) \
	op(EGSCLaunchPadActionType::Documentation) \
	op(EGSCLaunchPadActionType::InstallExamplesPlugin) \
	op(EGSCLaunchPadActionType::EnableExamplesPlugin) 

enum class EGSCLaunchPadActionType : uint8;
template<> GASCOMPANION_API UEnum* StaticEnum<EGSCLaunchPadActionType>();

#define FOREACH_ENUM_EGSCLAUNCHPADDEPENDENCYTYPE(op) \
	op(EGSCLaunchPadDependencyType::Module) \
	op(EGSCLaunchPadDependencyType::Content) 

enum class EGSCLaunchPadDependencyType : uint8;
template<> GASCOMPANION_API UEnum* StaticEnum<EGSCLaunchPadDependencyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
