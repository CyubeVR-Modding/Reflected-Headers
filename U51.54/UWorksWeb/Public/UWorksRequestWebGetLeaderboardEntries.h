#pragma once
#include "CoreMinimal.h"
#include "GetLeaderboardEntriesDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetLeaderboardEntriesMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetLeaderboardEntries.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetLeaderboardEntries : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetLeaderboardEntriesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetLeaderboardEntriesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetLeaderboardEntries();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardID, int32 DataRequest, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

