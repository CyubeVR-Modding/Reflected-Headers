#pragma once
#include "CoreMinimal.h"
#include "SupportGetAssetHistoryDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSupportGetAssetHistoryDelegate, bool, bSuccessful, const FString&, Content);

