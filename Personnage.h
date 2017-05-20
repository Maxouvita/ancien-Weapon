#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string.h>
#include "utils.h"

class Personnage
{
private:
  int _hp;
  int _shield;
  int _niveau;
  int _x;
  int _y;
  int _jump_height; //Valeur vitesse y prise lors du saut
  int _v_x; //valeur vitesse x perso
  int _v_y; //valeur vitesse y perso
  int _width; //Largeur image perso
  int _height; //Hauteur image perso
  //Arme _arme;
  Orientation _orientation;
  SDL_Surface *_sprite_dflt, *_sprite_l, *_sprite_r;

public:
  //Constructeur
  Personnage();
  //~Personnage();
  // GETTERS
  int get_hp();
  int get_niveau();
  int get_shield();
  int get_x();
  int get_y();
  int get_jump_height();
  int get_v_x();
  int get_v_y();
  int get_width();
  int get_height();
  Orientation get_orientation();
  // SETTERS
  void set_hp(int hp);
  void set_shield(int shield);
  void set_niveau(int niveau);
  void set_x(int x);
  void set_y(int y);
  void set_jump_height(int jump_height);
  void set_v_x(int v_x);
  void set_v_y(int v_y);
  void set_width(int width);
  void set_height(int height);
  void set_orientation(Orientation orientation);
};
#endif
