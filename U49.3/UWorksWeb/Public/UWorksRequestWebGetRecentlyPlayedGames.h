#pragma once
#include "CoreMinimal.h"
#include "GetRecentlyPlayedGamesDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetRecentlyPlayedGamesMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetRecentlyPlayedGames.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetRecentlyPlayedGames : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetRecentlyPlayedGamesDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetRecentlyPlayedGamesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetRecentlyPlayedGames();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

