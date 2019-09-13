// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

UCLASS()
class EXPLOREANDCOLLECT_API AInteractable : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AInteractable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:


	/*
	This function is called whenever the player interacts with the interactable
	This blueprint is marked as BlueprintImplimentable so that anyone may impliment whatever custom functionality they want in blueprints
	*/

	virtual void Interact(APlayerController* Controller);

	UPROPERTY(EditDefaultsOnly)
	FString Name;

	UPROPERTY(EditDefaultsOnly)
	FString Action;

	UFUNCTION(BlueprintCallable, Category = "Pickup")
	FString GetUseText() const { return FString::Printf(TEXT("%s : Press E to %s"), *Name, *Action);}

};
