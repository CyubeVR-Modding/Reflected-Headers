#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "FindLeaderboardMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FFindLeaderboardMinimalDelegate, bool, bSuccessful, FUWorksSteamLeaderboard, SteamLeaderboard, bool, bLeaderboardFound);

