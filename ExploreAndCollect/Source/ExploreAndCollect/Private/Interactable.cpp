 // Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable.h"
#include "GameplayController.h"

// Sets default values
AInteractable::AInteractable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	Name = "Name Not Set";
	Action = "Interact"; 

}

// Called when the game starts or when spawned
void AInteractable::BeginPlay()
{
	Super::BeginPlay();
	
}

void AInteractable::Interact(APlayerController * Controller)
{
}


