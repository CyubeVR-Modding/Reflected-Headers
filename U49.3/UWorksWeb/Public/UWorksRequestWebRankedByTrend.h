#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RankedByTrendDelegateDelegate.h"
#include "RankedByTrendMinimalDelegateDelegate.h"
#include "UWorksRequestWebRankedByTrend.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebRankedByTrend : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRankedByTrendDelegate OnRequestCompleted;
    
    UPROPERTY()
    FRankedByTrendMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRankedByTrend();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 StartIndex, int32 Count, int32 TagCount, int32 UserTagCount, bool bHasAppAdminAccess, int32 fileType, int32 Days, TArray<FString> tags, TArray<FString> UserTags);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

