
#include "visitor20.hpp"
#include <iostream>

using namespace std;
namespace Visitors{

Visitor20::Visitor20()
{
};
void Visitor20::visitE1(Model::E1 *e1){
    cout << "I'm visitor20 and I'm visiting E1" << endl;
}

void Visitor20::visitE3(Model::E3 *e3){
    cout << "I'm visitor20 and I'm visiting E3" << endl;
}
}