// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController_Script.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController_Script : public APlayerController
{
	GENERATED_BODY()
	
public:
	
	ATank* GetControlledTank() const;
	virtual void BeginPlay() override;
};
