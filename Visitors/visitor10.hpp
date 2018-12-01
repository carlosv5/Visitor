#ifndef VISITOR10
#define VISITOR10
#include "visitor.hpp"
#include "../Model/originalX.hpp"
#include "../Model/originalY.hpp"
#include "../Model/e1.hpp"
#include "../Model/e21.hpp"
#include "../Model/e22.hpp"
#include "../Model/e3.hpp"

class Visitor10 : public Visitor
{
    public:
        Visitor10();
        void visit(OriginalX *ox);
        void visit(OriginalY *oy);
};


#endif