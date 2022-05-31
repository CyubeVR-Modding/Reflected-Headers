#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LivCaptureActor.generated.h"

class USceneCaptureComponent2D;

UCLASS(Abstract, Blueprintable)
class LIV_API ALivCaptureActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* PrimaryCaptureComponent;
    
    ALivCaptureActor();
};

