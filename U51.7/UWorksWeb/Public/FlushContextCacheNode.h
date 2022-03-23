#pragma once
#include "CoreMinimal.h"
#include "FlushContextCacheDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "FlushContextCacheNode.generated.h"

class UFlushContextCacheNode;

UCLASS()
class UWORKSWEB_API UFlushContextCacheNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFlushContextCacheDelegate Completed;
    
    UFlushContextCacheNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UFlushContextCacheNode* FlushContextCacheNode(const FString& Key, int32 AppID);
    
};

