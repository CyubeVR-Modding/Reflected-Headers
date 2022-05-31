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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyPlayerStateActorInfo> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    ALobbyBeaconState* ParentState;
    
public:
    LOBBY_API FLobbyPlayerStateInfoArray();
};

