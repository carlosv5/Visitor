#ifndef VISITOR20
#define VISITOR20
#include "visitor.hpp"
#include "../Model/e1.hpp"
#include "../Model/e3.hpp"

namespace Visitors{
class Visitor20 : public Visitor
{
    public:
        Visitor20();
        void visitE1(Model::E1 *e1);
        void visitE3(Model::E3 *e3);
};
}

#endif