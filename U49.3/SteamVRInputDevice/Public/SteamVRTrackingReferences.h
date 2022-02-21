#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ComponentTrackingActivatedSignatureDelegate.h"
#include "ComponentTrackingDeactivatedSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SteamVRTrackingReferences.generated.h"

class UStaticMeshComponent;
class UStaticMesh;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class STEAMVRINPUTDEVICE_API USteamVRTrackingReferences : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FComponentTrackingActivatedSignature OnTrackedDeviceActivated;
    
    UPROPERTY(BlueprintAssignable)
    FComponentTrackingDeactivatedSignature OnTrackedDeviceDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActiveDevicePollFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TrackingReferenceScale;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TArray<UStaticMeshComponent*> TrackingReferences;
    
    USteamVRTrackingReferences();
    UFUNCTION(BlueprintCallable)
    bool ShowTrackingReferences(UStaticMesh* TrackingReferenceMesh);
    
    UFUNCTION(BlueprintCallable)
    void HideTrackingReferences();
    
};

