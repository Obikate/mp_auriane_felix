/**
 * @author Auriane, Felix.
 * @date 01/01/16.
 * @brief Classe de test vérifiant le bon fonctionnement du constructeur
 * avec paramètres.
 */ 
#include "Dvector.h"
#include <assert.h>

int main()
{
    Dvector v(3, 2.5);
    assert(v.size() == 3);
    assert(v.pCor[0] == 2.5);
    assert(v.pCor[1] == 2.5);
    assert(v.pCor[2] == 2.5);
    std::cout<<"OK"<<std::endl;
}
