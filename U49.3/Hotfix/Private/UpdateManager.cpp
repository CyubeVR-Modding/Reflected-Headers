#include "UpdateManager.h"

UUpdateManager::UUpdateManager() {
    this->HotfixCheckCompleteDelay = 0.10f;
    this->UpdateCheckCompleteDelay = 0.50f;
    this->HotfixAvailabilityCheckCompleteDelay = 0.10f;
    this->UpdateCheckAvailabilityCompleteDelay = 0.10f;
    this->AppSuspendedUpdateCheckTimeSeconds = 600;
    this->bPlatformEnvironmentDetected = true;
    this->bInitialUpdateFinished = false;
    this->bCheckHotfixAvailabilityOnly = false;
    this->CurrentUpdateState = (EUpdateState)144;
    this->WorstNumFilesPendingLoadViewed = 0;
    this->LastHotfixResult = (EHotfixResult)144;
    this->LastCompletionResult[0] = (EUpdateCompletionStatus)144;
    this->LastCompletionResult[1] = (EUpdateCompletionStatus)144;
    this->UpdateStateEnum = NULL;
    this->UpdateCompletionEnum = NULL;
}

