// Fill out your copyright notice in the Description page of Project Settings.


#include "SpherePawn.h"

ASpherePawn::ASpherePawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Health = 1.f;
}

void ASpherePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Health -= .001f;
}

// Called when the game starts or when spawned
void ASpherePawn::BeginPlay()
{
	Super::BeginPlay();
	
}



// Called to bind functionality to input
void ASpherePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

