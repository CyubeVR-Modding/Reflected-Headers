#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EnvQueryOption.generated.h"

class UEnvQueryTest;
class UEnvQueryGenerator;

UCLASS()
class AIMODULE_API UEnvQueryOption : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UEnvQueryGenerator* Generator;
    
    UPROPERTY()
    TArray<UEnvQueryTest*> Tests;
    
    UEnvQueryOption();
};

