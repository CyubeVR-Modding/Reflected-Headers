#pragma once
#include "CoreMinimal.h"
#include "UWorksLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "UWorksLibraryGameID.generated.h"

UCLASS(BlueprintType)
class UWORKSUTILITIES_API UUWorksLibraryGameID : public UUWorksLibrary {
    GENERATED_BODY()
public:
    UUWorksLibraryGameID();
    UFUNCTION(BlueprintCallable)
    static void SetIdentifier(UPARAM(Ref) FUWorksGameID& GameID, const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    static void Reset(UPARAM(Ref) FUWorksGameID& GameID);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintPure)
    static bool IsSteamApp(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintPure)
    static bool IsShortcut(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintPure)
    static bool IsP2PFile(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintPure)
    static bool IsMod(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintPure)
    static bool IsIdenticalWith(FUWorksGameID A, FUWorksGameID B);
    
    UFUNCTION(BlueprintPure)
    static int32 GetModID(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintPure)
    static FString GetIdentifier(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintPure)
    static int32 GetAppID(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintPure)
    static FUWorksGameID ConstructFromParametersC(int32 AppID, int32 ModID);
    
    UFUNCTION(BlueprintPure)
    static FUWorksGameID ConstructFromParametersB(int32 AppID);
    
    UFUNCTION(BlueprintPure)
    static FUWorksGameID ConstructFromParametersA(const FString& Identifier);
    
};

