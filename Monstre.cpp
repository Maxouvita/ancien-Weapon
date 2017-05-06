#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include "Monstre.h"


using namespace std;


Monstre::Monstre() {
  _niveau = 0;
  _shield =0;
  _x =0;
  _y =0;
  //_sprite_dflt; // = SDL_Surface("TEXTURES/INCONNU POUR LINSTANT"); //texture du perso (Default);
  //_sprite_r;
  //_sprite_l;
};

Monstre::Monstre(int _niveau,int _shield,int _x,int _y) {
  _niveau= 0;
  _shield =0;
  _x =0;
  _y =0;
  /*_sprite_dflt; // = SDL_Surface("TEXTURES/INCONNU POUR LINSTANT"); //texture du perso (Default);
  _sprite_r;
  _sprite_l;*/
};

void Monstre::set_niveau(int _niveau){
  this->_niveau = 0;
}
void Monstre::set_shield(int _shield){
  this->_shield = 0;
}
void Monstre::set_x(int _x){
  this->_x = 0;
}
void Monstre::set_y(int _y){
  this->_y = 0;
}
