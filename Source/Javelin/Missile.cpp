// Fill out your copyright notice in the Description page of Project Settings.


#include "Missile.h"

// Sets default values
AMissile::AMissile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = StaticMesh;
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Box"));
	Sphere->SetupAttachment(StaticMesh);


}

void AMissile::Launch(float Xv, float Yv, float Zv)
{
	StaticMesh->AddImpulse({Xv, Yv, Zv });
}





// Called when the game starts or when spawned
void AMissile::BeginPlay()
{
	Super::BeginPlay();

	FScriptDelegate DelegateOverlap;
	DelegateOverlap.BindUFunction(this, "OnComponentBeingOverlap");
	Sphere->OnComponentBeginOverlap.Add(DelegateOverlap);
}

void AMissile::OnComponentBeingOverlap(UBoxComponent* Component, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(ATarget::StaticClass()))
	{
		Destroy();
		OtherActor->Destroy();

	}
}

// Called every frame
void AMissile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
