#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineEngineInterface -FallbackName=OnlineEngineInterface
#include "OnlineEngineInterfaceImpl.generated.h"

UCLASS()
class ONLINESUBSYSTEMUTILS_API UOnlineEngineInterfaceImpl : public UOnlineEngineInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    FName VoiceSubsystemNameOverride;
    
public:
    UOnlineEngineInterfaceImpl();
};
