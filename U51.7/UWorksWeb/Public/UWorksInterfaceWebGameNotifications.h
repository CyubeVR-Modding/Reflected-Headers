#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceWeb.h"
#include "UpdateSessionMinimalDelegateDelegate.h"
#include "UWorksTitle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksUsers.h"
#include "UWorksSessions.h"
#include "RequestNotificationsMinimalDelegateDelegate.h"
#include "GetSessionDetailsForAppMinimalDelegateDelegate.h"
#include "EnumerateSessionsForAppMinimalDelegateDelegate.h"
#include "DeleteSessionMinimalDelegateDelegate.h"
#include "DeleteSessionBatchMinimalDelegateDelegate.h"
#include "CreateSessionMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebGameNotifications.generated.h"

class UUWorksRequestWebDeleteSessionBatch;
class UUWorksRequestWebUpdateSession;
class UUWorksRequestWebDeleteSession;
class UUWorksRequestWebRequestNotifications;
class UUWorksRequestWebGetSessionDetailsForApp;
class UUWorksRequestWebEnumerateSessionsForApp;
class UUWorksRequestWebCreateSession;

UCLASS(BlueprintType)
class UWORKSWEB_API UUWorksInterfaceWebGameNotifications : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebGameNotifications();
    UFUNCTION(BlueprintCallable)
    static void UpdateSessionMinimal(const FString& Key, const FString& SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID, const FUpdateSessionMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebUpdateSession* UpdateSession();
    
    UFUNCTION(BlueprintCallable)
    static void RequestNotificationsMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FRequestNotificationsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebRequestNotifications* RequestNotifications();
    
    UFUNCTION(BlueprintCallable)
    static void GetSessionDetailsForAppMinimal(const FString& Key, FUWorksSessions Sessions, int32 AppID, const FString& Language, const FGetSessionDetailsForAppMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetSessionDetailsForApp* GetSessionDetailsForApp();
    
    UFUNCTION(BlueprintCallable)
    static void EnumerateSessionsForAppMinimal(const FString& Key, int32 AppID, FUWorksSteamID SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const FString& Language, const FEnumerateSessionsForAppMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebEnumerateSessionsForApp* EnumerateSessionsForApp();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteSessionMinimal(const FString& Key, const FString& SessionId, int32 AppID, FUWorksSteamID SteamID, const FDeleteSessionMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteSessionBatchMinimal(const FString& Key, const FString& SessionId, int32 AppID, const FDeleteSessionBatchMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebDeleteSessionBatch* DeleteSessionBatch();
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebDeleteSession* DeleteSession();
    
    UFUNCTION(BlueprintCallable)
    static void CreateSessionMinimal(const FString& Key, int32 AppID, const FString& Context, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID, const FCreateSessionMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebCreateSession* CreateSession();
    
};

