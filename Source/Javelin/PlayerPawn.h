// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
//THIRD_PARTY_INCLUDES_START
//#include <boost/asio.hpp>
//THIRD_PARTY_INCLUDES_END
#include <vector>
#include "PlayerPawn.generated.h"

//namespace ba = boost::asio;


USTRUCT(BlueprintType)
struct FUART_INPUT
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		float Pitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Struct")
		float Yaw;

};



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

	//UFUNCTION(BlueprintCallable)
	//	void Open_UART();

	//UFUNCTION(BlueprintCallable)
	//	void Read_UART();


private:

	
	void MoveUD(float Value);
	void MoveLR(float Value);

	UFUNCTION(BlueprintCallable)
    void MoveUD_ADD(float Value);

	UFUNCTION(BlueprintCallable)
	void MoveLR_ADD(float Value);


	UFUNCTION(BlueprintCallable)
	FUART_INPUT Process_Line(FString Value);

private:

	

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* PlayerMesh;

	UPROPERTY(EditDefaultsOnly)
		UCameraComponent* Camera;


	UPROPERTY(EditAnywhere)
		float RotationSpeed = 1.0f;
};


