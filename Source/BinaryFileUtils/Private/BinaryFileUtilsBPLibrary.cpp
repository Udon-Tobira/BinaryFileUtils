// Copyright 2024 Udon-Tobira, All Rights Reserved.

#include "BinaryFileUtilsBPLibrary.h"

#include "BinaryFileUtils.h"

TArray<uint8> UBinaryFileUtilsBPLibrary::LoadFile(const FString& FilePath) {
	TArray<uint8> ByteArray;
	FFileHelper::LoadFileToArray(/*out*/ ByteArray, *FilePath);
	return ByteArray;
}

void UBinaryFileUtilsBPLibrary::SaveFile(const FString&       FilePath,
                                         const TArray<uint8>& Data) {
	FFileHelper::SaveArrayToFile(Data, *FilePath);
}
