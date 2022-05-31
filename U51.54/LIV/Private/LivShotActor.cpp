#include "LivShotActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "LivShotComponent.h"

ALivShotActor::ALivShotActor() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ShotComponent = CreateDefaultSubobject<ULivShotComponent>(TEXT("ShotComponent"));
}

