// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "MissionInteractable.generated.h"

/**
 * 
 */
UCLASS()
class EXPLOREANDCOLLECT_API AMissionInteractable : public AInteractable
{
	GENERATED_BODY()
public:

	UPROPERTY(EditDefaultsOnly)
		FString Objective;
	AMissionInteractable();
		/*
	This function is called whenever the player interacts with a Mission Actor
	This blueprint is marked as BlueprintImplimentable so that anyone may impliment a mission of certain types into it
	*/
	//UFUNCTION(BlueprintImplementableEvent)
	bool CheckForCompletion();

	bool bHasCompleted;



	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName MissionID;



	virtual void BeginPlay() override;

	virtual void Interact(APlayerController* Controller) override;
};
