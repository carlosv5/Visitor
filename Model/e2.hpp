#ifndef E2_MODEL
#define E2_MODEL
#include "../Visitors/visitor.hpp"

class E2
{
    protected:
      void accept(Visitor visitor);
};


#endif