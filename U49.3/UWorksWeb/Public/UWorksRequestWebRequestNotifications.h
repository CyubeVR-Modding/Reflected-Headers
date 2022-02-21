#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RequestNotificationsDelegateDelegate.h"
#include "RequestNotificationsMinimalDelegateDelegate.h"
#include "UWorksRequestWebRequestNotifications.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebRequestNotifications : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRequestNotificationsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FRequestNotificationsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRequestNotifications();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

