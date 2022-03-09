#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest.h"
#include "EEnvTestPathfinding.h"
#include "AIDataProviderBoolValue.h"
#include "EnvQueryTest_Pathfinding.generated.h"

class UEnvQueryContext;
class UNavigationQueryFilter;

UCLASS()
class UEnvQueryTest_Pathfinding : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvTestPathfinding::Type> TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue PathFromContext;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue SkipUnreachable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UEnvQueryTest_Pathfinding();
};

