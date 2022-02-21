#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "FileWriteAsyncDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreFileWriteAsyncNode.generated.h"

class UCoreFileWriteAsyncNode;

UCLASS()
class UWORKSCORE_API UCoreFileWriteAsyncNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFileWriteAsyncDelegate Completed;
    
    UCoreFileWriteAsyncNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
    UFUNCTION(BlueprintCallable)
    static UCoreFileWriteAsyncNode* FileWriteAsyncNode(const FString& File, TArray<uint8> Buffer);
    
};

