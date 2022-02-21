#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetUserGroupListDelegateDelegate.h"
#include "GetUserGroupListMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetUserGroupList.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetUserGroupList : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetUserGroupListDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetUserGroupListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserGroupList();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

