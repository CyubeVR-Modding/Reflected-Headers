#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EWeather.h"
#include "WeatherStateData.generated.h"

USTRUCT(BlueprintType)
struct FWeatherStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloudDensityTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverallIntensityTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SaturationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LightTemperatureTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SunLightWeatherMultiplierTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WindStrengthTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainStrengthTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FogWeatherColorTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloudDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverallIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LightTemperatur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FogWeatherColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SunLightWeatherMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WindStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayTillParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnowAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SnowAmountTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RainAmountTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWeather Weather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WindSpeedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeTillNewWeather;
    
    CYUBEVR_API FWeatherStateData();
};

