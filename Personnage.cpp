#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Personnage.h" //Ne pas oublier


using namespace std;


Personnage::Personnage() {
  _hp = 100;
  _niveau = 0;
  _shield = 0;
  _orientation = DFLT;
  _sprite_dflt = IMG_Load("TEXTURES/astro"); //texture du perso (Default);
  _sprite_r = IMG_Load("TEXTURES/astroDroite");
  _sprite_l = IMG_Load("TEXTURES/astroGauche");
};

//~Personnage() {};

int get_orientation(){
  return _orientation;
}
int get_hp(){
  return _hp;
}
int get_niveau(){
  return _niveau;
}
int get_shield(){
  return _shield;
}
int get_jump_height(){
  return _jump_height;
}
int get_width(){
  return _width;
}
int get_weight(){
  return _weight;
}
int get_x(){
  return _x;
}
int get_y(){
  return _y;
}
int get_v_x(){
  return _v_x;
}
int get_v_y(){
  return _v_y;
}

void Personnage::set_orientation(enum Orientation orientation){
  this->_orientation = orientation;
}
void Personnage::set_hp(int hp){
  this->_hp = hp;
}
void Personnage::set_niveau(int niveau){
  this->_niveau = 0;
}
void Personnage::set_shield(int shield){
  this->_shield = 0;
}
void Personnage::set_jump_height(int jump_height){
  this->_jump_height = jump_height;
}
void Personnage::set_width(int width){
  this->_width = 1;//Remplacer la valeur
}
void Personnage::set_weight(int weight){
  this->_weight = 1;//Remplacer la valeur
}
void Personnage::set_x(int x){
  this->_x = 1;//Remplacer la valeur
}
void Personnage::set_y(int y){
  this->_y = 1;//Remplacer la valeur
}
void Personnage::set_v_x(int v_x){
  this->_v_x = 0;
}
void Personnage::set_v_y(int v_y){
  this->_v_y = 0;
