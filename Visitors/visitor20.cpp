
#include "visitor20.hpp"
#include <iostream>

using namespace std;

Visitor20::Visitor20()
{
};

void Visitor20::visit(OriginalX *ox){
    cout << "I'm visitor20 and I'm visiting OriginalX" << endl;
    ox->getE1()->accept(this);
}

void Visitor20::visit(OriginalY *oy){
    cout << "I'm visitor20 and I'm visiting OriginalY" << endl;
/*     oy->getE1()->accept(this);
    oy->getE3()->accept(this); */
}

void Visitor20::visitA(int a){
    cout << "I'm visitor20 and I'm visiting a" << endl;
}

void Visitor20::visitB(int b){
    cout << "I'm visitor20 and I'm visiting b" << endl;
}

void Visitor20::visit(E1 *e1){
    cout << "I'm visitor20 and I'm visiting E1" << endl;
}

void Visitor20::visit(E21 *e21){
    cout << "I'm visitor20 and I'm visiting E21" << endl;   
}

void Visitor20::visit(E22 *e22){
    cout << "I'm visitor20 and I'm visiting E22" << endl;   
}

void Visitor20::visit(E3 *e3){
    cout << "I'm visitor20 and I'm visiting E3" << endl;
}

