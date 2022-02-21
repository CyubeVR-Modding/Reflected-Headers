#pragma once
#include "CoreMinimal.h"
#include "QueryLoginTokenMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FQueryLoginTokenMinimalDelegate, bool, bSuccessful, const FString&, Content);

