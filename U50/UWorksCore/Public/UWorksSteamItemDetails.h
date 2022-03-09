#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemDef -FallbackName=UWorksSteamItemDef
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemInstanceID -FallbackName=UWorksSteamItemInstanceID
#include "EUWorksSteamItemFlags.h"
#include "UWorksSteamItemDetails.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksSteamItemDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUWorksSteamItemInstanceID InstanceID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUWorksSteamItemDef Definition;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<EUWorksSteamItemFlags> Flags;
    
    FUWorksSteamItemDetails();
};

