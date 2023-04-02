#ifndef RangeRover_hpp
#define RangeRover_hpp

#include <stdio.h>
#include "Car.hpp"
#include "Weather.hpp"

class RangeRover : public Car {
    

    public :
    
    float GetFuelConsumption() {
        return 5.6f;
    }
    
    float GetFuelCapacity() {
        return 200;
    }
    
    float GetSpeed(Weather w) {
        switch (w) {
            case Weather::Sunny:
                return 130.5f;
            case Weather::Rainy:
                return 120.5f;
            case Weather::Foggy:
                return 110.5f;
        }
        return 0;
    }
    float Range();
    float Time(Weather a);
};
#endif
