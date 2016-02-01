#include <string>
#include <iostream>
#include "Dvector.h"
#include <assert.h>
#include <sstream>
int main()
{
    Dvector v;
    int dimension = v.dim;
    assert(dimension == 0);
    std::cout<<"OK"<<std::endl;
}
