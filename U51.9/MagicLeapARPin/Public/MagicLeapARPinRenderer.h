#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MagicLeapARPinRenderer.generated.h"

class AMagicLeapARPinInfoActorBase;

UCLASS()
class MAGICLEAPARPIN_API AMagicLeapARPinRenderer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfoActorsVisibilityOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AMagicLeapARPinInfoActorBase*> AllInfoActors;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMagicLeapARPinInfoActorBase> ClassToSpawn;
    
public:
    AMagicLeapARPinRenderer();
private:
    UFUNCTION(BlueprintCallable)
    void SetVisibilityOverride(const bool InVisibilityOverride);
    
};

