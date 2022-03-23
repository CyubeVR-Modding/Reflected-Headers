#pragma once
#include "CoreMinimal.h"
#include "EPartyType.generated.h"

UENUM()
enum class EPartyType : uint8 {
    Public,
    FriendsOnly,
    Private,
};

