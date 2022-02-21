#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetFileDetailsDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreGetFileDetailsNode.generated.h"

class UCoreGetFileDetailsNode;

UCLASS()
class UWORKSCORE_API UCoreGetFileDetailsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetFileDetailsDelegate Completed;
    
    UCoreGetFileDetailsNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 fileSize, const FString& FileSHA, const TArray<int32>& FileFlags);
    
    UFUNCTION(BlueprintCallable)
    static UCoreGetFileDetailsNode* GetFileDetailsNode(const FString& Filename);
    
};

