#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
#include "ReceiveLightActor.h"
#include "EasterEgg.generated.h"

UCLASS()
class CYUBEVR_API AEasterEgg : public AReceiveLightActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBlockTypeBP ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bChristmasGift;
    
    AEasterEgg();
};

