#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PathFollowingComponent.h"
#include "CrowdAgentInterface.h"
#include "CrowdFollowingComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class AIMODULE_API UCrowdFollowingComponent : public UPathFollowingComponent, public ICrowdAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector CrowdAgentMoveDirection;
    
    UCrowdFollowingComponent();
    UFUNCTION(BlueprintCallable)
    void SuspendCrowdSteering(bool bSuspend);
    
    
    // Fix for true pure virtual functions not being implemented
};

