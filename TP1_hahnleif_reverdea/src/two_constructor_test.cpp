/**
 * @author Auriane, Felix.
 * @date 02/01/16.
 * @brief Classe de test pour répondre à la question 2.1.
 */ 
#include "Dvector.h"
#include <assert.h>

int main()
{
    //première version
    Dvector x;
    assert((x.size() == 0) && x.pCor == NULL);
    x = Dvector(3, 1.);
    x.display(std::cout);
    assert(x.size() == 3);
    assert(x.pCor[0] == 1.);
    assert(x.pCor[1] == 1.);
    assert(x.pCor[2] == 1.);

    //deuxième version
    Dvector y = Dvector(3, 1.);
    assert(y.size() == 3);
    assert(y.pCor[0] == 1.);
    assert(y.pCor[1] == 1.);
    assert(y.pCor[2] == 1.);

    std::cout<<"OK"<<std::endl;
}
