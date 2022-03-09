#pragma once
#include "CoreMinimal.h"
#include "EIplDirectOcclusionMode.generated.h"

UENUM(BlueprintType)
enum class EIplDirectOcclusionMode : uint8 {
    NONE,
    DIRECTOCCLUSION_NOTRANSMISSION,
    DIRECTOCCLUSION_TRANSMISSIONBYVOLUME,
    DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY,
};

