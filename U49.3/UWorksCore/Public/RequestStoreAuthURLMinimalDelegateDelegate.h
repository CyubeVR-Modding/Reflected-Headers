#pragma once
#include "CoreMinimal.h"
#include "RequestStoreAuthURLMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FRequestStoreAuthURLMinimalDelegate, bool, bSuccessful, const FString&, URL);

