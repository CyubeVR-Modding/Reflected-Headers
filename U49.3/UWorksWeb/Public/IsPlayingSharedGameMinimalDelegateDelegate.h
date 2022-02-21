#pragma once
#include "CoreMinimal.h"
#include "IsPlayingSharedGameMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FIsPlayingSharedGameMinimalDelegate, bool, bSuccessful, const FString&, Content);

