#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeBase -FallbackName=CameraShakeBase
#include "SequenceCameraShake.generated.h"

class UCameraAnimationSequence;
class USequenceCameraShakeSequencePlayer;
class USequenceCameraShakeCameraStandIn;

UCLASS(EditInlineNew)
class TEMPLATESEQUENCE_API USequenceCameraShake : public UCameraShakeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnimationSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSegmentDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomSegment;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USequenceCameraShakeSequencePlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USequenceCameraShakeCameraStandIn* CameraStandIn;
    
public:
    USequenceCameraShake();
};

