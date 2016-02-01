#include "Dvector.h"
#include <string>
#include <fstream>
#include <string>

int main()
{
    Dvector dvec(3, 2.3);
    dvec.display(std::cout);
    std::cout<<"Taille de dvec: "<<dvec.size()<<std::endl;
    dvec.fillRandomly();
    std::cout<<"dvec: "<<std::endl;
    dvec.display(std::cout);

    Dvector dvec2(dvec);
    std::cout<<"dvec2: "<<std::endl;
    dvec2.display(std::cout);
    std::cout<<"dvec2 après recopie: "<<std::endl;
    dvec2.display(std::cout);
    std::cout<<"fin du test"<<std::endl;

    std::cout.precision(9);
    Dvector dvec3("tp1_test1.txt");
    dvec3.display(std::cout);
    Dvector dvec4("tp1_test2.txt");
    dvec4.display(std::cout);
}
