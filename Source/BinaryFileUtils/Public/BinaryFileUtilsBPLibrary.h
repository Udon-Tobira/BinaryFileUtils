// Copyright 2024 Udon-Tobira, All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "BinaryFileUtilsBPLibrary.generated.h"

/**
 * This is a class that exposes binary file reading and writing functions in
 * blueprint.
 */
UCLASS()
class UBinaryFileUtilsBPLibrary: public UBlueprintFunctionLibrary {
	GENERATED_BODY()

public:
	/**
	 * Load a file as an array of uint8.
	 * @param FilePath  path to the file
	 * @return  array of file content
	 */
	UFUNCTION(BlueprintCallable)
	static TArray<uint8> LoadFile(const FString& FilePath);

	/**
	 * Save an array of uint8 to a file.
	 * @param FilePath  path to the file
	 * @param Data  array of binary data
	 */
	UFUNCTION(BlueprintCallable)
	static void SaveFile(const FString& FilePath, const TArray<uint8>& Data);
};
