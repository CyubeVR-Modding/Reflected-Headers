#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SteamVRChaperoneComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class STEAMVR_API USteamVRChaperoneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSteamVRChaperoneEvent);
    
    UPROPERTY(BlueprintAssignable)
    FSteamVRChaperoneEvent OnLeaveBounds;
    
    UPROPERTY(BlueprintAssignable)
    FSteamVRChaperoneEvent OnReturnToBounds;
    
    USteamVRChaperoneComponent();
    UFUNCTION(BlueprintPure)
    TArray<FVector> GetBounds() const;
    
};

