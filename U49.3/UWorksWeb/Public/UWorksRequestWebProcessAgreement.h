#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "ProcessAgreementMinimalDelegateDelegate.h"
#include "ProcessAgreementDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebProcessAgreement.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebProcessAgreement : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FProcessAgreementDelegate OnRequestCompleted;
    
    UPROPERTY()
    FProcessAgreementMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebProcessAgreement();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& OrderID, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, int32 Amount, const FString& Currency);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

