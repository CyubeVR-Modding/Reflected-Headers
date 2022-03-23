#pragma once
#include "CoreMinimal.h"
#include "LiveLinkConnectMessage.generated.h"

USTRUCT()
struct FLiveLinkConnectMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 LiveLinkVersion;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkConnectMessage();
};

