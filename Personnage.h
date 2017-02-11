#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include <string.h>

class Personnage
{
private:
  int joueur_x;//X Perso
  int joueur_y;//Y Perso
  SDL_Surface _texture;//texture du perso (Default, gauche, droite)
  int _hp;//vie du perso
  int _niveau;//level du perso
  int _jump_height;//Valeur vitesse y prise lors du saut
  int _velocity_x;//valeur vitesse x perso
  int _velocity_y;//valeur vitesse y perso
  int _shield;
  int _width;//Largeur image perso
  int _weight;//Hauteur image perso
  int _hitbox_x;//Coords min X
  int _hitbox_x;//Coords min Y
  int _hitbox_y;//Coords max X
  int _hitbox_y;//Coords max Y
  Arme _arme;

public:
    void hp(int hp);

};
#endif
