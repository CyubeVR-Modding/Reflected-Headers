#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiagaraDataInterfaceFieldSystem.generated.h"

class AActor;
class UBlueprint;

UCLASS(EditInlineNew)
class CHAOSNIAGARA_API UNiagaraDataInterfaceFieldSystem : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlueprint* BlueprintSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector FieldDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxBounds;
    
    UNiagaraDataInterfaceFieldSystem();
};

