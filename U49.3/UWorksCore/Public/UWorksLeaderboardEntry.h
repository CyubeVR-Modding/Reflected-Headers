#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksUGCHandle.h"
#include "UWorksLeaderboardEntry.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksLeaderboardEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FUWorksSteamID SteamID;
    
    UPROPERTY(BlueprintReadWrite)
    int32 GlobalRank;
    
    UPROPERTY(BlueprintReadWrite)
    int32 score;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Details;
    
    UPROPERTY(BlueprintReadWrite)
    FUWorksUGCHandle UGCHandle;
    
    FUWorksLeaderboardEntry();
};

