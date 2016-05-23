// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "EconomySystemBase.generated.h"

UCLASS()
class RANDOMTESTPROJECT_API AEconomySystemBase : public AActor
{
	GENERATED_BODY()
private:
	float Money = 0;
public:	
	// Sets default values for this actor's properties
	AEconomySystemBase();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	UFUNCTION(BlueprintCallable, Category = "Money")
		float GetMoney();
	UFUNCTION(BlueprintCallable, Category = "Money")
		bool AddMoney(float Ammount);
	UFUNCTION(BlueprintCallable, Category = "Money")
		bool RemoveMoney(float Ammount);
	
};
