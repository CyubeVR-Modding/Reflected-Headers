#pragma once
#include "CoreMinimal.h"
#include "GetExportedAssetsForUserDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetExportedAssetsForUserDelegate, bool, bSuccessful, const FString&, Content);

