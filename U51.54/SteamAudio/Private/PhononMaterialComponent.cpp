#include "PhononMaterialComponent.h"

UPhononMaterialComponent::UPhononMaterialComponent() {
    this->MaterialIndex = 0;
    this->MaterialPreset = EPhononMaterial::GENERIC;
    this->LowFreqAbsorption = 0.10f;
    this->MidFreqAbsorption = 0.20f;
    this->HighFreqAbsorption = 0.30f;
    this->LowFreqTransmission = 0.10f;
    this->MidFreqTransmission = 0.05f;
    this->HighFreqTransmission = 0.03f;
    this->Scattering = 0.05f;
}

