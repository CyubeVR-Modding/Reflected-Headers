#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "FileReadAsyncDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreFileReadAsyncNode.generated.h"

class UCoreFileReadAsyncNode;

UCLASS()
class UWORKSCORE_API UCoreFileReadAsyncNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFileReadAsyncDelegate Completed;
    
    UCoreFileReadAsyncNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 Offset, const TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable)
    static UCoreFileReadAsyncNode* FileReadAsyncNode(const FString& File, int32 Offset, int32 BytesToRead);
    
};

