// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemDefinition.h"
#include "EquipableItems.generated.h"


class AEquippableToolBase;
class UInputMappingContext;


UCLASS(BlueprintType, Blueprintable)
class TOPDCYBER_API UEquipableItems : public UItemDefinition
{
	GENERATED_BODY()
	
public:

	// The tool actor associated with this item
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AEquippableToolBase> ToolAsset;

	// Create and return a copy of this item
	virtual UEquipableItems* CreateItemCopy(UObject* Outer) const override;

};
