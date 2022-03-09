#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyleContainerInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SlateWidgetStyleContainerBase.generated.h"

UCLASS()
class SLATECORE_API USlateWidgetStyleContainerBase : public UObject, public ISlateWidgetStyleContainerInterface {
    GENERATED_BODY()
public:
    USlateWidgetStyleContainerBase();
    
    // Fix for true pure virtual functions not being implemented
};

