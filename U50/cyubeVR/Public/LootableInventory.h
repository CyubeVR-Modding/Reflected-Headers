#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MeshObject.h"
#include "LootableInventory.generated.h"

class AInventory;

UCLASS()
class CYUBEVR_API ALootableInventory : public AMeshObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SphereColor;
    
    ALootableInventory();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateVisuals();
    
};

