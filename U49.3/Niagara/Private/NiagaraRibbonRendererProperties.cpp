#include "NiagaraRibbonRendererProperties.h"

UNiagaraRibbonRendererProperties::UNiagaraRibbonRendererProperties() {
    this->Material = NULL;
    this->FacingMode = (ENiagaraRibbonFacingMode)128;
    this->DrawDirection = (ENiagaraRibbonDrawDirection)128;
    this->CurveTension = 0.00f;
    this->TessellationMode = (ENiagaraRibbonTessellationMode)128;
    this->TessellationFactor = 16;
    this->bUseConstantFactor = false;
    this->TessellationAngle = 15.00f;
    this->bScreenSpaceTessellation = true;
}

