#pragma once
#include "CoreMinimal.h"
#include "EPhononProbePlacementStrategy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "BakedDataInfo.h"
#include "PhononProbeVolume.generated.h"

class UPhononProbeComponent;

UCLASS()
class STEAMAUDIO_API APhononProbeVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPhononProbePlacementStrategy PlacementStrategy;
    
    UPROPERTY(EditAnywhere)
    float HorizontalSpacing;
    
    UPROPERTY(EditAnywhere)
    float HeightAboveFloor;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumProbes;
    
    UPROPERTY(VisibleAnywhere)
    int32 ProbeDataSize;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FBakedDataInfo> BakedDataInfo;
    
    UPROPERTY(Export)
    UPhononProbeComponent* PhononProbeComponent;
    
    UPROPERTY()
    FString ProbeBoxFileName;
    
    UPROPERTY()
    FString ProbeBatchFileName;
    
    APhononProbeVolume();
};

