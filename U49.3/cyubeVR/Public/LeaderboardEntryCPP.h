#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "LeaderboardEntryCPP.generated.h"

class UTextBlock;
class UBorder;

UCLASS(EditInlineNew)
class CYUBEVR_API ULeaderboardEntryCPP : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TextBlock_Rank;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TextBlock_Score;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TextBlock_GPU;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TextBlock_Headset;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TextBlock_CPU;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TextBlock_User;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TextBlock_Resolution;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBorder* Border_BackgroundColor;
    
    ULeaderboardEntryCPP();
};

