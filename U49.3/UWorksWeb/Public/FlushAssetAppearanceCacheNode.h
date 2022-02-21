#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "FlushAssetAppearanceCacheDelegateDelegate.h"
#include "FlushAssetAppearanceCacheNode.generated.h"

class UFlushAssetAppearanceCacheNode;

UCLASS()
class UWORKSWEB_API UFlushAssetAppearanceCacheNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFlushAssetAppearanceCacheDelegate Completed;
    
    UFlushAssetAppearanceCacheNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UFlushAssetAppearanceCacheNode* FlushAssetAppearanceCacheNode(const FString& Key, int32 AppID);
    
};

