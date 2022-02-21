#include "PhononOcclusionSourceSettings.h"

UPhononOcclusionSourceSettings::UPhononOcclusionSourceSettings() {
    this->DirectOcclusionMode = (EIplDirectOcclusionMode)224;
    this->DirectOcclusionMethod = (EIplDirectOcclusionMethod)224;
    this->DirectOcclusionSourceRadius = 100.00f;
    this->DirectAttenuation = true;
    this->AirAbsorption = true;
}

