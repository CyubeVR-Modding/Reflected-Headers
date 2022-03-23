#pragma once
#include "CoreMinimal.h"
#include "DownloadImageDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AsyncTaskDownloadImage.generated.h"

class UAsyncTaskDownloadImage;

UCLASS()
class UMG_API UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadImageDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadImageDelegate OnFail;
    
    UAsyncTaskDownloadImage();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskDownloadImage* DownloadImage(const FString& URL);
    
};

