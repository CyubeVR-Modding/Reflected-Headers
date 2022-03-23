#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialManager.generated.h"

class USocialToolkit;
class USocialDebugTools;

UCLASS(Config=Game, Within=GameInstance)
class PARTY_API USocialManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<USocialToolkit*> SocialToolkits;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USocialDebugTools* SocialDebugTools;
    
public:
    USocialManager();
};

