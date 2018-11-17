#ifndef ORIGINALY_MODEL
#define ORIGINALY_MODEL

#include "original.hpp"
#include "e22.hpp"
#include "e3.hpp"

namespace Model{
class OriginalY : public Original
{
  public:
    OriginalY();
    void accept(Visitors::Visitor visitor);

  private:
    int b;
    E3 *e3;
};
}

#endif