#include "NiagaraSpriteRendererProperties.h"

UNiagaraSpriteRendererProperties::UNiagaraSpriteRendererProperties() {
    this->Material = NULL;
    this->SourceMode = (ENiagaraRendererSourceDataMode)200;
    this->Alignment = (ENiagaraSpriteAlignment)200;
    this->FacingMode = (ENiagaraSpriteFacingMode)200;
    this->SortMode = (ENiagaraSortMode)200;
    this->bSubImageBlend = false;
    this->bRemoveHMDRollInVR = false;
    this->bSortOnlyWhenTranslucent = true;
    this->bGpuLowLatencyTranslucency = true;
    this->MinFacingCameraBlendDistance = 0.00f;
    this->MaxFacingCameraBlendDistance = 0.00f;
    this->bEnableCameraDistanceCulling = false;
    this->MinCameraDistance = 0.00f;
    this->MaxCameraDistance = 1000.00f;
    this->RendererVisibility = 0;
}

