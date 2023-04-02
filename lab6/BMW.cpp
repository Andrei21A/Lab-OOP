#include "BMW.hpp"
#include "Weather.hpp"
#include "Car.hpp"

const char* GetName() {
    return "BMW";
}

float BMW::Range() {
    return GetFuelCapacity() * GetFuelConsumption();
}

float BMW::Time(Weather a)
{
    return (GetFuelConsumption() * GetAvgSpeed(a)) / GetFuelCapacity();
}
