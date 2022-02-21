#include "NiagaraEmitter.h"

UNiagaraEmitter::UNiagaraEmitter() {
    this->bLocalSpace = false;
    this->bDeterminism = false;
    this->RandomSeed = 0;
    this->AllocationMode = (EParticleAllocationMode)184;
    this->PreAllocationCount = 0;
    this->SimTarget = (ENiagaraSimTarget)184;
    this->MinDetailLevel = 0;
    this->MaxDetailLevel = 4;
    this->bInterpolatedSpawning = false;
    this->bFixedBounds = false;
    this->bUseMinDetailLevel = false;
    this->bUseMaxDetailLevel = false;
    this->bOverrideGlobalSpawnCountScale = false;
    this->bRequiresPersistentIDs = false;
    this->bCombineEventSpawn = false;
    this->MaxDeltaTimePerTick = 0.12f;
    this->DefaultShaderStageIndex = 0;
    this->MaxUpdateIterations = 1;
    this->bSimulationStagesEnabled = false;
    this->bDeprecatedShaderStagesEnabled = false;
    this->bLimitDeltaTime = true;
    this->UniqueEmitterName = TEXT("Emitter");
    this->GPUComputeScript = NULL;
}

