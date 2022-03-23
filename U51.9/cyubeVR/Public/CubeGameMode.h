#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "CubeGameMode.generated.h"

UCLASS(NonTransient)
class CYUBEVR_API ACubeGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    ACubeGameMode();
};

