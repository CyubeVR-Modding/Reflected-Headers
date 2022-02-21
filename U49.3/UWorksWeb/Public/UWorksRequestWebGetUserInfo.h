#pragma once
#include "CoreMinimal.h"
#include "GetUserInfoDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetUserInfoMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetUserInfo.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetUserInfo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetUserInfoDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetUserInfoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserInfo();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, const FString& IPAddress);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

