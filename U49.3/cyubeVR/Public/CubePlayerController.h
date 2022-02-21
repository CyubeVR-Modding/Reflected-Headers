#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "CubePlayerController.generated.h"

UCLASS()
class CYUBEVR_API ACubePlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 STAT_BlocksDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 STAT_BlocksDestroyedInLast10Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 STAT_BlocksDestroyedInLast10MinutesBest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUnrealisticCameraHeight;
    
    ACubePlayerController();
    UFUNCTION(BlueprintCallable)
    void IncrementBlocksDestroyed(int32 Increment, EBlockTypeBP Type);
    
};

