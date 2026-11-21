// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipableItems.h"

UEquipableItems* UEquipableItems::CreateItemCopy(UObject* Outer) const
{
	// If we need an Outer, use GetTransientPackage
	if (!Outer)
	{
		Outer = GetTransientPackage();
	}

	return DuplicateObject<UEquipableItems>(this, Outer);
}