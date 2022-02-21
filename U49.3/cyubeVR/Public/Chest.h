#pragma once
#include "CoreMinimal.h"
#include "MeshObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Chest.generated.h"

class AChestInternals;

UCLASS()
class CYUBEVR_API AChest : public AMeshObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AChestInternals* ChestInternals;
    
    AChest();
    UFUNCTION()
    bool UseActorCustomLocation();
    
    UFUNCTION(BlueprintNativeEvent)
    void SetChestRotation(FRotator rot);
    
    UFUNCTION(BlueprintNativeEvent)
    FRotator GetChestRotation();
    
    UFUNCTION()
    FVector GetActorCustomLocation();
    
};

