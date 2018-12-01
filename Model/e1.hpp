#ifndef E1_MODEL
#define E1_MODEL
class Visitor;

class E1
{
  public:
    E1(){};
    void accept(Visitor *visitor){visitor->visit(this);}

};

#endif