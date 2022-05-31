#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LivCameraController.generated.h"

class ULivShotComponent;

UCLASS(Blueprintable, NotPlaceable, Transient)
class LIV_API ALivCameraController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    ULivShotComponent* CurrentShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentShotTime;
    
    ALivCameraController();
    UFUNCTION(BlueprintCallable)
    void TickCurrentShot(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentShot(ULivShotComponent* ShotComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULivShotComponent* GetCurrentShot() const;
    
};

