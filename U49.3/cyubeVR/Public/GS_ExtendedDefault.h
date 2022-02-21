#pragma once
#include "CoreMinimal.h"
#include "GS_Default.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
#include "GS_ExtendedDefault.generated.h"

UCLASS(EditInlineNew)
class UGS_ExtendedDefault : public UGS_Default {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLimitGripScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector_NetQuantize100 MinimumGripScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector_NetQuantize100 MaximumGripScaling;
    
    UGS_ExtendedDefault();
};

