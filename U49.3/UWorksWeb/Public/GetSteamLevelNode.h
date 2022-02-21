#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetSteamLevelDelegateDelegate.h"
#include "GetSteamLevelNode.generated.h"

class UGetSteamLevelNode;

UCLASS()
class UWORKSWEB_API UGetSteamLevelNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetSteamLevelDelegate Completed;
    
    UGetSteamLevelNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetSteamLevelNode* GetSteamLevelNode(const FString& Key, FUWorksSteamID SteamID);
    
};

