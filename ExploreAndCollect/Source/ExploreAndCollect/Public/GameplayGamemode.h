// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameplayGamemode.generated.h"

/**
 * 
 */
UCLASS()
class EXPLOREANDCOLLECT_API AGameplayGamemode : public AGameModeBase
{
	GENERATED_BODY()

public:

	class UDataTable* GetItemDB() const{ return ItemDB; }

protected:
	UPROPERTY(EditDefaultsOnly)
	class UDataTable* ItemDB;
};
