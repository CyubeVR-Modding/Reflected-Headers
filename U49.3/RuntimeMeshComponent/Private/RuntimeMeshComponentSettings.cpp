#include "RuntimeMeshComponentSettings.h"

URuntimeMeshComponentSettings::URuntimeMeshComponentSettings() {
    this->DefaultUpdateFrequency = (ERuntimeMeshUpdateFrequency)136;
    this->bUse32BitIndicesByDefault = false;
    this->bUseHighPrecisionTexCoordsByDefault = false;
    this->bUseHighPrecisionTangentsByDefault = false;
    this->bCookCollisionAsync = false;
    this->DefaultCookingMode = (ERuntimeMeshCollisionCookingMode)136;
    this->SystemThreadDivisor = 2;
    this->ThreadPriority = (ERuntimeMeshThreadingPriority)136;
    this->ThreadStackSize = 0;
    this->MaxAllowedTimePerTick = 11.00f;
}

