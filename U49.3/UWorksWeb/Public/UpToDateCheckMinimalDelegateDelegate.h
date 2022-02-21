#pragma once
#include "CoreMinimal.h"
#include "UpToDateCheckMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FUpToDateCheckMinimalDelegate, bool, bSuccessful, const FString&, Content);

