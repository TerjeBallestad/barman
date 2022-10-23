// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../../../../../Program Files/Epic Games/UE_4.27/Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteComponent.h"
#include "../../Plugins/DialoguePlugin/Source/DialoguePlugin/Public/VisemeComponent.h"
#include "GameFramework/Character.h"
#include "BarCharacter.generated.h"

UCLASS()
class BARMAN_API ABarCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABarCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere)
	UVisemeComponent *VisemeComponent;

	UPROPERTY(VisibleAnywhere)
	UPaperSpriteComponent *MouthSprite;

};
