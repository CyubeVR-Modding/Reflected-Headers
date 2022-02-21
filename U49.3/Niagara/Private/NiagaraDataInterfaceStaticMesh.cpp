#include "NiagaraDataInterfaceStaticMesh.h"

UNiagaraDataInterfaceStaticMesh::UNiagaraDataInterfaceStaticMesh() {
    this->SourceMode = (ENDIStaticMesh_SourceMode)48;
    this->DefaultMesh = NULL;
    this->Source = NULL;
    this->SourceComponent = NULL;
    this->bUsePhysicsBodyVelocity = false;
}

