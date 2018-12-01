#ifndef VISITOR12
#define VISITOR12
#include "visitor10.hpp"
#include "../Model/originalX.hpp"
#include "../Model/originalY.hpp"
#include "../Model/e1.hpp"
#include "../Model/e21.hpp"
#include "../Model/e22.hpp"
#include "../Model/e3.hpp"

class Visitor12 : public Visitor10
{
    public:
        Visitor12();
        void visitA(int a);
        void visitB(int b);
        void visit(E1 *e1);
        void visit(E21 *e21);
        void visit(E22 *e22);
        void visit(E3 *e3); 
};


#endif