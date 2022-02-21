#pragma once
#include "CoreMinimal.h"
#include "GetSchemaForGameMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetSchemaForGameMinimalDelegate, bool, bSuccessful, const FString&, Content);

