#pragma once
#include "CoreMinimal.h"
#include "WeatherStateData.h"
#include "EWeather.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WeatherManager.generated.h"

UCLASS()
class CYUBEVR_API AWeatherManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWeather CurrentWeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWeather PreviousWeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeatherInterp;
    
    AWeatherManager();
    UFUNCTION(BlueprintImplementableEvent)
    void LoadWeatherState(FWeatherStateData WeatherStateData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetWeatherState(FWeatherStateData& WeatherStateData);
    
};

