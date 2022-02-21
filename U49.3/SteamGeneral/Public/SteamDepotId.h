#pragma once
#include "CoreMinimal.h"
#include "UInt32.h"
#include "SteamDepotId.generated.h"

USTRUCT(BlueprintType)
struct FSteamDepotId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FUInt32 ID;
    
    STEAMGENERAL_API FSteamDepotId();
};

