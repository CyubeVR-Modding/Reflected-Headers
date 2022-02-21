#pragma once
#include "CoreMinimal.h"
#include "UpdateTagsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateTagsDelegate, bool, bSuccessful, const FString&, Content);

