#pragma once
#include "CoreMinimal.h"
#include "GeneralWorkshopItemResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
#include "AddRemoveItemDependencyResult.generated.h"

USTRUCT(BlueprintType)
struct FAddRemoveItemDependencyResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCItemId dependendItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddDependency;
    
    STEAMWORKSHOP_API FAddRemoveItemDependencyResult();
};

