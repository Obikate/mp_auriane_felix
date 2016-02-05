#include <string>
#include <iostream>
#include "Dvector.h"
#include <assert.h>
#include <sstream>

int main()
{
    Dvector v("tp1_test2.txt");
    assert(v.size() == 16737);
    //on teste avec une valeur arbitrairement choisie
    assert(v.pCor[16469] == 4.1589705e-01);
    std::cout<<"OK"<<std::endl;
}
