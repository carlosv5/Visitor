#ifndef E22_MODEL
#define E22_MODEL

#include "e2.hpp"
#include "../Visitors/Visitor.hpp"


namespace Model{
class E22 : public E2
{
  public:
    E22(){};
    void accept(Visitors::Visitor visitor){}
};
}

#endif