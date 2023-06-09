#ifndef Biblioteca_hpp
#define Biblioteca_hpp

#include <iostream>
#include <functional>
#include "Carte.hpp"

class Biblioteca
{
    int count;
    Carte** carti;
    int nrMaxCarti;

public:
    Biblioteca()
    {
        count = 0;
        nrMaxCarti = 100;
        carti = new Carte*[nrMaxCarti];
    }

    ~Biblioteca()
    {
        for(int i = 0 ; i < count; i++)
            delete carti[i];
        delete [] carti;
    }

    void operator+=(Carte* carte)
    {
        if (count < nrMaxCarti)
        {
            carti[count] = carte;
            count++;
        }
        else
        {
            std::cout << "Biblioteca este plina, nu mai puteti insera carti.";
        }
    }

    Carte** begin()
    {
        return &carti;
    }

    Carte** end()
    {
        return &carti + count;
    }

    operator int() const
    {
        return count;
    }

    void PrintFilter(std::function<bool(Carte**)> filterFunc)
    {
        for(Carte** carte : carti) {
            printf(" ");
        }
    }
};

#endif

