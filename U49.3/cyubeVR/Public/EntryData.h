#pragma once
#include "CoreMinimal.h"
#include "EntryData.generated.h"

USTRUCT(BlueprintType)
struct FEntryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Rank;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString RankSameHeadset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString RankSameGPU;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString RankSameHeadsetAndGPU;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString score;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ScoreOriginal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString GPU;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString CPU;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString HeadsetName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString UserName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString res;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ResOriginalX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ResOriginalY;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsCurrentUser;
    
    CYUBEVR_API FEntryData();
};

