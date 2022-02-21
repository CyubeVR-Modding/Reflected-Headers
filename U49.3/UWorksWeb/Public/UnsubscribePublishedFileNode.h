#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "UnsubscribePublishedFileDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UnsubscribePublishedFileNode.generated.h"

class UUnsubscribePublishedFileNode;

UCLASS()
class UWORKSWEB_API UUnsubscribePublishedFileNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUnsubscribePublishedFileDelegate Completed;
    
    UUnsubscribePublishedFileNode();
    UFUNCTION(BlueprintCallable)
    static UUnsubscribePublishedFileNode* UnsubscribePublishedFileNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

