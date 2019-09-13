// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExploreAndCollectCharacter.h"
#include "MissionInteractable.h"
#include "Components/SphereComponent.h"
#include "Components/SceneComponent.h"
#include "MissionManager.generated.h"

UCLASS()
class EXPLOREANDCOLLECT_API AMissionManager : public AActor
{
	
	GENERATED_BODY()
	USceneComponent* SceneComp;

	//UPROPERTY(VisibleDefaults)
	USphereComponent* CollisionSphere;

	
public:	

	bool CheckForCompletion();

	// Sets default values for this actor's properties
	AMissionManager(const FObjectInitializer& OI);

	UFUNCTION(BlueprintImplementableEvent)
	void ReloadMissionList();

	UPROPERTY(EditAnywhere)
	TArray<AMissionInteractable*> Missions;



protected:
	// Called when the game starts or when spawned
	void Interact();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
