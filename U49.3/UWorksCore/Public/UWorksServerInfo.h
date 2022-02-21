#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksServerInfo.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksServerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite)
    FString IP;
    
    UPROPERTY(BlueprintReadWrite)
    int32 QueryPort;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ConnectionPort;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Ping;
    
    UPROPERTY(BlueprintReadWrite)
    bool bHadSuccessfulResponse;
    
    UPROPERTY(BlueprintReadWrite)
    bool bDoNotRefresh;
    
    UPROPERTY(BlueprintReadWrite)
    FString GameDir;
    
    UPROPERTY(BlueprintReadWrite)
    FString Map;
    
    UPROPERTY(BlueprintReadWrite)
    FString GameDescription;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AppID;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Players;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MaxPlayers;
    
    UPROPERTY(BlueprintReadWrite)
    int32 BotPlayers;
    
    UPROPERTY(BlueprintReadWrite)
    bool bPassword;
    
    UPROPERTY(BlueprintReadWrite)
    bool BSecure;
    
    UPROPERTY(BlueprintReadWrite)
    int32 TimeLastPlayed;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ServerVersion;
    
    UPROPERTY(BlueprintReadWrite)
    FString GameTags;
    
    UPROPERTY(BlueprintReadWrite)
    FUWorksSteamID SteamID;
    
    FUWorksServerInfo();
};

