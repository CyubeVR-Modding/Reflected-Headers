#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MeshObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Chest.generated.h"

class AChestInternals;

UCLASS()
class CYUBEVR_API AChest : public AMeshObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChestInternals* ChestInternals;
    
    AChest();
    UFUNCTION(BlueprintCallable)
    bool UseActorCustomLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetChestRotation(FRotator rot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetChestRotation();
    
    UFUNCTION(BlueprintCallable)
    FVector GetActorCustomLocation();
    
};

