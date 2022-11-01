// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlayerPawn.h"
#include "GameFramework/DefaultPawn.h"

#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class JAVELIN_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	void InitGameState() override;
	


private:
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<APlayerPawn> CustomPlayerPawnClass = APlayerPawn::StaticClass();

};
