// Fill out your copyright notice in the Description page of Project Settings.

#include "RandomTestProject.h"
#include "EconomySystemBase.h"


// Sets default values
AEconomySystemBase::AEconomySystemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEconomySystemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEconomySystemBase::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

float AEconomySystemBase::GetMoney()
{
	return Money;
}

bool AEconomySystemBase::AddMoney(float Ammount)
{
	Money += Ammount;
	return true;
}

bool AEconomySystemBase::RemoveMoney(float Ammount)
{
	if (Money - Ammount <= 0) {
		return false;
	}
	else {
		Money -= Ammount;
		return true;
	}
}

