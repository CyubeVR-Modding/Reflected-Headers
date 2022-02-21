#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "DeleteAccountDelegateDelegate.h"
#include "DeleteAccountMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebDeleteAccount.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebDeleteAccount : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDeleteAccountDelegate OnRequestCompleted;
    
    UPROPERTY()
    FDeleteAccountMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebDeleteAccount();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

