#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MyPluginStruct.h"
#include "MyPluginObject.generated.h"

UCLASS()
class UMyPluginObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMyPluginStruct MyStruct;
    
public:
    UMyPluginObject();
};

