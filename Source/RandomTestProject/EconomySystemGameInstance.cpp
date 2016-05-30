// Fill out your copyright notice in the Description page of Project Settings.

#include "RandomTestProject.h"
#include "EconomySystemGameInstance.h"


float UEconomySystemGameInstance::GetMoney()
{
	return Money;
}

bool UEconomySystemGameInstance::AddMoney(float Ammount)
{
	Money += Ammount;
	return true;
}

bool UEconomySystemGameInstance::RemoveMoney(float Ammount)
{
	if (Money - Ammount <= 0) {
		return false;
	}
	else {
		Money -= Ammount;
		return true;
	}
}

