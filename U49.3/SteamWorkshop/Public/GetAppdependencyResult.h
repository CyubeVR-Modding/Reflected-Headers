#pragma once
#include "CoreMinimal.h"
#include "GeneralWorkshopItemResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamAppId -FallbackName=SteamAppId
#include "GetAppdependencyResult.generated.h"

USTRUCT(BlueprintType)
struct FGetAppdependencyResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FSteamAppId> dependencyApps;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bAllAppDependenciesReturned;
    
    STEAMWORKSHOP_API FGetAppdependencyResult();
};

