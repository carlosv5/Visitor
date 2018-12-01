#ifndef E1_MODEL
#define E1_MODEL
#include "../Visitors/visitor.hpp"

class E1
{
  public:
    E1(){};
    void accept(Visitor *visitor){visitor->visit(this);}

};

#endif