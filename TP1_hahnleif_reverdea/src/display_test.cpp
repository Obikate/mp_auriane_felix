#include <string>
#include <iostream>
#include "Dvector.h"
#include <assert.h>
#include <sstream>
int main()
{
    Dvector v(3, 2.5);
    assert(v.size() == 3);
    std::stringstream str;
    v.display(str);
    assert(str.str() == "2.5\n2.5\n2.5\n");
    std::cout<<"OK"<<std::endl;
}
