#ifndef E3_MODEL
#define E3_MODEL
#include "../Visitors/visitor.hpp"


namespace Model{
class E3
{
  public:
    E3(){};
    void accept(Visitors::Visitor visitor){}

};
}

#endif