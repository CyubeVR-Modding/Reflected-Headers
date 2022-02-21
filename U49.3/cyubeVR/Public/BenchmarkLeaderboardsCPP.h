#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorksCore -ObjectName=UWorksSteamLeaderboardEntries -FallbackName=UWorksSteamLeaderboardEntries
#include "EntryData.h"
#include "BenchmarkLeaderboardsCPP.generated.h"

class UScrollBox;
class ULeaderboardEntryCPP;
class UGameInstance;

UCLASS(EditInlineNew)
class CYUBEVR_API UBenchmarkLeaderboardsCPP : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UScrollBox* ScrollBox_Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<ULeaderboardEntryCPP*> FakeEntryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ArraySetting;
    
    UBenchmarkLeaderboardsCPP();
    UFUNCTION(BlueprintCallable)
    void UpdateFakeList(int32 Offset, int32& AmountToShow);
    
    UFUNCTION(BlueprintCallable)
    void SetShowNameOwnResult(bool ShowName);
    
    UFUNCTION(BlueprintCallable)
    void PopulateScrollBox(UGameInstance* GameInstance, const FUWorksSteamLeaderboardEntries& Entries, int32 EntryCount, const FString& CurrentHeadsetName, const FString& CurrentGPUName, int32 CurrentResX, int32 CurrentResY, int32 ActualResultThisRun);
    
    UFUNCTION(BlueprintCallable)
    void OpenSteamOverlayToDLC(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    bool GetOwnEntryResultData(FEntryData& OwnResultEntryData);
    
    UFUNCTION(BlueprintCallable)
    void GetAverageDeviation(float& Difference);
    
    UFUNCTION(BlueprintCallable)
    void DeleteOwnEntryResult();
    
};

