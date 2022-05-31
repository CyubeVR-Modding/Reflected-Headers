#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RecordOfflinePlaytimeDelegateDelegate.h"
#include "UWorksPlaySessions.h"
#include "RecordOfflinePlaytimeNode.generated.h"

class URecordOfflinePlaytimeNode;

UCLASS(Blueprintable)
class UWORKSWEB_API URecordOfflinePlaytimeNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordOfflinePlaytimeDelegate Completed;
    
    URecordOfflinePlaytimeNode();
    UFUNCTION(BlueprintCallable)
    static URecordOfflinePlaytimeNode* RecordOfflinePlaytimeNode(FUWorksSteamID SteamID, const FString& Ticket, FUWorksPlaySessions PlaySessions);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

