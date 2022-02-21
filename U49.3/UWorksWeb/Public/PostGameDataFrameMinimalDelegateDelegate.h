#pragma once
#include "CoreMinimal.h"
#include "PostGameDataFrameMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPostGameDataFrameMinimalDelegate, bool, bSuccessful, const FString&, Content);

