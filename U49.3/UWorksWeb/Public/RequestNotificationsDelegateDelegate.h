#pragma once
#include "CoreMinimal.h"
#include "RequestNotificationsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRequestNotificationsDelegate, bool, bSuccessful, const FString&, Content);

