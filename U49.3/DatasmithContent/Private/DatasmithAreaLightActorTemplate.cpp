#include "DatasmithAreaLightActorTemplate.h"

UDatasmithAreaLightActorTemplate::UDatasmithAreaLightActorTemplate() {
    this->LightType = (EDatasmithAreaLightActorType)192;
    this->LightShape = (EDatasmithAreaLightActorShape)192;
    this->Intensity = 0.00f;
    this->IntensityUnits = (ELightUnits)192;
    this->Temperature = 0.00f;
    this->bUseIESBrightness = false;
    this->IESBrightnessScale = 0.00f;
    this->SourceRadius = 0.00f;
    this->SourceLength = 0.00f;
    this->AttenuationRadius = 0.00f;
}

