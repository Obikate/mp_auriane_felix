#include <string>
#include <iostream>
#include "Dvector.h"
#include <assert.h>
#include <sstream>

int main()
{
    Dvector v("tp1_test_values.txt");
    assert(v.size() == 5);
    assert(v.pCor[0] == 0);
    assert(v.pCor[1] == 1);
    assert(v.pCor[2] == 2.4);
    assert(v.pCor[3] == 3.695);
    assert(v.pCor[4] == 4);
    std::cout<<"OK"<<std::endl;
}
