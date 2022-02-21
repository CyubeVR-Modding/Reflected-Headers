#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "UnsubscribeItemDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "EUWorksResult.h"
#include "CoreUnsubscribeItemNode.generated.h"

class UCoreUnsubscribeItemNode;

UCLASS()
class UWORKSCORE_API UCoreUnsubscribeItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUnsubscribeItemDelegate Completed;
    
    UCoreUnsubscribeItemNode();
    UFUNCTION(BlueprintCallable)
    static UCoreUnsubscribeItemNode* UnsubscribeItemNode(FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID);
    
};

