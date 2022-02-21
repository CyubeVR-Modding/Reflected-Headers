#pragma once
#include "CoreMinimal.h"
#include "MeshObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LootableInventory.generated.h"

class AInventory;

UCLASS()
class CYUBEVR_API ALootableInventory : public AMeshObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SphereColor;
    
    ALootableInventory();
    UFUNCTION(BlueprintNativeEvent)
    void UpdateVisuals();
    
};

