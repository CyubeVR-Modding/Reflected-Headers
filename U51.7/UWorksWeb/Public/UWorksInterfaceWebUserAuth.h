#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceWeb.h"
#include "AuthenticateUserMinimalDelegateDelegate.h"
#include "AuthenticateUserTicketMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksInterfaceWebUserAuth.generated.h"

class UUWorksRequestWebAuthenticateUser;
class UUWorksRequestWebAuthenticateUserTicket;

UCLASS(BlueprintType)
class UWORKSWEB_API UUWorksInterfaceWebUserAuth : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebUserAuth();
    UFUNCTION(BlueprintCallable)
    static void AuthenticateUserTicketMinimal(const FString& Key, int32 AppID, const FString& Ticket, const FAuthenticateUserTicketMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebAuthenticateUserTicket* AuthenticateUserTicket();
    
    UFUNCTION(BlueprintCallable)
    static void AuthenticateUserMinimal(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey, const FAuthenticateUserMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebAuthenticateUser* AuthenticateUser();
    
};

