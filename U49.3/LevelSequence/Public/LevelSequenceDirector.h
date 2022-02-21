#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LevelSequenceDirector.generated.h"

class ULevelSequencePlayer;

UCLASS(Blueprintable)
class LEVELSEQUENCE_API ULevelSequenceDirector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ULevelSequencePlayer* Player;
    
    ULevelSequenceDirector();
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreated();
    
};

