#pragma once
#include "CoreMinimal.h"
#include "GetCollectionDetailsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetCollectionDetailsDelegate, bool, bSuccessful, const FString&, Content);

