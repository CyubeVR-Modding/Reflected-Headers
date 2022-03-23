#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SetDeveloperMetadataDelegateDelegate.h"
#include "SetDeveloperMetadataNode.generated.h"

class USetDeveloperMetadataNode;

UCLASS()
class UWORKSWEB_API USetDeveloperMetadataNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetDeveloperMetadataDelegate Completed;
    
    USetDeveloperMetadataNode();
    UFUNCTION(BlueprintCallable)
    static USetDeveloperMetadataNode* SetDeveloperMetadataNode(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, const FString& MetaData);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

