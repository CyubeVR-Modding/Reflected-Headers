#pragma once
#include "CoreMinimal.h"
#include "OnListEntryInitializedDynamicDelegate.generated.h"

class UUserWidget;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListEntryInitializedDynamic, UObject*, Item, UUserWidget*, Widget);

