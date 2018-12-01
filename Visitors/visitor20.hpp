#ifndef VISITOR20
#define VISITOR20
#include "visitor.hpp"
#include "../Model/originalX.hpp"
#include "../Model/originalY.hpp"
#include "../Model/e1.hpp"
#include "../Model/e21.hpp"
#include "../Model/e22.hpp"
#include "../Model/e3.hpp"

class Visitor20 : public Visitor
{
    public:
        Visitor20();
        void visit(OriginalX *ox);
        void visit(OriginalY *oy);
        void visitA(int a);
        void visitB(int b);
        void visit(E1 *e1);
        void visit(E21 *e21);
        void visit(E22 *e22);
        void visit(E3 *e3); 
};


#endif