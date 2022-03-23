#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ERuntimeMeshMobility.h"
#include "RuntimeMeshActor.generated.h"

class URuntimeMeshComponent;

UCLASS()
class RUNTIMEMESHCOMPONENT_API ARuntimeMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeMeshComponent* RuntimeMeshComponent;
    
public:
    ARuntimeMeshActor();
    UFUNCTION(BlueprintCallable)
    void SetRuntimeMeshMobility(ERuntimeMeshMobility NewMobility);
    
    UFUNCTION(BlueprintCallable)
    ERuntimeMeshMobility GetRuntimeMeshMobility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URuntimeMeshComponent* GetRuntimeMeshComponent() const;
    
};

