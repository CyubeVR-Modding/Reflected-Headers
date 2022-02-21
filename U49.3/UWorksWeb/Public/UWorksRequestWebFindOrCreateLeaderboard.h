#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "FindOrCreateLeaderboardDelegateDelegate.h"
#include "FindOrCreateLeaderboardMinimalDelegateDelegate.h"
#include "UWorksRequestWebFindOrCreateLeaderboard.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebFindOrCreateLeaderboard : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFindOrCreateLeaderboardDelegate OnRequestCompleted;
    
    UPROPERTY()
    FFindOrCreateLeaderboardMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebFindOrCreateLeaderboard();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Name, const FString& SortMethod, const FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

