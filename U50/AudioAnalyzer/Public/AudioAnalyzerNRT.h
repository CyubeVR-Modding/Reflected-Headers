#pragma once
#include "CoreMinimal.h"
#include "AudioAnalyzerAsset.h"
#include "AudioAnalyzerNRT.generated.h"

class USoundWave;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class AUDIOANALYZER_API UAudioAnalyzerNRT : public UAudioAnalyzerAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* Sound;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float DurationInSeconds;
    
    UAudioAnalyzerNRT();
};

