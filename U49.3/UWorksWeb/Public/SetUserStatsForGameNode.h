#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SetUserStatsForGameDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "SetUserStatsForGameNode.generated.h"

class USetUserStatsForGameNode;

UCLASS()
class UWORKSWEB_API USetUserStatsForGameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetUserStatsForGameDelegate Completed;
    
    USetUserStatsForGameNode();
    UFUNCTION(BlueprintCallable)
    static USetUserStatsForGameNode* SetUserStatsForGameNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<FString> Name, TArray<int32> Value);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

