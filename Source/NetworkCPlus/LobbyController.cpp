// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyController.h"

void ALobbyController::BeginPlay()
{
    Super::BeginPlay();

    APlayerController* player0 = Cast<APlayerController>(GetWorld()->GetFirstPlayerController());

    if (player0)
    {
        player0->SetInputMode(FInputModeGameOnly());
        player0->bShowMouseCursor = false;
    }
}
