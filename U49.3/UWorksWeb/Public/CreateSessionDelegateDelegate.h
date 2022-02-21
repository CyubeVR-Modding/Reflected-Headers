#pragma once
#include "CoreMinimal.h"
#include "CreateSessionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCreateSessionDelegate, bool, bSuccessful, const FString&, Content);

