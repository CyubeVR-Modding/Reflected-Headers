#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UnsubscribePublishedFileDelegateDelegate.h"
#include "UnsubscribePublishedFileNode.generated.h"

class UUnsubscribePublishedFileNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UUnsubscribePublishedFileNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnsubscribePublishedFileDelegate Completed;
    
    UUnsubscribePublishedFileNode();
    UFUNCTION(BlueprintCallable)
    static UUnsubscribePublishedFileNode* UnsubscribePublishedFileNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

