#pragma once
#include "CoreMinimal.h"
#include "LocationServicesData_OnLocationChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LocationServicesImpl.generated.h"

UCLASS(Abstract)
class ULocationServicesImpl : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLocationServicesData_OnLocationChanged OnLocationChanged;
    
    ULocationServicesImpl();
};

