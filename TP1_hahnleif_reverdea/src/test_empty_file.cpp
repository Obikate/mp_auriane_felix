#include <string>
#include <iostream>
#include "Dvector.h"
#include <assert.h>
#include <sstream>

int main()
{
    Dvector v("tp1_test_empty.txt");
    assert(v.size() == 0);
    assert(v.pCor == NULL);
    std::cout<<"OK"<<std::endl;
}
