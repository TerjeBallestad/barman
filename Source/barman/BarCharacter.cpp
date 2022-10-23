// Fill out your copyright notice in the Description page of Project Settings.


#include "BarCharacter.h"

ABarCharacter::ABarCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	VisemeComponent = CreateDefaultSubobject<UVisemeComponent>(TEXT("Viseme Component"));
	MouthSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Mouth Sprite"));
	VisemeComponent->SpriteComponent = MouthSprite;

}

void ABarCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABarCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABarCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

