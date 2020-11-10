// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "STPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API ASTPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable, Category="PlayerState")
	void AddScore(float DeltaScore);
};
