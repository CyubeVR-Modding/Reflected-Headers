#pragma once
#include "CoreMinimal.h"
#include "RBFEntry.h"
#include "ERBFFunctionType.h"
#include "ERBFDistanceMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "RBFTarget.generated.h"

USTRUCT()
struct ANIMGRAPHRUNTIME_API FRBFTarget : public FRBFEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve CustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERBFDistanceMethod DistanceMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERBFFunctionType FunctionType;
    
    FRBFTarget();
};

