#include "NiagaraSimulationStageGeneric.h"

UNiagaraSimulationStageGeneric::UNiagaraSimulationStageGeneric() {
    this->IterationSource = (ENiagaraIterationSource)184;
    this->Iterations = 1;
    this->bSpawnOnly = false;
    this->bDisablePartialParticleUpdate = false;
}

