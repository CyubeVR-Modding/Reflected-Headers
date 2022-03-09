#include "LivLocalPlayerSubsystem.h"
#include "Templates/SubclassOf.h"

class UPrimitiveComponent;
class ULivCaptureBase;
class AActor;
class ULocalPlayer;
class ULivWorldSubsystem;

void ULivLocalPlayerSubsystem::ShowComponent(UPrimitiveComponent* InComponent) {
}

void ULivLocalPlayerSubsystem::ShowActor(AActor* InActor) {
}

void ULivLocalPlayerSubsystem::ResetCapture() {
}

bool ULivLocalPlayerSubsystem::IsCaptureActive() const {
    return false;
}

void ULivLocalPlayerSubsystem::HideComponent(UPrimitiveComponent* InComponent) {
}

void ULivLocalPlayerSubsystem::HideActor(AActor* InActor) {
}

FTransform ULivLocalPlayerSubsystem::GetTrackingOriginTransform() const {
    return FTransform{};
}

ULocalPlayer* ULivLocalPlayerSubsystem::GetLocalPlayerBP() const {
    return NULL;
}

ULivWorldSubsystem* ULivLocalPlayerSubsystem::GetLivWorldSubsystem() const {
    return NULL;
}

TSubclassOf<ULivCaptureBase> ULivLocalPlayerSubsystem::GetCaptureComponentClass() const {
    return NULL;
}

void ULivLocalPlayerSubsystem::ClearHiddenComponents() {
}

void ULivLocalPlayerSubsystem::ClearHiddenActors() {
}

ULivLocalPlayerSubsystem::ULivLocalPlayerSubsystem() {
}

