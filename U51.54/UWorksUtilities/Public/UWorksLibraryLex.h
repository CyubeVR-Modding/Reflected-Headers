#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksUGCUpdateHandle -FallbackName=UWorksUGCUpdateHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksControllerDigitalActionHandle -FallbackName=UWorksControllerDigitalActionHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksControllerHandle -FallbackName=UWorksControllerHandle
#include "UWorksLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksUGCQueryHandle -FallbackName=UWorksUGCQueryHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksUGCHandle -FallbackName=UWorksUGCHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksUGCFileWriteStreamHandle -FallbackName=UWorksUGCFileWriteStreamHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksTicketHandle -FallbackName=UWorksTicketHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksSteamUser -FallbackName=UWorksSteamUser
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksSteamPipe -FallbackName=UWorksSteamPipe
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksSteamLeaderboardEntries -FallbackName=UWorksSteamLeaderboardEntries
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksSteamLeaderboard -FallbackName=UWorksSteamLeaderboard
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksSteamInventoryResult -FallbackName=UWorksSteamInventoryResult
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksScreenshotHandle -FallbackName=UWorksScreenshotHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksFriendsGroupID -FallbackName=UWorksFriendsGroupID
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksControllerAnalogActionHandle -FallbackName=UWorksControllerAnalogActionHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksControllerActionSetHandle -FallbackName=UWorksControllerActionSetHandle
#include "UWorksLibraryLex.generated.h"

UCLASS(Blueprintable)
class UWORKSUTILITIES_API UUWorksLibraryLex : public UUWorksLibrary {
    GENERATED_BODY()
public:
    UUWorksLibraryLex();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksUGCUpdateHandle WriteUGCUpdateHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksUGCQueryHandle WriteUGCQueryHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksUGCHandle WriteUGCHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksUGCFileWriteStreamHandle WriteUGCFileWriteStreamHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksTicketHandle WriteTicketHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamUser WriteSteamUser(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamPipe WriteSteamPipe(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamLeaderboardEntries WriteSteamLeaderboardEntries(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamLeaderboard WriteSteamLeaderboard(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamInventoryResult WriteSteamInventoryResult(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksScreenshotHandle WriteScreenshotHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksFriendsGroupID WriteFriendsGroupID(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksControllerHandle WriteControllerHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksControllerDigitalActionHandle WriteControllerDigitalActionHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksControllerAnalogActionHandle WriteControllerAnalogActionHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksControllerActionSetHandle WriteControllerActionSetHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadUGCUpdateHandle(FUWorksUGCUpdateHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadUGCQueryHandle(FUWorksUGCQueryHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadUGCHandle(FUWorksUGCHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadUGCFileWriteStreamHandle(FUWorksUGCFileWriteStreamHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadTicketHandle(FUWorksTicketHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadSteamUser(FUWorksSteamUser Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadSteamPipe(FUWorksSteamPipe Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadSteamLeaderboardEntries(FUWorksSteamLeaderboardEntries Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadSteamLeaderboard(FUWorksSteamLeaderboard Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadSteamInventoryResult(FUWorksSteamInventoryResult Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadScreenshotHandle(FUWorksScreenshotHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadFriendsGroupID(FUWorksFriendsGroupID Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadControllerHandle(FUWorksControllerHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadControllerDigitalActionHandle(FUWorksControllerDigitalActionHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadControllerAnalogActionHandle(FUWorksControllerAnalogActionHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadControllerActionSetHandle(FUWorksControllerActionSetHandle Value);
    
};

