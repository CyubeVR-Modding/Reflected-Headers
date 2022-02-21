#pragma once
#include "CoreMinimal.h"
#include "GetCollectionDetailsMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetCollectionDetailsMinimalDelegate, bool, bSuccessful, const FString&, Content);

