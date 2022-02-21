#pragma once
#include "CoreMinimal.h"
#include "OnListItemScrolledIntoViewDynamicDelegate.generated.h"

class UUserWidget;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListItemScrolledIntoViewDynamic, UObject*, Item, UUserWidget*, Widget);

