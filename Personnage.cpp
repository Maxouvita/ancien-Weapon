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
  _orientation = DFLT;
};

//~Personnage() {};

int get_orientation(){
  return _orientation;
}

int get_hp(int _hp){
  return _hp;
}

int get_niveau(int _niveau){
  return _niveau;
}

int get_shield(int _shield){
  return _shield;
}


void Personnage :: set_orientation(enum Orientation _orientation){
  this->_orientation = DFLT;
}
void Personnage :: set_hp(int _hp){
  this->_hp = 100;
}
void Personnage :: set_niveau(int _niveau){
  this->_niveau = 0;
}
void Personnage :: set_shield(int _shield){
  this->_shield = 0;
}
