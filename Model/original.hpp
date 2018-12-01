#ifndef ORIGINAL_MODEL
#define ORIGINAL_MODEL
#include "e1.hpp"
#include "e2.hpp"
#include "../Visitors/visitor.hpp"
#include <iostream>

class Original
{
  public:
  Original(){
    std::cout << "Original constructor" << std::endl;
		a = 0;
		e1 = new E1();
	}
  virtual void accept(Visitor *visitor){}
  virtual int getA(){return a;}  
  virtual E1 getE1(){return *e1;}
  virtual E2 getE2(){return *e2;}

  protected:
    int a;
    E1 *e1;
    E2 *e2;
};


#endif