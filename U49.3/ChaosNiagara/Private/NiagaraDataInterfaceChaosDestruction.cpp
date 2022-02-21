#include "NiagaraDataInterfaceChaosDestruction.h"

UNiagaraDataInterfaceChaosDestruction::UNiagaraDataInterfaceChaosDestruction() {
    this->DataSourceType = (EDataSourceTypeEnum)200;
    this->DataProcessFrequency = 10;
    this->MaxNumberOfDataEntriesToSpawn = 50;
    this->DoSpawn = true;
    this->SpawnChance = 1.00f;
    this->SurfaceTypeToSpawn = -1;
    this->LocationFilteringMode = (ELocationFilteringModeEnum)200;
    this->LocationXToSpawn = (ELocationXToSpawnEnum)200;
    this->LocationYToSpawn = (ELocationYToSpawnEnum)200;
    this->LocationZToSpawn = (ELocationZToSpawnEnum)200;
    this->DataSortingType = (EDataSortTypeEnum)200;
    this->bGetExternalCollisionData = false;
    this->DoSpatialHash = false;
    this->MaxDataPerCell = 1;
    this->bApplyMaterialsFilter = false;
    this->bGetExternalBreakingData = true;
    this->bGetExternalTrailingData = false;
    this->InheritedVelocityMultiplier = 1.00f;
    this->RandomVelocityGenerationType = (ERandomVelocityGenerationTypeEnum)200;
    this->SpreadAngleMax = 30.00f;
    this->MaxLatency = 1.00f;
    this->DebugType = (EDebugTypeEnum)200;
    this->LastSpawnedPointID = -1;
    this->LastSpawnTime = -1.00f;
    this->SolverTime = 0.00f;
    this->TimeStampOfLastProcessedData = -1.00f;
}

