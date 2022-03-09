#pragma once
#include "CoreMinimal.h"
#include "BakedDataInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "EPhononProbePlacementStrategy.h"
#include "PhononProbeVolume.generated.h"

class UPhononProbeComponent;

UCLASS()
class STEAMAUDIO_API APhononProbeVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhononProbePlacementStrategy PlacementStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightAboveFloor;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumProbes;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProbeDataSize;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBakedDataInfo> BakedDataInfo;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPhononProbeComponent* PhononProbeComponent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ProbeBoxFileName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ProbeBatchFileName;
    
    APhononProbeVolume();
};

