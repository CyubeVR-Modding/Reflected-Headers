#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AttachedRain.generated.h"

class USceneCaptureComponent;
class UAudioComponent;

UCLASS()
class CYUBEVR_API AAttachedRain : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTemporary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USceneCaptureComponent* SceneCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UAudioComponent*> RainAudioComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AudioDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RowsX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RowsY;
    
    AAttachedRain();
    UFUNCTION(BlueprintCallable)
    void UpdateAudioLocations();
    
};

