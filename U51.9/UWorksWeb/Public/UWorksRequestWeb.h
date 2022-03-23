#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksRequest -FallbackName=UWorksRequest
#include "UWorksRequestWeb.generated.h"

UCLASS(BlueprintType)
class UWORKSWEB_API UUWorksRequestWeb : public UUWorksRequest {
    GENERATED_BODY()
public:
    UUWorksRequestWeb();
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable)
    FString GetStatus();
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

