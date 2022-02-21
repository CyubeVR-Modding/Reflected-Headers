#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetCheatingReportsListDelegateDelegate.h"
#include "GetCheatingReportsListNode.generated.h"

class UGetCheatingReportsListNode;

UCLASS()
class UWORKSWEB_API UGetCheatingReportsListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetCheatingReportsListDelegate Completed;
    
    UGetCheatingReportsListNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetCheatingReportsListNode* GetCheatingReportsListNode(const FString& Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, const FString& ReportIDMin);
    
};

