
#include <iostream>
#include "Model/originalX.hpp"
#include "Visitors/visitor11.hpp"
#include "Visitors/visitor12.hpp"
#include "Visitors/visitor20.hpp"
using namespace std;

int main(){
		OriginalX *ox = new OriginalX();
 		ox->accept(new Visitor11());
 		ox->accept(new Visitor12());
		ox->accept(new Visitor20());
		
 		OriginalY *oy = new OriginalY();
 		oy->accept(new Visitor11());
 		oy->accept(new Visitor12());
		oy->accept(new Visitor20());
}
