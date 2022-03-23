#pragma once
#include "CoreMinimal.h"
#include "ELobbyBeaconJoinState.generated.h"

UENUM()
enum class ELobbyBeaconJoinState : uint8 {
    None,
    SentJoinRequest,
    JoinRequestAcknowledged,
};

