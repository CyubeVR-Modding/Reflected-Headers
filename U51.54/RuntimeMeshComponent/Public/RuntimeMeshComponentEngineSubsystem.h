#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "RuntimeMeshComponentEngineSubsystem.generated.h"

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshComponentEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    URuntimeMeshComponentEngineSubsystem();
};

