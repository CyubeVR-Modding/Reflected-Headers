#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SetDeveloperMetadataDelegateDelegate.h"
#include "SetDeveloperMetadataMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "UWorksRequestWebSetDeveloperMetadata.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSetDeveloperMetadata : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetDeveloperMetadataDelegate OnRequestCompleted;
    
    UPROPERTY()
    FSetDeveloperMetadataMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSetDeveloperMetadata();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, const FString& MetaData);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

