
#ifndef Fiat_hpp
#define Fiat_hpp

#include <stdio.h>
#include "Car.hpp"
#include "Weather.hpp"

class Fiat : public Car {
    
    public :
    
    float GetFuelConsumption() {
        return 4.5f;
    }
    
    float GetFuelCapacity() {
        return 150;
    }
    
    float GetSpeed(Weather w) {
        switch (w) {
            case Weather::Sunny:
                return 90.8f;
            case Weather::Rainy:
                return 75.0f;
            case Weather::Foggy:
                return 70.3f;
        }
        return 0;
    }
    float Range();
    float Time(Weather a);
};
#endif
