#ifndef E21_MODEL
#define E21_MODEL

#include "e2.hpp"
#include "../Visitors/Visitor.hpp"


namespace Model{
class E21 : public E2
{
  public:
    E21(){};
    void accept(Visitors::Visitor visitor){}
};
}

#endif