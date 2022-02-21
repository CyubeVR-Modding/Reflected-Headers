#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "CancelAgreementDelegateDelegate.h"
#include "CancelAgreementMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebCancelAgreement.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebCancelAgreement : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCancelAgreementDelegate OnRequestCompleted;
    
    UPROPERTY()
    FCancelAgreementMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCancelAgreement();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

