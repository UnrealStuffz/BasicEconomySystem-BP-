// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "EconomySystemGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class RANDOMTESTPROJECT_API UEconomySystemGameInstance : public UGameInstance
{
	GENERATED_BODY()
private:
	float Money = 0;
public:
	UFUNCTION(BlueprintCallable, Category = "Money")
		float GetMoney();
	UFUNCTION(BlueprintCallable, Category = "Money")
		bool AddMoney(float Ammount);
	UFUNCTION(BlueprintCallable, Category = "Money")
		bool RemoveMoney(float Ammount);
	
};
