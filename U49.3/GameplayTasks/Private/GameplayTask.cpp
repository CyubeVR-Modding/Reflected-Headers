#include "GameplayTask.h"

void UGameplayTask::ReadyForActivation() {
}

void UGameplayTask::EndTask() {
}

UGameplayTask::UGameplayTask() {
    this->ResourceOverlapPolicy = (ETaskResourceOverlapPolicy)184;
    this->ChildTask = NULL;
}

