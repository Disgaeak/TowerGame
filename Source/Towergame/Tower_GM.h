// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Tower_GM.generated.h"

UCLASS()
class TOWERGAME_API ATower_GM : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ATower_GM();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
};
