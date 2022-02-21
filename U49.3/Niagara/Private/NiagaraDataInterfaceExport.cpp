#include "NiagaraDataInterfaceExport.h"

UNiagaraDataInterfaceExport::UNiagaraDataInterfaceExport() {
    this->GPUAllocationMode = (ENDIExport_GPUAllocationMode)72;
    this->GPUAllocationFixedSize = 64;
    this->GPUAllocationPerParticleSize = 1.00f;
}

