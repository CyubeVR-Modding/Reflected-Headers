#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CaptureActor.generated.h"

class USceneCaptureComponent2D;

UCLASS()
class CYUBEVR_API ACaptureActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USceneCaptureComponent2D* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SizeY;
    
    ACaptureActor();
    UFUNCTION(BlueprintCallable)
    void StartCapture();
    
    UFUNCTION(BlueprintCallable)
    void EndCapture();
    
};

