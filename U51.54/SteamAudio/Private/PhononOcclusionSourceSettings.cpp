#include "PhononOcclusionSourceSettings.h"

UPhononOcclusionSourceSettings::UPhononOcclusionSourceSettings() {
    this->DirectOcclusionMode = EIplDirectOcclusionMode::NONE;
    this->DirectOcclusionMethod = EIplDirectOcclusionMethod::RAYCAST;
    this->DirectOcclusionSourceRadius = 100.00f;
    this->DirectAttenuation = true;
    this->AirAbsorption = true;
}

