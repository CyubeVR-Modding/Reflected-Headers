#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "SingleClickInputBehavior.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API USingleClickInputBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool HitTestOnRelease;
    
    USingleClickInputBehavior();
};

