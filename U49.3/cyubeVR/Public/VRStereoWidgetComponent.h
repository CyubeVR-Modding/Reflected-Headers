#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
#include "VRStereoWidgetComponent.generated.h"

class UStereoLayerShape;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UVRStereoWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, NoClear)
    UStereoLayerShape* Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseEpicsWorldLockedStereo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSleeping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bNoAlphaChannel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bQuadPreserveTextureRatio: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    int32 Priority;
    
    UVRStereoWidgetComponent();
    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 InPriority);
    
    UFUNCTION(BlueprintPure)
    int32 GetPriority() const;
    
};

