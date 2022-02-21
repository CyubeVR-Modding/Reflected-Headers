#pragma once
#include "CoreMinimal.h"
#include "ReceiveLightActor.h"
#include "ETreeType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LogItem.generated.h"

class UMeshComponent;

UCLASS()
class CYUBEVR_API ALogItem : public AReceiveLightActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETreeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeCenterLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UMeshComponent* Mesh;
    
    ALogItem();
    UFUNCTION()
    bool UseActorCustomLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive(ETreeType _Type);
    
    UFUNCTION(BlueprintNativeEvent)
    void ResetToPoolBP();
    
    UFUNCTION()
    FVector GetActorCustomLocation();
    
};

