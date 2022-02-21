#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "GetFileDetailsMinimalDelegateDelegate.h"
#include "GetFileDetailsDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreGetFileDetails.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreGetFileDetails : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetFileDetailsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetFileDetailsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreGetFileDetails();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result, int32& fileSize, FString& FileSHA, TArray<int32>& FileFlags);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

