// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/DefaultPawn.h"
#include "Target.h"
#include "Missile.generated.h"

UCLASS()
class JAVELIN_API AMissile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMissile();

	UFUNCTION(BlueprintCallable)
		void Launch(float Xv, float Yv, float Zv);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void OnComponentBeingOverlap(class UBoxComponent* Component, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
		USphereComponent* Sphere;

};
