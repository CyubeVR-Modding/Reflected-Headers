#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterAllUser.h"
#include "EUGCMatchingUGCTypeBP.h"
#include "EUGCQueryBP.h"
#include "SteamUGCQueryParameterAll.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterAll : public FSteamUGCQueryParameterAllUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString searchText;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 rankedByTrendDays;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bMatchAnyTag;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EUGCQueryBP queryType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EUGCMatchingUGCTypeBP fileType;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterAll();
};

