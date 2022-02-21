#pragma once
#include "CoreMinimal.h"
#include "AuthenticateUserMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "AuthenticateUserDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebAuthenticateUser.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebAuthenticateUser : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAuthenticateUserDelegate OnRequestCompleted;
    
    UPROPERTY()
    FAuthenticateUserMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebAuthenticateUser();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

