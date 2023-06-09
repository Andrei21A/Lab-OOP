#include <iostream>
#include "Biblioteca.hpp"
#include "Carte.hpp"
#include "Roman.hpp"
#include "Revista.hpp"
int main() {
    Biblioteca b;
    (b += new Roman("DON QUIJOTE", "MIGUEL DE CERVANTES")) += new Revista("Journal of Artificial Intelligence", 100);
    b += new Roman("MACBETH", "WILLIAM SHAKESPEARE");
    for (auto x : b)
    {
        std::cout << x->GetInfo() << std::endl;
    }
    std::cout << "Numar de intrari in biblioteca: " << (int)b << std::endl;
    std::cout << "Lista doar cu romane:" << std::endl;
    b.PrintFilter([](Carte* carte) -> bool {
        Roman* roman = dynamic_cast<Roman*>(carte);
        return (roman != nullptr);
    });
return 0; }
