#ifndef DEF_PLATEFORME
#define DEF_PLATEFORME
#include <string.h>
#include "utils.h"

class Plateforme
{
private:
  int _x;
  int _y;
  int _width;
  int _weight;

public:
  Plateforme();

  int get_x();
  int get_y();
  int get_width();
  int get_weight();

  void set_x(int x);
  void set_y(int y);
  void set_width(int width);
  void set_weight(int weight);

};
#endif
