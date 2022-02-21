#pragma once
#include "CoreMinimal.h"
#include "GetPopularDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetPopularDelegate, bool, bSuccessful, const FString&, Content);

