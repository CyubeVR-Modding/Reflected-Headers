#pragma once
#include "CoreMinimal.h"
#include "GetExportedAssetsForUserMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetExportedAssetsForUserMinimalDelegate, bool, bSuccessful, const FString&, Content);

