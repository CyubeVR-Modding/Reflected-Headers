#include "BTTask_BlueprintBase.h"

void UBTTask_BlueprintBase::SetFinishOnMessageWithId(FName MessageName, int32 requestID) {
}

void UBTTask_BlueprintBase::SetFinishOnMessage(FName MessageName) {
}







bool UBTTask_BlueprintBase::IsTaskExecuting() const {
    return false;
}

bool UBTTask_BlueprintBase::IsTaskAborting() const {
    return false;
}

void UBTTask_BlueprintBase::FinishExecute(bool bSuccess) {
}

void UBTTask_BlueprintBase::FinishAbort() {
}

UBTTask_BlueprintBase::UBTTask_BlueprintBase() {
    this->AIOwner = NULL;
    this->ActorOwner = NULL;
    this->bShowPropertyDetails = true;
}

