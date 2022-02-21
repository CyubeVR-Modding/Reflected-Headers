#pragma once
#include "CoreMinimal.h"
#include "GamepadTextInputDismissedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGamepadTextInputDismissedDelegate, bool, bSubmitted, int32, SubmittedText);

