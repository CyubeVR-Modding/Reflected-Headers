#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SubscribePublishedFileDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "SubscribePublishedFileNode.generated.h"

class USubscribePublishedFileNode;

UCLASS()
class UWORKSWEB_API USubscribePublishedFileNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSubscribePublishedFileDelegate Completed;
    
    USubscribePublishedFileNode();
    UFUNCTION(BlueprintCallable)
    static USubscribePublishedFileNode* SubscribePublishedFileNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

