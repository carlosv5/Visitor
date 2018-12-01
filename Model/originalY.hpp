#ifndef ORIGINALY_MODEL
#define ORIGINALY_MODEL

#include "original.hpp"
#include "e22.hpp"
#include "e3.hpp"
class Visitor;

class OriginalY : public Original
{
  public:
    OriginalY();
    void accept(Visitor *visitor);
    E3 getE3();


  private:
    E3 *e3;
};


#endif