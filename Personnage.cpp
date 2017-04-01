#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Personnage.h" //Ne pas oublier


using namespace std;


Personnage::Personnage() {
  _hp = 100;
  _niveau = 0;
  _shield = 0;
  _sprite_dflt; // = SDL_Surface("TEXTURES/astro"); //texture du perso (Default);
  _sprite_r; // = SDL_Surface("TEXTURES/astroDroite");
  _sprite_l; // = SDL_Surface("TEXTURES/astroGauche");
};

//~Personnage() {};

void Personnage :: set_hp(int _hp){
  this->_hp = 100;
}
void Personnage :: set_niveau(int _niveau){
  this->_niveau = 0;
}
void Personnage :: set_shield(int _shield){
  this->_shield = 0;
}
