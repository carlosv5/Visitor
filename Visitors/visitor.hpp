#ifndef VISITOR
#define VISITOR

class OriginalX;
class OriginalY;
class E1;
class E21;
class E22;
class E3;



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