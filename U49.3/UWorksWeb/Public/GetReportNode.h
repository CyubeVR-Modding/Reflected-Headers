#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetReportDelegateDelegate.h"
#include "EUWorksReportType.h"
#include "GetReportNode.generated.h"

class UGetReportNode;

UCLASS()
class UWORKSWEB_API UGetReportNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetReportDelegate Completed;
    
    UGetReportNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetReportNode* GetReportNode(const FString& Key, int32 AppID, const FString& Time, EUWorksReportType Type, int32 MaxResults);
    
};

