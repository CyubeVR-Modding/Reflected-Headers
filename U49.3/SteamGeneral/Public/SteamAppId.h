#pragma once
#include "CoreMinimal.h"
#include "UInt32.h"
#include "SteamAppId.generated.h"

USTRUCT(BlueprintType)
struct FSteamAppId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FUInt32 ID;
    
    STEAMGENERAL_API FSteamAppId();
};

