#include "RangeRover.hpp"
#include "Weather.hpp"
#include "Car.hpp"

const char* GetName() {
    return "RangeRover";
}

float RangeRover::Range() {
    return GetFuelCapacity() * GetFuelConsumption();
}

float RangeRover::Time(Weather a)
{
    return (GetFuelConsumption() * GetAvgSpeed(a)) / GetFuelCapacity();
}
