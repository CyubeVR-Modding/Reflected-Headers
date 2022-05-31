#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SetBanStatusDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "SetBanStatusMinimalDelegateDelegate.h"
#include "UWorksRequestWebSetBanStatus.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebSetBanStatus : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetBanStatusDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetBanStatusMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetBanStatus();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, bool bBanned, int32 BanSeconds);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

