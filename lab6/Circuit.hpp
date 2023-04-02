
#ifndef Circuit_hpp
#define Circuit_hpp
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Car.hpp"
#include "Weather.hpp"


using namespace std;

class Circuit {
    
    Weather w;
    float length;
    Car **cars;
    int countCars;
    Car **DidNotfinishcars;
    int countCarsWhoDidntFinish;
    public :
    void CountingCars();
    void SetLength(int);
    void SetWeather(Weather);
    Weather GetWeather(){
        return w;
    }
    void AddCar(Car *m);
    void RemovingCars();
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
};

#endif
