#ifndef Revista_hpp
#define Revista_hpp

#include <stdio.h>
#include "Carte.hpp"

class Revista : public Carte
{
    
    std::string titlu;
    int nrArticole;
    
public:
    Revista(std::string titlu, int nrArticole) : titlu(titlu), nrArticole(nrArticole){
        std::cout << "Revista " << titlu << " cu " << nrArticole << " de articole";
    }
    std::string GetInfo(std::string info) {
        return "Revista";
    }
};

#endif 
