
#include "visitor10.hpp"
#include <iostream>

using namespace std;

Visitor10::Visitor10()
{
};

void Visitor10::visit(OriginalX *ox){
    cout << "I'm visitor10 and I'm visiting OriginalX" << endl;
    this->visitA(ox->getA());
    this->visitB(ox->getB());
    ox->getE1().accept(this);
    //ox->getE2()->accept(this);
}

 void Visitor10::visit(OriginalY *oy){
    cout << "I'm visitor10 and I'm visiting OriginalY" << endl;
    this->visitA(oy->getA());
    oy->getE1().accept(this);
    //oy->getE2().accept(this);
    oy->getE3().accept(this);
}

