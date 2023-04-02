#include "Volvo.hpp"
#include "Car.hpp"
#include "Weather.hpp"
#include "Circuit.hpp"

#include <iostream>

float Volvo::GetFuelConsumption() {
    return 7.8f;
}
float Volvo::GetFuelCapacity() {
    return 250;
}

float Volvo::GetAvgSpeed(Weather w) {
        switch (w) {
            case Weather::Sunny:
                return 120.5f;
            case Weather::Rainy:
                return 90.5f;
            case Weather::Foggy:
                return 70.5f;
        }
        return 0;
}

const char* GetName() {
    return "Volvo";
}

float Volvo::Range() {
    return GetFuelCapacity() * GetFuelConsumption();
}

float Volvo::Time(Weather a)
{
    return (GetFuelConsumption() * GetAvgSpeed(a)) / GetFuelCapacity();
}
