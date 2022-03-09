#pragma once
#include "CoreMinimal.h"
#include "SessionServicePing.generated.h"

USTRUCT()
struct FSessionServicePing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserName;
    
    SESSIONMESSAGES_API FSessionServicePing();
};
