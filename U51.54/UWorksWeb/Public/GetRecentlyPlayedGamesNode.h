#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetRecentlyPlayedGamesDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetRecentlyPlayedGamesNode.generated.h"

class UGetRecentlyPlayedGamesNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetRecentlyPlayedGamesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetRecentlyPlayedGamesDelegate Completed;
    
    UGetRecentlyPlayedGamesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetRecentlyPlayedGamesNode* GetRecentlyPlayedGamesNode(const FString& Key, FUWorksSteamID SteamID, int32 Count);
    
};

