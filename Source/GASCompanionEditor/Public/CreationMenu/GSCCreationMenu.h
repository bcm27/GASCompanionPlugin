// Copyright 2021 Mickael Daniel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AssetToolsModule.h"
#include "ContentBrowserModule.h"
#include "GameplayEffect.h"
#include "Templates/GSCTemplate_GameplayEffectDefinition.h"
#include "IContentBrowserSingleton.h"
#include "Core/Logging/GASCompanionEditorLog.h"
#include "Factories/BlueprintFactory.h"
#include "GSCCreationMenu.generated.h"

struct FGSCMenuItem : TSharedFromThis<FGSCMenuItem>
{
	TMap<FString, TSharedPtr<FGSCMenuItem>> SubItems;

	FString AssetPrefix;
	FString DefaultAssetName;
	FText TooltipText;
	TSubclassOf<class UObject> ParentClass;

	static void BuildMenus_r(TSharedPtr<FGSCMenuItem> Item, FMenuBuilder& MenuBuilder, TArray<FString> SelectedPaths)
	{
		for (auto It : Item->SubItems)
		{
			TSharedPtr<FGSCMenuItem> SubItem  = It.Value;
			FString CatName = It.Key;

			// Add a submenu if this guy has sub items
			if (SubItem->SubItems.Num() > 0)
			{
				MenuBuilder.AddSubMenu(
					FText::FromString(CatName),
					FText::FromString(CatName),
					FNewMenuDelegate::CreateLambda([SubItem, SelectedPaths](FMenuBuilder& SubMenuBuilder)
					{
						BuildMenus_r(SubItem, SubMenuBuilder, SelectedPaths);
					})
				);
			}

			// Add the actual menu item to create the new GE
			if (SubItem->ParentClass.Get() != nullptr)
			{
				MenuBuilder.AddMenuEntry(
					// note: the last category string is what we use for this. Using the "Default Asset Name" is not desirable here. (e.g., Damage|Ability|Instant but "Damage" is default asset name)
					FText::FromString(CatName),
					SubItem->TooltipText,
					FSlateIcon(),
					FUIAction(FExecuteAction::CreateLambda([=]()
					{
						if (SelectedPaths.Num() > 0)
						{
							const FAssetToolsModule& AssetToolsModule = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools");
							const FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");

							TArray<FAssetData> SelectedAssets;
							ContentBrowserModule.Get().GetSelectedAssets(SelectedAssets);

							UBlueprintFactory* BlueprintFactory = NewObject<UBlueprintFactory>();
							// TODO: Mac build. Fix: conditional expression is ambiguous; 'UClass*' can be converted to 'TSubclassOf<class UObject>' and vice versa
							// Fix could be just that: TSubclassOf<UObject> GEClass = UGameplayEffect::StaticClass();
							// Removing Mac from TargetPlatform for now, as I don't have the necessary hardware to test on OSx. My only way to test this change is to submit a new build to Epic marketplace.
							BlueprintFactory->ParentClass = SubItem->ParentClass->IsChildOf(UGSCTemplate_GameplayEffectDefinition::StaticClass()) ? UGameplayEffect::StaticClass() : SubItem->ParentClass;

							FString PackageName = SelectedPaths[0];
							FString AssetName = SubItem->AssetPrefix + SubItem->DefaultAssetName;

							const FString DefaultFullPath = PackageName / AssetName;

							AssetToolsModule.Get().CreateUniqueAssetName(DefaultFullPath, TEXT(""), /*out*/ PackageName, /*out*/ AssetName);
							UBlueprint* Asset = Cast<UBlueprint>(AssetToolsModule.Get().CreateAsset(*AssetName, SelectedPaths[0], UBlueprint::StaticClass(), BlueprintFactory));
							EDITOR_LOG(Verbose, TEXT("Create Asset %s with path: %s (name: %s)"), *GetNameSafe(Asset), *SelectedPaths[0], *AssetName)

							if (Asset)
							{
								UGameplayEffect* CDO = Cast<UGameplayEffect>(Asset->GeneratedClass.GetDefaultObject());
								UGSCTemplate_GameplayEffectDefinition* TemplateCDO = Cast<UGSCTemplate_GameplayEffectDefinition>(SubItem->ParentClass.GetDefaultObject());
								
								if (CDO && TemplateCDO)
								{
									EDITOR_LOG(Verbose, TEXT("Update Gameplay Effect CDO to match template for %s"), *GetNameSafe(CDO))
									UGSCTemplate_GameplayEffectDefinition::CopyProperties(CDO, TemplateCDO);
									Asset->Modify();
								}
							}
						}
					}))
				);
			}
		}
	}
};

UCLASS()
class GASCOMPANIONEDITOR_API UGSCCreationMenu : public UObject
{
	GENERATED_BODY()

public:

	template <typename TCreationData>
	static void TopMenuBuild(FMenuBuilder& TopMenuBuilder, const FText InMenuLabel, const FText InMenuTooltip, const TArray<FString> SelectedPaths, TArray<TCreationData> Definitions)
	{
		if (Definitions.Num() == 0)
		{
			return;
		}

		TopMenuBuilder.AddSubMenu(
			InMenuLabel,
			InMenuTooltip,
			FNewMenuDelegate::CreateLambda([SelectedPaths, Definitions](FMenuBuilder& GETopMenuBuilder)
			{
				// Loop through our Definitions and build FGSCMenuItem
				const TSharedPtr<FGSCMenuItem> RootItem = MakeShareable(new FGSCMenuItem);
				for (const TCreationData& Def : Definitions)
				{
					if (Def.ParentClass.Get() == nullptr)
					{
						continue;
					}

					TArray<FString> CategoryStrings;
					Def.MenuPath.ParseIntoArray(CategoryStrings, TEXT("|"), true);

					FGSCMenuItem* CurrentItem = RootItem.Get();
					for (int32 idx=0; idx < CategoryStrings.Num(); ++idx)
					{
						FString& Str = CategoryStrings[idx];
						TSharedPtr<FGSCMenuItem>& DestItem = CurrentItem->SubItems.FindOrAdd(Str);
						if (!DestItem.IsValid())
						{
							DestItem = MakeShareable(new FGSCMenuItem);
						}
						CurrentItem = DestItem.Get();
					}

					CurrentItem->AssetPrefix = Def.AssetPrefix;
					CurrentItem->DefaultAssetName = Def.BaseName;
					CurrentItem->TooltipText = Def.TooltipText;
					CurrentItem->ParentClass = Def.ParentClass.Get();
				}

				// Build menu delegates based on our data
				FGSCMenuItem::BuildMenus_r(RootItem, GETopMenuBuilder, SelectedPaths);
			})
		);
	}
};
