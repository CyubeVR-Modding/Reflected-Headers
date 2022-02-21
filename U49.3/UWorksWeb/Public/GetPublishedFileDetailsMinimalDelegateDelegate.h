#pragma once
#include "CoreMinimal.h"
#include "GetPublishedFileDetailsMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetPublishedFileDetailsMinimalDelegate, bool, bSuccessful, const FString&, Content);

