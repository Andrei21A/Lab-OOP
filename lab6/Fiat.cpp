#include "Fiat.hpp"

#include "Weather.hpp"
#include "Car.hpp"

const char* GetName() {
    return "Fiat";
}

float Fiat::Range() {
    return GetFuelCapacity() * GetFuelConsumption();
}

float Fiat::Time(Weather a)
{
    return (GetFuelConsumption() * GetAvgSpeed(a)) / GetFuelCapacity();
}
