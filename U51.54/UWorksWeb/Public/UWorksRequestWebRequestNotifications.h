#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "RequestNotificationsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RequestNotificationsMinimalDelegateDelegate.h"
#include "UWorksRequestWebRequestNotifications.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebRequestNotifications : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestNotificationsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestNotificationsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRequestNotifications();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

