#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetCommunityBadgeProgressDelegateDelegate.h"
#include "GetCommunityBadgeProgressMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetCommunityBadgeProgress.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetCommunityBadgeProgress : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetCommunityBadgeProgressDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetCommunityBadgeProgressMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetCommunityBadgeProgress();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 BadgeID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

