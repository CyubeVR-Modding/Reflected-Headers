#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SetUGCUsedByGCDelegateDelegate.h"
#include "SetUGCUsedByGCMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebSetUGCUsedByGC.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebSetUGCUsedByGC : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetUGCUsedByGCDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetUGCUsedByGCMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetUGCUsedByGC();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, bool bUsed);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

