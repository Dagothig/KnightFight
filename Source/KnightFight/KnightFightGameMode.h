// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "KnightFightGameMode.generated.h"

/**
 * 
 */
UCLASS()
class KNIGHTFIGHT_API AKnightFightGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Networking", meta = (DisplayName = "Server Travel"))
	void MyServerTravel(FString mapName, FString gameMode, bool bAbsolute, FString additionalOptions);

};
