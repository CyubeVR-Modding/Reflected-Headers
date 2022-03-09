#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnlineHotfixManager.generated.h"

UCLASS(BlueprintType)
class HOTFIX_API UOnlineHotfixManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    FString OssName;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    FString HotfixManagerClassName;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    FString DebugPrefix;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AssetsHotfixedFromIniFiles;
    
    UOnlineHotfixManager();
    UFUNCTION(BlueprintCallable)
    void StartHotfixProcess();
    
};

