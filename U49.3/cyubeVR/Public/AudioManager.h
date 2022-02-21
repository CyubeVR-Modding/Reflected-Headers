#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AudioManager.generated.h"

class USoundClass;
class USoundBase;

UCLASS()
class CYUBEVR_API AAudioManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USoundBase*> NatureSoundsDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USoundBase*> NatureSoundsNight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USoundBase*> NatureSoundsDayDesert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USoundBase*> NatureSoundsNightDesert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* BirdCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundClass* SoundClassDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundClass* SoundClassNight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundClass* SoundClassMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnowVolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GeneralVolumeMultiplier;
    
    AAudioManager();
};

