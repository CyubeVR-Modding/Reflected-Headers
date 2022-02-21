#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "FileReadAsyncDelegateDelegate.h"
#include "FileReadAsyncMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreFileReadAsync.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreFileReadAsync : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFileReadAsyncDelegate OnRequestCompleted;
    
    UPROPERTY()
    FFileReadAsyncMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreFileReadAsync();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& File, int32 Offset, int32 BytesToRead);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result, int32& Offset, TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

