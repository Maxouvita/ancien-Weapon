#ifndef DEF_MONSTRE
#define DEF_MONSTRE
#include <string.h>

class Monstre
{
private:

  int _x;
  int _y;
  int _hp;
  int _niveau;
  int _v_x;
  int _v_y;
  int _shield;
  int _min_hitbox_x;
  int _min_hitbox_y;
  int _max_hitbox_x;
  int _max_hitbox_y;

  bool _sprite_dflt;
  bool _sprite_r;
  bool _sprite_l;

public:
  Monstre();
  void niveau(int _niveau);
  void shield(int _shield);
  void x(int _x);
  void y(int _x);
};
#endif
