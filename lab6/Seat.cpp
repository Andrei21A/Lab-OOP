#include "Seat.hpp"
#include "Weather.hpp"
#include "Car.hpp"

const char* GetName() {
    return "Seat";
}

float Seat::Range() {
    return GetFuelCapacity() * GetFuelConsumption();
}

float Seat::Time(Weather a)
{
    return (GetFuelConsumption() * GetAvgSpeed(a)) / GetFuelCapacity();
}
