
#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include "Weather.hpp"
#include "Circuit.hpp"
#pragma once
class Car {

public:
    
    virtual float GetFuelConsuption() = 0;
    virtual float GetFuelCapacity() = 0;
    virtual float GetAvgSpeed(Weather a) = 0;
    virtual const char* getName() {return "car";}
    virtual float Range() = 0;
    virtual float Time() = 0;

};

#endif
