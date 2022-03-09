#pragma once
#include "CoreMinimal.h"
#include "StartSecureMultiplayerSessionDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "StartSecureMultiplayerSessionMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebStartSecureMultiplayerSession.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebStartSecureMultiplayerSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStartSecureMultiplayerSessionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStartSecureMultiplayerSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebStartSecureMultiplayerSession();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

