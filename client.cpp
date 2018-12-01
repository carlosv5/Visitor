
#include <iostream>
#include "Model/originalX.hpp"
#include "Visitors/visitor20.hpp"
using namespace std;

int main(){
		OriginalX *ox = new OriginalX();
/* 		ox.accept(new V11());
		ox.accept(new V12()); */
		ox->accept(new Visitor20());
		
 		OriginalY *oy = new OriginalY();
/* 		oy.accept(new V11());
		oy.accept(new V12()); */
		oy->accept(new Visitor20());
}
