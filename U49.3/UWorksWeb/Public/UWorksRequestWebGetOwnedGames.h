#pragma once
#include "CoreMinimal.h"
#include "GetOwnedGamesDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetOwnedGamesMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetOwnedGames.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetOwnedGames : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetOwnedGamesDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetOwnedGamesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetOwnedGames();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

