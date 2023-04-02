#include "Circuit.hpp"
#include "Car.hpp"
#include "Weather.hpp"
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void Circuit::SetWeather(Weather w) {
    this -> w = w;
}

void Circuit::SetLength(int length) {
    this -> length = length;
}

void Circuit::CountingCars() {
    countCars = 0;
    countCarsWhoDidntFinish = 0;
    cars = new Car *[20];
    DidNotfinishcars = new Car *[20];
}

void Circuit::AddCar(Car* RacingCars) {
    cars[++countCars] = RacingCars;
}

void Circuit::RemovingCars() {
    for(int i = 1; i <= countCars; i++) {
        if(cars[i]->Range() < length) {
            DidNotfinishcars[++countCarsWhoDidntFinish] = cars[i];
            for(int j = i; j <= countCars; j++) {
                cars[j] = cars[j + 1];
                countCars--;
            }
        }
    }
}

void Circuit::Race() {
    for(int i = 1; i <= countCars; i++) {
        for(int j = i + 1; j <= countCars; j++) {
            if(cars[i]->GetAvgSpeed(GetWeather()) < cars[j]->GetAvgSpeed(GetWeather()))
                swap(cars[i], cars[j]);
        }
    }
}

void Circuit::ShowFinalRanks() {
    for(int i = 1; i <= countCars; i++)
        cout << i << " - " << cars[i] -> getName() << ": " << cars[i]->Time() <<"\n" ;
}

