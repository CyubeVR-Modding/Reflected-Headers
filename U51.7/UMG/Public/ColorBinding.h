#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "ColorBinding.generated.h"

UCLASS()
class UMG_API UColorBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UColorBinding();
    UFUNCTION(BlueprintCallable)
    FSlateColor GetSlateValue() const;
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetLinearValue() const;
    
};

