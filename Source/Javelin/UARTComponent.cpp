// Fill out your copyright notice in the Description page of Project Settings.


#include "UARTComponent.h"

// Sets default values for this component's properties
UUARTComponent::UUARTComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UUARTComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UUARTComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
/*
void UUARTComponent::SerialPort(char* portName)
{
	errors = 0;
	status = { 0 };
	connected = false;

	handleToCom = CreateFileA(static_cast<LPCSTR>(portName), GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

	DWORD errMsg = GetLastError();

	if (errMsg == 2) {
		printf("Plug device");
	}
	else if (errMsg == 5) {
		printf("Other is using device");
	}
	else if (errMsg == 0) {
		DCB dcbSerParams = { 0 };
		if (!GetCommState(handleToCom, &dcbSerParams)) {
			printf("Filed fo get params");
		}
		else {
			dcbSerParams.BaudRate = CBR_9600;
			dcbSerParams.ByteSize = 8;
			dcbSerParams.StopBits = ONESTOPBIT;
			dcbSerParams.Parity = NOPARITY;
			dcbSerParams.fDtrControl = DTR_CONTROL_ENABLE;

			if (!SetCommState(handleToCom, &dcbSerParams)) {
				printf("Filed fo set params");
			}
			else {
				connected = true;
				PurgeComm(handleToCom, PURGE_RXCLEAR | PURGE_TXCLEAR);
				Sleep(2500);
			}


		}

	}
}


int UUARTComponent::ReadSerialPort(char* buffer, unsigned int buf_size)
{
	DWORD bytesRead = 0;
	unsigned int toRead = 0;
	ClearCommError(handleToCom, &errors, &status);

	if (status.cbInQue > 0) {
		if (status.cbInQue > buf_size) {
			toRead = buf_size;
		}
		else {
			toRead = status.cbInQue;
		}
	}
	if (ReadFile(handleToCom, buffer, toRead, &bytesRead, NULL)) {
		return bytesRead;
	}

	return 0;
}
*/
bool UUARTComponent::isConected()
{
	return connected;
}
