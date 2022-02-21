#include "NiagaraMeshRendererProperties.h"

UNiagaraMeshRendererProperties::UNiagaraMeshRendererProperties() {
    this->ParticleMesh = NULL;
    this->SortMode = (ENiagaraSortMode)96;
    this->bOverrideMaterials = false;
    this->bSortOnlyWhenTranslucent = true;
    this->bSubImageBlend = false;
    this->FacingMode = (ENiagaraMeshFacingMode)96;
    this->bLockedAxisEnable = false;
    this->LockedAxisSpace = (ENiagaraMeshLockedAxisSpace)96;
    this->PivotOffsetSpace = (ENiagaraMeshPivotOffsetSpace)96;
    this->bEnableFrustumCulling = false;
    this->bEnableCameraDistanceCulling = false;
    this->MinCameraDistance = 0.00f;
    this->MaxCameraDistance = 1000.00f;
    this->RendererVisibility = 0;
}

