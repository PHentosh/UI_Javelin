// Fill out your copyright notice in the Description page of Project Settings.

#pragma once



#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "stdio.h"
#include "stdlib.h"
#include <thread>
#include "UARTComponent.generated.h"




UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class JAVELIN_API UUARTComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UUARTComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SerialPort(char* portName);
	int ReadSerialPort(char* buffer, unsigned int buf_size);
	bool isConected();

private:
	/*
	HANDLE handleToCom;
	COMSTAT status;
	DWORD errors;
	*/
	bool connected;
		
};
