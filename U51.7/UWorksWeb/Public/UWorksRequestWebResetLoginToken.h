#pragma once
#include "CoreMinimal.h"
#include "ResetLoginTokenDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "ResetLoginTokenMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebResetLoginToken.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebResetLoginToken : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FResetLoginTokenDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FResetLoginTokenMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebResetLoginToken();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

