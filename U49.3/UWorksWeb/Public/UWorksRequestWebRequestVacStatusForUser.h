#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "RequestVacStatusForUserDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RequestVacStatusForUserMinimalDelegateDelegate.h"
#include "UWorksRequestWebRequestVacStatusForUser.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebRequestVacStatusForUser : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRequestVacStatusForUserDelegate OnRequestCompleted;
    
    UPROPERTY()
    FRequestVacStatusForUserMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRequestVacStatusForUser();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

