#pragma once
#include "CoreMinimal.h"
#include "GetCommunityBadgeProgressDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetCommunityBadgeProgressMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetCommunityBadgeProgress.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetCommunityBadgeProgress : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetCommunityBadgeProgressDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetCommunityBadgeProgressMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetCommunityBadgeProgress();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 BadgeID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

