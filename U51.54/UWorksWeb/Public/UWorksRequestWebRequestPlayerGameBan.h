#pragma once
#include "CoreMinimal.h"
#include "RequestPlayerGameBanDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "RequestPlayerGameBanMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebRequestPlayerGameBan.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebRequestPlayerGameBan : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestPlayerGameBanDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestPlayerGameBanMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRequestPlayerGameBan();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID ReportID, const FString& CheatDescription, int32 Duration, bool bDelayBan);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

