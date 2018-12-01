#ifndef E3_MODEL
#define E3_MODEL
#include "../Visitors/visitor.hpp"

class E3
{
  public:
    E3(){};
    void accept(Visitor *visitor){visitor->visit(this);}

};


#endif