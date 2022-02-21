#pragma once
#include "CoreMinimal.h"
#include "SetDeveloperMetadataMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FSetDeveloperMetadataMinimalDelegate, bool, bSuccessful, const FString&, Content);

