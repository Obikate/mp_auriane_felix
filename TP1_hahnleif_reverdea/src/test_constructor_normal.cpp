/**
 * @author Auriane, Felix.
 * @date 01/01/16.
 * @brief Classe de test vérifiant le bon fonctionnement du constructeur
 * par défaut.
 */ 
#include "Dvector.h"
#include <assert.h>

int main()
{
    Dvector v;
    int dimension = v.size();
    assert(dimension == 0);
    assert(v.pCor == NULL);
    std::cout<<"OK"<<std::endl;
}
