#pragma once
#include "CoreMinimal.h"
#include "UWorksLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=EUWorksUniverse -FallbackName=EUWorksUniverse
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=EUWorksAccountType -FallbackName=EUWorksAccountType
#include "UWorksLibrarySteamID.generated.h"

UCLASS(BlueprintType)
class UWORKSUTILITIES_API UUWorksLibrarySteamID : public UUWorksLibrary {
    GENERATED_BODY()
public:
    UUWorksLibrarySteamID();
    UFUNCTION(BlueprintCallable)
    static void SetUniverse(UPARAM(Ref) FUWorksSteamID& SteamID, EUWorksUniverse Universe);
    
    UFUNCTION(BlueprintCallable)
    static void SetParametersC(UPARAM(Ref) FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& AccountID, const FString& AccountInstance);
    
    UFUNCTION(BlueprintCallable)
    static void SetParametersB(UPARAM(Ref) FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& AccountID);
    
    UFUNCTION(BlueprintCallable)
    static void SetParametersA(UPARAM(Ref) FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetIdentifier(UPARAM(Ref) FUWorksSteamID& SteamID, const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetAccountInstance(UPARAM(Ref) FUWorksSteamID& SteamID, const FString& AccountInstance);
    
    UFUNCTION(BlueprintCallable)
    static void SetAccountID(UPARAM(Ref) FUWorksSteamID& SteamID, const FString& AccountID);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsPersistentGameServerAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsLobby(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsIndividualAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsIdenticalWith(FUWorksSteamID A, FUWorksSteamID B);
    
    UFUNCTION(BlueprintPure)
    static bool IsGameServerAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsContentServerAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsConsoleUserAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsClanAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsChatAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsBlankAnonAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsAnonUserAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsAnonGameServerAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool IsAnonAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static bool HasNoIndividualInstance(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static EUWorksUniverse GetUniverse(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static FString GetStaticAccountKey(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static FString GetIdentifier(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static EUWorksAccountType GetAccountType(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static FString GetAccountInstance(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintPure)
    static FString GetAccountID(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static void CreateBlankAnonUserLogon(UPARAM(Ref) FUWorksSteamID& SteamID, EUWorksUniverse Universe);
    
    UFUNCTION(BlueprintCallable)
    static void CreateBlankAnonLogon(UPARAM(Ref) FUWorksSteamID& SteamID, EUWorksUniverse Universe);
    
    UFUNCTION(BlueprintPure)
    static FUWorksSteamID ConstructFromParametersC(EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& AccountID, const FString& AccountInstance);
    
    UFUNCTION(BlueprintPure)
    static FUWorksSteamID ConstructFromParametersB(EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& AccountID);
    
    UFUNCTION(BlueprintPure)
    static FUWorksSteamID ConstructFromParametersA(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    static void ClearIndividualInstance(FUWorksSteamID& SteamID);
    
    UFUNCTION(BlueprintCallable)
    static void Clear(UPARAM(Ref) FUWorksSteamID& SteamID);
    
};

