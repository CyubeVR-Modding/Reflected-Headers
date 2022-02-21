#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetFriendListMinimalDelegateDelegate.h"
#include "GetFriendListDelegateDelegate.h"
#include "UWorksRequestWebGetFriendList.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetFriendList : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetFriendListDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetFriendListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetFriendList();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, const FString& Relationship);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

