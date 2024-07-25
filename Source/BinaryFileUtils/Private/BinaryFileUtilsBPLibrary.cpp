// Copyright Epic Games, Inc. All Rights Reserved.

#include "BinaryFileUtilsBPLibrary.h"

#include "BinaryFileUtils.h"

TArray<uint8> UBinaryFileUtilsBPLibrary::LoadFile(const FString& FilePath) {
	TArray<uint8> ByteArray;
	FFileHelper::LoadFileToArray(/*out*/ ByteArray, *FilePath);
	return ByteArray;
}
