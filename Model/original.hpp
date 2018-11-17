#ifndef ORIGINAL_MODEL
#define ORIGINAL_MODEL
#include "e1.hpp"
#include "e2.hpp"
#include "../Visitors/Visitor.hpp"

namespace Model{
class Original
{
  public:
  virtual void accept(Visitors::Visitor visitor) = 0;

  protected:
    int a;
    E1 *e1;
    E2 *e2;
};
}

#endif