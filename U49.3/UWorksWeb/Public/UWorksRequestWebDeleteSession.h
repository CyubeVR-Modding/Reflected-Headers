#pragma once
#include "CoreMinimal.h"
#include "DeleteSessionMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "DeleteSessionDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebDeleteSession.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebDeleteSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDeleteSessionDelegate OnRequestCompleted;
    
    UPROPERTY()
    FDeleteSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebDeleteSession();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SessionId, int32 AppID, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

