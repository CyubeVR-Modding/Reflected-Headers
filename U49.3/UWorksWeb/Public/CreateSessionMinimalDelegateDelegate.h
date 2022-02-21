#pragma once
#include "CoreMinimal.h"
#include "CreateSessionMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FCreateSessionMinimalDelegate, bool, bSuccessful, const FString&, Content);

