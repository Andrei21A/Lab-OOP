#ifndef Roman_hpp
#define Roman_hpp

#include "Carte.hpp"
#include <stdio.h>

class Roman : public Carte
{
    std::string nume;
    std::string autor;
    std::string info = "Roman";
public:
    Roman(std::string nume, std::string autor) : nume(nume), autor(autor) {
        std::cout << "Romanul " << nume << " de " << autor;
    }
    std::string GetInfo(std::string info) {
        return info;
    }
    
};

#endif
