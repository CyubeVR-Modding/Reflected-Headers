#include "NiagaraDataInterfaceSkeletalMesh.h"

UNiagaraDataInterfaceSkeletalMesh::UNiagaraDataInterfaceSkeletalMesh() {
    this->SourceMode = (ENDISkeletalMesh_SourceMode)24;
    this->Source = NULL;
    this->SourceComponent = NULL;
    this->SkinningMode = (ENDISkeletalMesh_SkinningMode)24;
    this->WholeMeshLOD = -1;
    this->ExcludeBoneName = TEXT("Root");
    this->bExcludeBone = false;
    this->bRequireCurrentFrameData = true;
}

