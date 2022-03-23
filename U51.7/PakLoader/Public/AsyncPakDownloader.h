#pragma once
#include "CoreMinimal.h"
#include "DownloadPakDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AsyncPakDownloader.generated.h"

class UAsyncPakDownloader;

UCLASS()
class PAKLOADER_API UAsyncPakDownloader : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadPakDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadPakDelegate OnFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadPakDelegate OnProgress;
    
    UAsyncPakDownloader();
    UFUNCTION(BlueprintCallable)
    static UAsyncPakDownloader* DownloadPak(const FString& URL, const FString& SavePath);
    
};

