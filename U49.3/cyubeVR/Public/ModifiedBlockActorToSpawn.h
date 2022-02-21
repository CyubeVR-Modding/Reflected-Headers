#pragma once
#include "CoreMinimal.h"
#include "BlockInfoBP.h"
#include "EBlockTypeBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ModifiedBlockActorToSpawn.generated.h"

USTRUCT(BlueprintType)
struct FModifiedBlockActorToSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBlockTypeBP BlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlockInfoBP BlockInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsForMove;
    
    CYUBEVR_API FModifiedBlockActorToSpawn();
};

