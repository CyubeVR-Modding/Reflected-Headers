#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentMobility -FallbackName=EComponentMobility
#include "DatasmithObjectTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "DatasmithSceneComponentTemplate.generated.h"

class USceneComponent;

UCLASS()
class DATASMITHCONTENT_API UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform RelativeTransform;
    
    UPROPERTY()
    TEnumAsByte<EComponentMobility::Type> Mobility;
    
    UPROPERTY(Export)
    TSoftObjectPtr<USceneComponent> AttachParent;
    
    UPROPERTY()
    bool bVisible;
    
    UPROPERTY()
    TSet<FName> tags;
    
    UDatasmithSceneComponentTemplate();
};

