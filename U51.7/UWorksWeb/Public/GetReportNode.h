#pragma once
#include "CoreMinimal.h"
#include "EUWorksReportType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetReportDelegateDelegate.h"
#include "GetReportNode.generated.h"

class UGetReportNode;

UCLASS()
class UWORKSWEB_API UGetReportNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetReportDelegate Completed;
    
    UGetReportNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetReportNode* GetReportNode(const FString& Key, int32 AppID, const FString& Time, EUWorksReportType Type, int32 MaxResults);
    
};

