#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetCommunityBadgeProgressDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetCommunityBadgeProgressMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetCommunityBadgeProgress.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetCommunityBadgeProgress : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetCommunityBadgeProgressDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetCommunityBadgeProgressMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetCommunityBadgeProgress();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 BadgeID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

