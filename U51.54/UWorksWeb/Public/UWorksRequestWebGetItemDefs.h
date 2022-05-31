#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetItemDefsDelegateDelegate.h"
#include "GetItemDefsMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamItemDef -FallbackName=UWorksSteamItemDef
#include "UWorksRequestWebGetItemDefs.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetItemDefs : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetItemDefsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetItemDefsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetItemDefs();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& ModifiedSince, TArray<FUWorksSteamItemDef> ItemDefIDs, TArray<FUWorksSteamItemDef> WorkshopIDs, int32 CacheMaxAgeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

