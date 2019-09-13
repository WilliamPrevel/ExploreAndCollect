// Fill out your copyright notice in the Description page of Project Settings.

#include "GameplayController.h"
#include "Interactable.h"
#include "GameplayGameMode.h"
#include "ExploreAndCollectCharacter.h"
#include "ExploreAndCollect.h"

void AGameplayController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Use", IE_Pressed, this, &AGameplayController::Interact);

}

void AGameplayController::CraftItem(FInventoryItem ItemA, FInventoryItem ItemB, AGameplayController * Controller)
{

	//Check if vald craft
	for (auto Craft : ItemB.CraftCombinations)
	{

		if (Craft.ComponentID == ItemA.ItemID)
		{
			if (Craft.DestroyItemA) {
				Inventory.RemoveSingle(ItemA);
			}
			if (Craft.DestroyItemB) {
				Inventory.RemoveSingle(ItemB);
			}

			AddItemToInventoryByID(Craft.ProductID);

			ReloadInventory();
		}

	}
}

void AGameplayController::Interact()
{

	if (CurrentInteractable)
	{
		CurrentInteractable->Interact(this);
	}

}

void AGameplayController::AddItemToInventoryByID(FName ID)
{

	AGameplayGamemode* GameMode = Cast<AGameplayGamemode>(GetWorld()->GetAuthGameMode());
	UDataTable* ItemTable = GameMode->GetItemDB();

	FInventoryItem* ItemToAdd = ItemTable->FindRow<FInventoryItem>(ID, "");

	if (ItemToAdd)
	{
		Inventory.Add(*ItemToAdd);
	}

}