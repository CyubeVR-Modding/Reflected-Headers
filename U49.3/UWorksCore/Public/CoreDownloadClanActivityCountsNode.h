#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "DownloadClanActivityCountsDelegateDelegate.h"
#include "CoreDownloadClanActivityCountsNode.generated.h"

class UCoreDownloadClanActivityCountsNode;

UCLASS()
class UWORKSCORE_API UCoreDownloadClanActivityCountsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDownloadClanActivityCountsDelegate Completed;
    
    UCoreDownloadClanActivityCountsNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    static UCoreDownloadClanActivityCountsNode* DownloadClanActivityCountsNode(TArray<FUWorksSteamID> SteamIDClans);
    
};

