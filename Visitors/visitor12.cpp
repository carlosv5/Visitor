
#include "visitor12.hpp"
#include <iostream>

using namespace std;

Visitor12::Visitor12()
{
};

void Visitor12::visitA(int a){
    cout << "I'm visitor12 and I'm visiting a" << endl;
}

void Visitor12::visitB(int b){
    cout << "I'm visitor12 and I'm visiting b" << endl;
}

void Visitor12::visit(E1 *e1){
    cout << "I'm visitor12 and I'm visiting E1" << endl;
}

void Visitor12::visit(E21 *e21){
    cout << "I'm visitor12 and I'm visiting E21" << endl;   
}

void Visitor12::visit(E22 *e22){
    cout << "I'm visitor12 and I'm visiting E22" << endl;   
}

void Visitor12::visit(E3 *e3){
    cout << "I'm visitor12 and I'm visiting E3" << endl;
} 

