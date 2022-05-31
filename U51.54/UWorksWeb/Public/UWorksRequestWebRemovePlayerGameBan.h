#pragma once
#include "CoreMinimal.h"
#include "RemovePlayerGameBanMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "RemovePlayerGameBanDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebRemovePlayerGameBan.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebRemovePlayerGameBan : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemovePlayerGameBanDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemovePlayerGameBanMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRemovePlayerGameBan();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

