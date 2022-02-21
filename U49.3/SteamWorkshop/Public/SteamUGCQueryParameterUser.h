#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterAllUser.h"
#include "EUserUGCListBP.h"
#include "EUGCMatchingUGCTypeBP.h"
#include "EUserUGCListSortOrderBP.h"
#include "SteamUGCQueryParameterUser.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterUser : public FSteamUGCQueryParameterAllUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString filenameFilter;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EUserUGCListBP list;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EUGCMatchingUGCTypeBP Type;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EUserUGCListSortOrderBP sortOrder;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterUser();
};

