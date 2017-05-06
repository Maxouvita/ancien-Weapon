#ifndef DEF_MONSTRE
#define DEF_MONSTRE
#include <string>

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
  Monstre(int _niveau,int _shield,int _x,int _y);
  void set_niveau(int _niveau);
  void set_shield(int _shield);
  void set_x(int _x);
  void set_y(int _y);
};
#endif
