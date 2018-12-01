
#include "originalY.hpp"
#include <iostream>
#include "../Visitors/visitor.hpp"

using namespace std;

OriginalY::OriginalY()
{
    e2 = new E22();
    e3 = new E3();
};
void OriginalY::accept(Visitor *visitor){
    visitor->visit(this);
}

E3 OriginalY::getE3(){
    return *e3;
}
