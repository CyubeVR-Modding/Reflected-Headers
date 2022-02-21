#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=EResultBP -FallbackName=EResultBP
#include "SteamResult.generated.h"

USTRUCT(BlueprintType)
struct FSteamResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EResultBP Result;
    
    STEAMWORKSHOP_API FSteamResult();
};

