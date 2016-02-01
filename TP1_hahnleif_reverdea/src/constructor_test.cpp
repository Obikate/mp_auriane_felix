#include <string>
#include <iostream>
#include "Dvector.h"
#include <assert.h>
#include <sstream>
int main()
{
    Dvector v(3, 2.5);
    assert(v.pCor[0] == 2.5);
    assert(v.pCor[1] == 2.5);
    assert(v.pCor[2] == 2.5);
    std::cout<<"OK"<<std::endl;
}
