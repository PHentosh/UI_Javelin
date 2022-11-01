// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "PlayerPawn.generated.h"

UCLASS()
class JAVELIN_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveUD(float Value);
	void MoveLR(float Value);

private:
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* PlayerMesh;

	UPROPERTY(EditDefaultsOnly)
		UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
		float RotationSpeed = 1.0f;
};
