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
  int _min_hitbox_x;//Coords min X
  int _min_hitbox_y;//Coords min Y
  int _max_hitbox_x;//Coords max X
  int _max_hitbox_y;//Coords max Y

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
  int get_hp(int _hp);
  int get_niveau(int _niveau);
  int get_shield(int _shield);

  void set_orientation(int _orientation);
  void set_hp(int _hp);
  void set_niveau(int _niveau);
  void set_shield(int _shield);
};
#endif
