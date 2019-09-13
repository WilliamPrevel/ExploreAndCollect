// Fill out your copyright notice in the Description page of Project Settings.


#include "MissionManager.h"
#include "ExploreAndCollectCharacter.h"


// Sets default values
AMissionManager::AMissionManager(const FObjectInitializer & OI)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComp = OI.CreateDefaultSubobject<USphereComponent>(this, TEXT("SceneComponent"));
	SceneComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	CollisionSphere = OI.CreateDefaultSubobject<USphereComponent>(this, TEXT("SphereComponent"));
	CollisionSphere->InitSphereRadius(500.0f);
	CollisionSphere->SetCollisionResponseToAllChannels(ECR_Overlap);
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionSphere->SetGenerateOverlapEvents(true);
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AMissionManager::OnOverlapBegin);
	CollisionSphere->AttachToComponent(SceneComp, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called when the game starts or when spawned
void AMissionManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMissionManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMissionManager::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AExploreAndCollectCharacter* Character = Cast<AExploreAndCollectCharacter>(OtherActor);
	if (Character)
	{
		if(!Character->CurrentMission)
			Character->CurrentMission = this;

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Hey, it works,"));
		}
	}
}

bool AMissionManager::CheckForCompletion()
{
	for (int i = 0; i < Missions.Num(); ++i)
	{
		if (Missions[i]->bHasCompleted == false)
		{
			return false;
		}
	}
	return true;
}

