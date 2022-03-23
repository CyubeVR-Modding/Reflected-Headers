#include "PhononSpatializationSourceSettings.h"

UPhononSpatializationSourceSettings::UPhononSpatializationSourceSettings() {
    this->SpatializationMethod = EIplSpatializationMethod::HRTF;
    this->HrtfInterpolationMethod = EIplHrtfInterpolationMethod::NEAREST;
}

