#pragma once
#include "CoreMinimal.h"
#include "AdjustAgreementMinimalDelegateDelegate.h"
#include "AdjustAgreementDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebAdjustAgreement.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebAdjustAgreement : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAdjustAgreementDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAdjustAgreementMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebAdjustAgreement();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, const FString& NextProcessDate);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

