#pragma once
#include "CoreMinimal.h"
#include "ServerRequestUserStatsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CoreRequestUserStatsGSNode.generated.h"

class UCoreRequestUserStatsGSNode;

UCLASS()
class UWORKSCORE_API UCoreRequestUserStatsGSNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FServerRequestUserStatsDelegate Completed;
    
    UCoreRequestUserStatsGSNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestUserStatsGSNode* RequestUserStatsGSNode(FUWorksSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDUser);
    
};

