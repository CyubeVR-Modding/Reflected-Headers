#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "DownloadLeaderboardEntriesForUsersMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FourParams(FDownloadLeaderboardEntriesForUsersMinimalDelegate, bool, bSuccessful, FUWorksSteamLeaderboard, SteamLeaderboard, FUWorksSteamLeaderboardEntries, SteamLeaderboardEntries, int32, EntryCount);

