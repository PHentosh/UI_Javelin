// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	RootComponent = PlayerMesh;
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	Camera->SetupAttachment(PlayerMesh);
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveUD"), this, &APlayerPawn::MoveUD);
	PlayerInputComponent->BindAxis(TEXT("MoveLR"), this, &APlayerPawn::MoveLR);

}

void APlayerPawn::MoveUD(float Value)
{
	auto Rotarion = GetActorRotation();
	Rotarion.Pitch += Value * RotationSpeed;
	SetActorRotation(Rotarion);
}

void APlayerPawn::MoveLR(float Value)
{
	auto Rotarion = GetActorRotation();
	Rotarion.Yaw += Value * RotationSpeed;
	SetActorRotation(Rotarion);
}

