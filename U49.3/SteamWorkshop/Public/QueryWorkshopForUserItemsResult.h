#pragma once
#include "CoreMinimal.h"
#include "QueryWorkshopForItemsResult.h"
#include "SteamUGCQueryParameterUser.h"
#include "QueryWorkshopForUserItemsResult.generated.h"

USTRUCT(BlueprintType)
struct FQueryWorkshopForUserItemsResult : public FQueryWorkshopForItemsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FSteamUGCQueryParameterUser queryParams;
    
    STEAMWORKSHOP_API FQueryWorkshopForUserItemsResult();
};

