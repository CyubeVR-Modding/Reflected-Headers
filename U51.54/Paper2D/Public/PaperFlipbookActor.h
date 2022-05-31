#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PaperFlipbookActor.generated.h"

class UPaperFlipbookComponent;

UCLASS(Blueprintable)
class PAPER2D_API APaperFlipbookActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPaperFlipbookComponent* RenderComponent;
    
public:
    APaperFlipbookActor();
};

