#ifndef ORIGINALX_MODEL
#define ORIGINALX_MODEL

#include "original.hpp"
#include "e21.hpp"
class Visitor;

class OriginalX : public Original
{
  public:
    OriginalX();
    void accept(Visitor *visitor);
    int getB();

  private:
    int b;
};


#endif