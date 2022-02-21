#include "WeatherManager.h"



AWeatherManager::AWeatherManager() {
    this->CurrentWeather = (EWeather)8;
    this->PreviousWeather = (EWeather)8;
    this->WeatherInterp = 0.00f;
}

