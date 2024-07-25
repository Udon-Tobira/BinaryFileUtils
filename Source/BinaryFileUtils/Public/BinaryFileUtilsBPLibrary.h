// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "BinaryFileUtilsBPLibrary.generated.h"

/**
 *
 */
UCLASS()
class UBinaryFileUtilsBPLibrary: public UBlueprintFunctionLibrary {
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static TArray<uint8> LoadFile(const FString& FilePath);
};