#pragma once
#include "CoreMinimal.h"
#include "ResolveVanityURLMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FResolveVanityURLMinimalDelegate, bool, bSuccessful, const FString&, Content);

