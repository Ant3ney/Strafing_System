// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include <vector>
#include <iostream>
#include "Math/Vector.h"
#include "Strafe.generated.h"

/**
 * 
 */
UCLASS()
class STRAFINGPROTOTYPE_API UStrafe : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Strafe System")
	static UStrafe* AIStrafe();

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Strafe System")
	static TArray<FVector> GetPerpendicularPoints(const FVector& PointA, const FVector& PointB, float spacing);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Strafe System")
	static void Orwlo_testing();

};
