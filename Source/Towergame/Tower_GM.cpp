// Fill out your copyright notice in the Description page of Project Settings.

#include "Tower_GM.h"
#include "Engine/World.h"
#include "Enemy.h"

ATower_GM::ATower_GM()
{
	
}

void ATower_GM::BeginPlay()
{
	FVector LOC = FVector(0, 0, 0);
	AEnemy* NewEnemy = GetWorld()->SpawnActor<AEnemy>(LOC, FRotator(0, 0, 0));
}

void ATower_GM::Tick(float DeltaTime)
{
}
