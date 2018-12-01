
#include "originalX.hpp"
#include <iostream>

using namespace std;

OriginalX::OriginalX()
{
    e2 = new E21();
    b = 5;
};

void OriginalX::accept(Visitor *visitor){
    visitor->visit(this);
}

int OriginalX::getB(){
    return b;
}




