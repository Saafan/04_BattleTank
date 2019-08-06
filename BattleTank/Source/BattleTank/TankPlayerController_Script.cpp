// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController_Script.h"

void ATankPlayerController_Script::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Error, TEXT("Player Controller Begin Play!"));
	auto MyTank = GetControlledTank();
}

ATank* ATankPlayerController_Script::GetControlledTank() const
{
	if (GetPawn())
	{
		UE_LOG(LogTemp, Error, TEXT("%s"), *(GetPawn()->GetName()));
		return	Cast<ATank>(GetPawn());
	}
	else
		return nullptr;
		
	

}

