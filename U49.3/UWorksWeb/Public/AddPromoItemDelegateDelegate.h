#pragma once
#include "CoreMinimal.h"
#include "AddPromoItemDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddPromoItemDelegate, bool, bSuccessful, const FString&, Content);

