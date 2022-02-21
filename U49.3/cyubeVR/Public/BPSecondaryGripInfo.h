#pragma once
#include "CoreMinimal.h"
#include "Transform_NetQuantize.h"
#include "BPSecondaryGripInfo.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FBPSecondaryGripInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bHasSecondaryAttachment;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USceneComponent* SecondaryAttachment;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform_NetQuantize SecondaryRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsSlotGrip;
    
    UPROPERTY(BlueprintReadWrite)
    FName SecondarySlotName;
    
    UPROPERTY()
    float LerpToRate;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated)
    float SecondaryGripDistance;
    
    CYUBEVR_API FBPSecondaryGripInfo();
};

