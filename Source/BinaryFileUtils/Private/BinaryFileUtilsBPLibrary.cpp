// Copyright 2024 Udon-Tobira, All Rights Reserved.

#include "BinaryFileUtilsBPLibrary.h"

TArray<uint8> UBinaryFileUtilsBPLibrary::LoadFile(const FString& FilePath) {
	// destination of file contents
	TArray<uint8> ByteArray;

	// load file to ByteArray
	FFileHelper::LoadFileToArray(/*out*/ ByteArray, *FilePath);

	// return binary file content
	return ByteArray;
}

void UBinaryFileUtilsBPLibrary::SaveFile(const FString&       FilePath,
                                         const TArray<uint8>& Data) {
	// save Data to FilePath
	FFileHelper::SaveArrayToFile(Data, *FilePath);
}
