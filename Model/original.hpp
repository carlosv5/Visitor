#ifndef ORIGINAL_MODEL
#define ORIGINAL_MODEL
#include "e1.hpp"
#include "e2.hpp"

namespace Model{
class Original
{
  public:
    Original();

  protected:
    int a;
    E1 *e1;
    E2 *e2;
};
}

#endif