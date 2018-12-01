#ifndef VISITOR
#define VISITOR

#include "../Model/originalX.hpp"
#include "../Model/originalY.hpp"



class Visitor
{
    public:
        virtual void visit(OriginalX *ox) {
        }

        virtual void visit(OriginalY *oy) {
        }
        
        virtual void visitA(int a) {
        }

        virtual void visitB(int b) {
        }
        
        virtual void visit(E1 *e1) {
        }
        
        virtual void visit(E21 *e21) {
        }
        
        virtual void visit(E22 *e22) {
        }
        
        virtual void visit(E3 *e3) {
        }
};


#endif