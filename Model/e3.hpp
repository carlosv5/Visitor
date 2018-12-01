#ifndef E3_MODEL
#define E3_MODEL
class Visitor;


class E3
{
  public:
    E3(){};
    void accept(Visitor *visitor){visitor->visit(this);}

};


#endif