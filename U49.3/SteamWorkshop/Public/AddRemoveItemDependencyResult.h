#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
#include "GeneralWorkshopItemResult.h"
#include "AddRemoveItemDependencyResult.generated.h"

USTRUCT(BlueprintType)
struct FAddRemoveItemDependencyResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSteamUGCItemId dependendItemId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bAddDependency;
    
    STEAMWORKSHOP_API FAddRemoveItemDependencyResult();
};

