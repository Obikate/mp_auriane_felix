#include <string>
#include <iostream>
#include "Dvector.h"
#include <assert.h>
#include <sstream>
int main()
{
    Dvector v(5, 2.5);
    int size = v.size();
    assert(size == 5);
    std::cout<<"OK"<<std::endl;
}
