// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

class UInfinario;

UCLASS( BlueprintType, Blueprintable )
class PLUGINCREATION_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY( )

protected:
	virtual void BeginPlay( ) override;

	UPROPERTY( BlueprintReadOnly, Category = "Infinario" )
	UInfinario* Inf;

	/** True - run only BP code. For testing only. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Infinario" )
	bool bBypassCPPCode;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Infinario" )
	FString Token = "e79ea4ac-5cdc-11e8-aaaa-b083fed3a8cb";
};
