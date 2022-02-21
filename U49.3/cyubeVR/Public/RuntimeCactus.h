#pragma once
#include "CoreMinimal.h"
#include "ReceiveLightActor.h"
#include "ETreeType.h"
#include "RuntimeCactus.generated.h"

class UStaticMeshComponent;

UCLASS()
class CYUBEVR_API ARuntimeCactus : public AReceiveLightActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SMC;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETreeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool damaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDestroyed;
    
    ARuntimeCactus();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetType(ETreeType NewType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetToPoolBP();
    
};

