#ifndef Carte_hpp
#define Carte_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Carte
{
public:
    std::string virtual GetInfo(std::string info) = 0;
};

#endif 
