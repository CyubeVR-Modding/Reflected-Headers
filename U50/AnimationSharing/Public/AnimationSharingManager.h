#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimationSharingManager.generated.h"

class UAnimationSharingManager;
class USkeleton;
class UAnimSharingInstance;
class AActor;
class UAnimationSharingSetup;

UCLASS(BlueprintType, DefaultConfig)
class ANIMATIONSHARING_API UAnimationSharingManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeleton*> Skeletons;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSharingInstance*> PerSkeletonData;
    
public:
    UAnimationSharingManager();
    UFUNCTION(BlueprintCallable)
    void RegisterActorWithSkeletonBP(AActor* InActor, const USkeleton* SharingSkeleton);
    
    UFUNCTION(BlueprintCallable)
    static UAnimationSharingManager* GetAnimationSharingManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateAnimationSharingManager(UObject* WorldContextObject, const UAnimationSharingSetup* Setup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AnimationSharingEnabled();
    
};

