#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "LobbyPlayerStateActorInfo.h"
#include "LobbyPlayerStateInfoArray.generated.h"

class ALobbyBeaconState;

USTRUCT(BlueprintType)
struct FLobbyPlayerStateInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FLobbyPlayerStateActorInfo> Players;
    
    UPROPERTY(NotReplicated)
    ALobbyBeaconState* ParentState;
    
public:
    LOBBY_API FLobbyPlayerStateInfoArray();
};

