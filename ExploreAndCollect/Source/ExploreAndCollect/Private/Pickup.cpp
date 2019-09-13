// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"
#include "ExploreAndCollect.h"
#include "GameplayController.h"


APickup::APickup()
{
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickupMesh");

	ItemID = FName("Please Enter an ID");
}
void APickup::Interact(APlayerController* Controller)
{
	AGameplayController* controller = Cast<AGameplayController>(Controller);

	controller->AddItemToInventoryByID(ItemID);

	Destroy();
}
	