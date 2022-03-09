#include "AnimationSharingManager.h"

class AActor;
class UAnimationSharingManager;
class UObject;
class USkeleton;
class UAnimationSharingSetup;

void UAnimationSharingManager::RegisterActorWithSkeletonBP(AActor* InActor, const USkeleton* SharingSkeleton) {
}

UAnimationSharingManager* UAnimationSharingManager::GetAnimationSharingManager(UObject* WorldContextObject) {
    return NULL;
}

bool UAnimationSharingManager::CreateAnimationSharingManager(UObject* WorldContextObject, const UAnimationSharingSetup* Setup) {
    return false;
}

bool UAnimationSharingManager::AnimationSharingEnabled() {
    return false;
}

UAnimationSharingManager::UAnimationSharingManager() {
}

