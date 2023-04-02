#ifndef BMW_hpp
#define BMW_hpp

#include <stdio.h>
#include "Car.hpp"
#include "Weather.hpp"

class BMW : public Car {
    
    public :

    float GetFuelConsumption() {
        return 8.9f;
    }
    
    float GetFuelCapacity() {
        return 300;
    }
    
    float GetSpeed(Weather w) {
        switch (w) {
            case Weather::Sunny:
                return 150.5f;
            case Weather::Rainy:
                return 100.5f;
            case Weather::Foggy:
                return 100.5f;
        }
        return 0;
    }
    float Range();
    float Time(Weather a);
};

#endif
