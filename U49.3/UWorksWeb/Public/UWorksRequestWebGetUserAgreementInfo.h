#pragma once
#include "CoreMinimal.h"
#include "GetUserAgreementInfoMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetUserAgreementInfoDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetUserAgreementInfo.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetUserAgreementInfo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetUserAgreementInfoDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetUserAgreementInfoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserAgreementInfo();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

