#pragma once
#include "CoreMinimal.h"
#include "UWorksPlayerInfo.h"
#include "PlayersUpdateMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPlayersUpdateMinimalDelegate, bool, bSuccessful, FUWorksPlayerInfo, Player);

