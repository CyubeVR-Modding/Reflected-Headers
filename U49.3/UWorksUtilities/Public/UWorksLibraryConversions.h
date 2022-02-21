#pragma once
#include "CoreMinimal.h"
#include "UWorksLibrary.h"
#include "UWorksLibraryConversions.generated.h"

UCLASS(BlueprintType)
class UWORKSUTILITIES_API UUWorksLibraryConversions : public UUWorksLibrary {
    GENERATED_BODY()
public:
    UUWorksLibraryConversions();
    UFUNCTION(BlueprintPure)
    static FString GetCurrentProcessId();
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> ConvertStringToBytes(const FString& Data);
    
    UFUNCTION(BlueprintPure)
    static FString ConvertBytesToString(TArray<uint8> Data);
    
};

