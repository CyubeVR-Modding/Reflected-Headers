#pragma once
#include "CoreMinimal.h"
#include "EUWorksP2PSessionError.h"
#include "UWorksP2PSessionState.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksP2PSessionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bConnectionActive;
    
    UPROPERTY(BlueprintReadWrite)
    bool bConnecting;
    
    UPROPERTY(BlueprintReadWrite)
    EUWorksP2PSessionError P2PSessionError;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUsingRelay;
    
    UPROPERTY(BlueprintReadWrite)
    int32 BytesQueuedForSend;
    
    UPROPERTY(BlueprintReadWrite)
    int32 PacketsQueuedForSend;
    
    FUWorksP2PSessionState();
};

