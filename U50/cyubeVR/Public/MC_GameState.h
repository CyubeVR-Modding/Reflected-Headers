#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameStateBase -FallbackName=GameStateBase
#include "MC_GameState.generated.h"

class AChunkManager;
class UTexture2D;

UCLASS()
class CYUBEVR_API AMC_GameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChunkManager* ChunkManager;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture2D*> AlreadyLoadedTextures;
    
    AMC_GameState();
};

