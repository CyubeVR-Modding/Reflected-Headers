#pragma once
#include "CoreMinimal.h"
#include "GetRecentlyPlayedGamesDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetRecentlyPlayedGamesNode.generated.h"

class UGetRecentlyPlayedGamesNode;

UCLASS()
class UWORKSWEB_API UGetRecentlyPlayedGamesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetRecentlyPlayedGamesDelegate Completed;
    
    UGetRecentlyPlayedGamesNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetRecentlyPlayedGamesNode* GetRecentlyPlayedGamesNode(const FString& Key, FUWorksSteamID SteamID, int32 Count);
    
};

