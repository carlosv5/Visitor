#ifndef ORIGINALY_MODEL
#define ORIGINALY_MODEL

#include "Original.hpp"

namespace Model{
class OriginalY : public Original
{
  public:
    OriginalY();

  private:
    int b;
    E3 *e3;
};
}

#endif