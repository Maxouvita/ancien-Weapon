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
  Monstre::Monstre(int _niveau,int _shield,int _x,int _y);
  void Monstre::niveau(int _niveau);
  void Monstre::shield(int _shield);
  void Monstre::set_pos_x(int _x);
  void Monstre::set_pos_y(int _y);
};
#endif
