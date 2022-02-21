#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemInstanceID -FallbackName=UWorksSteamItemInstanceID
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemDef -FallbackName=UWorksSteamItemDef
#include "EUWorksSteamItemFlags.h"
#include "UWorksSteamItemDetails.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksSteamItemDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FUWorksSteamItemInstanceID InstanceID;
    
    UPROPERTY(BlueprintReadWrite)
    FUWorksSteamItemDef Definition;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<EUWorksSteamItemFlags> Flags;
    
    FUWorksSteamItemDetails();
};

