#pragma once
#include "CoreMinimal.h"
#include "EngineServiceAuthDeny.generated.h"

USTRUCT()
struct FEngineServiceAuthDeny {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserToDeny;
    
    ENGINEMESSAGES_API FEngineServiceAuthDeny();
};

