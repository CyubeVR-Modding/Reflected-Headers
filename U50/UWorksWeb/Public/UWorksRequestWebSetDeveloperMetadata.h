#pragma once
#include "CoreMinimal.h"
#include "SetDeveloperMetadataMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "SetDeveloperMetadataDelegateDelegate.h"
#include "UWorksRequestWebSetDeveloperMetadata.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSetDeveloperMetadata : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetDeveloperMetadataDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetDeveloperMetadataMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetDeveloperMetadata();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, const FString& MetaData);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

