#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SubscribeItemDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "EUWorksResult.h"
#include "CoreSubscribeItemNode.generated.h"

class UCoreSubscribeItemNode;

UCLASS()
class UWORKSCORE_API UCoreSubscribeItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSubscribeItemDelegate Completed;
    
    UCoreSubscribeItemNode();
    UFUNCTION(BlueprintCallable)
    static UCoreSubscribeItemNode* SubscribeItemNode(FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
    
};

