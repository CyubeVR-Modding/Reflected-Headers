#pragma once
#include "CoreMinimal.h"
#include "GameOverlayActivatedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameOverlayActivatedDelegate, bool, bActive);

