#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string.h>
#include "utils.h"

class Personnage
{
private:

  int _x;//X Perso
  int _y;//Y Perso
  int _hp;//vie du perso
  int _niveau;//level du perso
  int _jump_height;//Valeur vitesse y prise lors du saut
  int _v_x;//valeur vitesse x perso
  int _v_y;//valeur vitesse y perso
  int _shield;
  int _width;//Largeur image perso
  int _weight;//Hauteur image perso

  SDL_Surface *_sprite_dflt, *_sprite_l, *_sprite_r;

  enum Orientation {
    DFLT  = 0,
    RIGHT = 1,
    LEFT  = 2,
    NUM   = 3
  };
  enum Orientation _orientation;


public:
  Personnage();
  //~Personnage();

  enum Orientation get_orientation();
  int get_hp();
  int get_niveau();
  int get_shield();

  int get_jump_height();
  int get_width();
  int get_weight();
  int get_x();
  int get_y();
  int get_v_x();
  int get_v_y();

  void set_orientation(int orientation);
  void set_hp(int hp);
  void set_niveau(int niveau);
  void set_shield(int shield);
  void set_jump_height(int jump_height);
  void set_width(int width);
  void set_weight(int weight);
  void set_x(int x);
  void set_y(int y);
  void set_v_x(int v_x);
  void set_v_y(int v_y);
};
#endif
