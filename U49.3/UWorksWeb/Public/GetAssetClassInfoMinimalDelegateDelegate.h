#pragma once
#include "CoreMinimal.h"
#include "GetAssetClassInfoMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetAssetClassInfoMinimalDelegate, bool, bSuccessful, const FString&, Content);

