#include "ARTextureCameraDepth.h"

UARTextureCameraDepth::UARTextureCameraDepth() {
    this->DepthQuality = (EARDepthQuality)64;
    this->DepthAccuracy = (EARDepthAccuracy)64;
    this->bIsTemporallySmoothed = false;
}

