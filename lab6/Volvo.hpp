#ifndef Volvo_hpp
#define Volvo_hpp

#include <stdio.h>
#include "Car.hpp"
#pragma once
class Volvo : public Car {
    
    public :
    float GetFuelConsumption();
    float GetFuelCapacity();
    const char* GetName();
    float GetAvgSpeed(Weather w);
    float Range();
    float Time(Weather a);
};
#endif 

