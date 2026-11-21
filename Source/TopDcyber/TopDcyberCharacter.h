// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TopDcyberCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UItemDefinition;
class AEquippableToolBase;
class UEquipableItems;
class UInventoryComponent;


/**
 *  A controllable top-down perspective character
 */
UCLASS(abstract)
class ATopDcyberCharacter : public ACharacter
{
	GENERATED_BODY()

protected:
	// The currently-equipped tool
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tools")
	TObjectPtr<AEquippableToolBase> EquippedTool;

private:

	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> CameraBoom;

public:

	/** Constructor */
	ATopDcyberCharacter();

	/** Initialization */
	virtual void BeginPlay() override;

	/** Update */
	virtual void Tick(float DeltaSeconds) override;

	/** Returns the camera component **/
	UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent.Get(); }

	/** Returns the Camera Boom component **/
	USpringArmComponent* GetCameraBoom() const { return CameraBoom.Get(); }

	// Inventory Component
	UPROPERTY(VisibleAnywhere, Category = "Inventory")
	TObjectPtr<UInventoryComponent> InventoryComponent;

	// Returns whether or not the player already owns this tool
	UFUNCTION()
	bool IsToolAlreadyOwned(UEquipableItems* ToolDefinition);

	// Attaches and equips a tool to the player
	UFUNCTION()
	void AttachTool(UEquipableItems* ToolDefinition);


};

