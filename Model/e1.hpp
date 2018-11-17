#ifndef E1_MODEL
#define E1_MODEL
#include "../Visitors/Visitor.hpp"

namespace Model{
class E1
{
  public:
    E1(){};
    void accept(Visitors::Visitor visitor){}

};
}

#endif