// Fill out your copyright notice in the Description page of Project Settings.


#include "MissionInteractable.h"
#include "ExploreAndCollectCharacter.h"
#include "GameplayController.h"
#include "MissionManager.h"

AMissionInteractable::AMissionInteractable()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	Name = "Name Not Set";
	Action = "Communicate";
	Objective = "Objective not set";
	MissionID = FName("Please Enter an ID");
}

bool AMissionInteractable::CheckForCompletion()
{
	return bHasCompleted;
}

void AMissionInteractable::BeginPlay()
{
	Super::BeginPlay();
}

void AMissionInteractable::Interact(APlayerController * Controller)
{
	bHasCompleted = true;

	AExploreAndCollectCharacter* TempPawn = Cast<AExploreAndCollectCharacter>(Controller->GetPawn());

	TempPawn->CurrentMission->CheckForCompletion();
}

