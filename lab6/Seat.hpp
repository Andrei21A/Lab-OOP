
#ifndef Seat_hpp
#define Seat_hpp

#include <stdio.h>
#include "Car.hpp"
#include "Weather.hpp"

class Seat : public Car {
    
    public :
    
    float GetFuelConsumption() {
        return 6.0f;
    }
    
    float GetFuelCapacity() {
        return 200;
    }
    
    float GetSpeed(Weather w) {
        switch (w) {
            case Weather::Sunny:
                return 100.5f;
            case Weather::Rainy:
                return 80.0f;
            case Weather::Foggy:
                return 75.0f;
        }
        return 0;
    }
    float Range();
    float Time(Weather a);
};

#endif
