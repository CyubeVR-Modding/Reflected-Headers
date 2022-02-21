#pragma once
#include "CoreMinimal.h"
#include "GetPublisherAppOwnershipChangesMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetPublisherAppOwnershipChangesMinimalDelegate, bool, bSuccessful, const FString&, Content);

