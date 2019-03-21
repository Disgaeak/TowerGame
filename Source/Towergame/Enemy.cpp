// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemy.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/SkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"
#include "Materials/MaterialInstance.h"
#include "Animation/AnimBlueprint.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Structure to hold one-time initialization
	static ConstructorHelpers::FObjectFinderOptional<USkeletalMesh> Body(TEXT("/Game/Mannequin/Character/Mesh/SK_Mannequin"));
	static ConstructorHelpers::FObjectFinderOptional<UMaterial> BaseMat(TEXT("/Game/Mannequin/Character/Materials/M_EnemyBody"));
	static ConstructorHelpers::FObjectFinderOptional<UAnimBlueprint> Anim(TEXT("/Game/Mannequin/Animations/ThirdPerson_AnimBP"));
		
	GetMesh()->SetSkeletalMesh(Body.Get());
	GetMesh()->SetMaterial(0, BaseMat.Get());
	GetMesh()->SetAnimInstanceClass(Anim.Get()->GeneratedClass);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));
	
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
