
#include "visitor11.hpp"
#include <iostream>

using namespace std;

Visitor11::Visitor11()
{
};

void Visitor11::visitA(int a){
    cout << "I'm visitor11 and I'm visiting a" << endl;
}

void Visitor11::visitB(int b){
    cout << "I'm visitor11 and I'm visiting b" << endl;
}

void Visitor11::visit(E1 *e1){
    cout << "I'm visitor11 and I'm visiting E1" << endl;
}

void Visitor11::visit(E21 *e21){
    cout << "I'm visitor11 and I'm visiting E21" << endl;   
}

void Visitor11::visit(E22 *e22){
    cout << "I'm visitor11 and I'm visiting E22" << endl;   
}

void Visitor11::visit(E3 *e3){
    cout << "I'm visitor11 and I'm visiting E3" << endl;
} 

