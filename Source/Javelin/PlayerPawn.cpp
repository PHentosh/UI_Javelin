// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"


//namespace ba = boost::asio;
#define BUFSIZE 256

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

void APlayerPawn::MoveUD_ADD(float Value)
{
	auto Rotarion = GetActorRotation();
	Rotarion.Pitch = Value;
	SetActorRotation(Rotarion);
}

void APlayerPawn::MoveLR_ADD(float Value)
{
	auto Rotarion = GetActorRotation();
	Rotarion.Yaw = Value;
	SetActorRotation(Rotarion);
}

FUART_INPUT APlayerPawn::Process_Line(FString Value)
{
	FUART_INPUT inp;
	int pointer = 0;
	for (int i = Value.Len(); i > 0; i--) {
		if (Value[i] == ' ') {
			//inp.Pitch = Value.
		}
	}

	return inp;
}



//void APlayerPawn::Open_UART()
//{
//
//
//	//return &serial;
//}
//
//void APlayerPawn::Read_UART()
//{
//	ba::io_service io;
//	// Open serial port
//	ba::serial_port serial(io, "/dev/ttyACM0");
//
//	// Configure basic serial port parameters: 115.2kBaud, 8N1
//	serial.set_option(ba::serial_port_base::baud_rate(115200));
//	serial.set_option(ba::serial_port_base::character_size(8 /* data bits */));
//	serial.set_option(ba::serial_port_base::parity(ba::serial_port_base::parity::none));
//	serial.set_option(ba::serial_port_base::stop_bits(ba::serial_port_base::stop_bits::one));
//
//	char buff[BUFSIZE];
//	size_t n = serial.read_some(ba::buffer(buff, BUFSIZE));
//	//return buff;
//}