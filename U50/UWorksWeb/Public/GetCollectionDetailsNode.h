#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetCollectionDetailsDelegateDelegate.h"
#include "GetCollectionDetailsNode.generated.h"

class UGetCollectionDetailsNode;

UCLASS()
class UWORKSWEB_API UGetCollectionDetailsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetCollectionDetailsDelegate Completed;
    
    UGetCollectionDetailsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetCollectionDetailsNode* GetCollectionDetailsNode(int32 CollectionCount, TArray<int32> PublishedFileIDs);
    
};

