#pragma once
#include "CoreMinimal.h"
#include "GetOwnedGamesDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetOwnedGamesNode.generated.h"

class UGetOwnedGamesNode;

UCLASS()
class UWORKSWEB_API UGetOwnedGamesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetOwnedGamesDelegate Completed;
    
    UGetOwnedGamesNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetOwnedGamesNode* GetOwnedGamesNode(const FString& Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter);
    
};

