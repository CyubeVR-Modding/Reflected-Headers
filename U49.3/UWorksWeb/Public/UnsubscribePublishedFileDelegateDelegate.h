#pragma once
#include "CoreMinimal.h"
#include "UnsubscribePublishedFileDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUnsubscribePublishedFileDelegate, bool, bSuccessful, const FString&, Content);

