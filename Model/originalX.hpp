#ifndef ORIGINALX_MODEL
#define ORIGINALX_MODEL

#include "original.hpp"
#include "e21.hpp"

namespace Model{
class OriginalX : public Original
{
  public:
    OriginalX();
    void accept(Visitors::Visitor visitor);

  private:
    int b;
};
}

#endif