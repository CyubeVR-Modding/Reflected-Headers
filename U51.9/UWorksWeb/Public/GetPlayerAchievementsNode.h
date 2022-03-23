#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetPlayerAchievementsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetPlayerAchievementsNode.generated.h"

class UGetPlayerAchievementsNode;

UCLASS()
class UWORKSWEB_API UGetPlayerAchievementsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPlayerAchievementsDelegate Completed;
    
    UGetPlayerAchievementsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPlayerAchievementsNode* GetPlayerAchievementsNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& Language);
    
};

