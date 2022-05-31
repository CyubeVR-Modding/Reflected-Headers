#pragma once
#include "CoreMinimal.h"
#include "ELobbyBeaconJoinState.generated.h"

UENUM(BlueprintType)
enum class ELobbyBeaconJoinState : uint8 {
    None,
    SentJoinRequest,
    JoinRequestAcknowledged,
};

