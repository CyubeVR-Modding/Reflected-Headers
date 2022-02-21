#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
#include "ServerStoreUserStatsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CoreStoreUserStatsNode.generated.h"

class UCoreStoreUserStatsNode;

UCLASS()
class UWORKSCORE_API UCoreStoreUserStatsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FServerStoreUserStatsDelegate Completed;
    
    UCoreStoreUserStatsNode();
    UFUNCTION(BlueprintCallable)
    static UCoreStoreUserStatsNode* StoreUserStatsNode(FUWorksSteamID SteamIDUser);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);
    
};
