#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EnumerateUserPublishedFilesDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EnumerateUserPublishedFilesNode.generated.h"

class UEnumerateUserPublishedFilesNode;

UCLASS()
class UWORKSWEB_API UEnumerateUserPublishedFilesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnumerateUserPublishedFilesDelegate Completed;
    
    UEnumerateUserPublishedFilesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UEnumerateUserPublishedFilesNode* EnumerateUserPublishedFilesNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
};

