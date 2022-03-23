#pragma once
#include "CoreMinimal.h"
#include "ComponentTrackingActivatedSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ComponentTrackingDeactivatedSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SteamVRTrackingReferences.generated.h"

class UStaticMeshComponent;
class UStaticMesh;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class STEAMVRINPUTDEVICE_API USteamVRTrackingReferences : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FComponentTrackingActivatedSignature OnTrackedDeviceActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FComponentTrackingDeactivatedSignature OnTrackedDeviceDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveDevicePollFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TrackingReferenceScale;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> TrackingReferences;
    
    USteamVRTrackingReferences();
    UFUNCTION(BlueprintCallable)
    bool ShowTrackingReferences(UStaticMesh* TrackingReferenceMesh);
    
    UFUNCTION(BlueprintCallable)
    void HideTrackingReferences();
    
};

