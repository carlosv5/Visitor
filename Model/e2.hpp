#ifndef E2_MODEL
#define E2_MODEL
#include "../Visitors/visitor.hpp"

class E2
{
    public:
      virtual void accept(Visitor visitor){};
};


#endif