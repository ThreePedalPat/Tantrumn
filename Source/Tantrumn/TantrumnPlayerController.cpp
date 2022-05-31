// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumnPlayerController.h"
#include "GameFramework/Character.h"

void ATantrumnPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (InputComponent)
	{
		InputComponent->BindAction("Jump", IE_Pressed, this, &ATantrumnPlayerController::OnJumpAction);
	}
}

void ATantrumnPlayerController::OnJumpAction()
{
		GetCharacter()->Jump();
}
