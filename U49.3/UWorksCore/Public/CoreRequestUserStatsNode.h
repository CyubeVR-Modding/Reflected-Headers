#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
#include "RequestUserStatsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CoreRequestUserStatsNode.generated.h"

class UCoreRequestUserStatsNode;

UCLASS()
class UWORKSCORE_API UCoreRequestUserStatsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRequestUserStatsDelegate Completed;
    
    UCoreRequestUserStatsNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestUserStatsNode* RequestUserStatsNode(FUWorksSteamID SteamID);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result, FUWorksSteamID SteamID);
    
};

