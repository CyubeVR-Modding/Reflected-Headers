#pragma once
#include "CoreMinimal.h"
#include "PopulateItemDescriptionsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPopulateItemDescriptionsDelegate, bool, bSuccessful, const FString&, Content);

