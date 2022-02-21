#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceWeb.h"
#include "GetGameServerPlayerStatsForGameMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "UWorksInterfaceWebGameServerStats.generated.h"

class UUWorksRequestWebGetGameServerPlayerStatsForGame;

UCLASS(BlueprintType)
class UWORKSWEB_API UUWorksInterfaceWebGameServerStats : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebGameServerStats();
    UFUNCTION(BlueprintCallable)
    static void GetGameServerPlayerStatsForGameMinimal(const FString& Key, FUWorksGameID GameID, int32 AppID, const FString& RangeStart, const FString& RangeEnd, int32 MaxResults, const FGetGameServerPlayerStatsForGameMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetGameServerPlayerStatsForGame* GetGameServerPlayerStatsForGame();
    
};

