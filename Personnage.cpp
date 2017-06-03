#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Personnage.h" //Ne pas oublier


using namespace std;

// Constructeur
Personnage::Personnage() {
  _hp = 100;
  _niveau = 0;
  _shield = 0;
  _orientation = DFLT;
  _sprite_dflt = IMG_Load("TEXTURES/astro.png"); //texture du perso (Default);
  _sprite_r = IMG_Load("TEXTURES/astroDroite.png");
  _sprite_l = IMG_Load("TEXTURES/astroGauche.png");
};
//~Personnage() {};

// GETTERS
int Personnage::get_hp(){
  return _hp;
}
int Personnage::get_niveau(){
  return _niveau;
}
int Personnage::get_shield(){
  return _shield;
}
int Personnage::get_x(){
  return _x;
}
int Personnage::get_y(){
  return _y;
}
int Personnage::get_jump_height(){
  return _jump_height;
}
int Personnage::get_v_x(){
  return _v_x;
}
int Personnage::get_v_y(){
  return _v_y;
}
int Personnage::get_width(){
  return _width;
}
int Personnage::get_height(){
  return _height;
}
Orientation Personnage::get_orientation(){
  return _orientation;
}

// SETTERS
void Personnage::set_hp(int hp){
  this->_hp = hp;
}
void Personnage::set_shield(int shield){
  this->_shield = shield;
}
void Personnage::set_niveau(int niveau){
  this->_niveau = niveau;
}
void Personnage::set_x(int x){
  this->_x = x;
}
void Personnage::set_y(int y){
  this->_y = y;
}
void Personnage::set_v_x(int v_x){
  this->_v_x = v_x;
}
void Personnage::set_jump_height(int jump_height){
  this->_jump_height = jump_height;
}
void Personnage::set_v_y(int v_y){
  this->_v_y = 0;
}
void Personnage::set_width(int width){
  this->_width = width;
}
void Personnage::set_height(int height){
  this->_height = height;
}
void Personnage::set_orientation(Orientation orientation){
  this->_orientation = orientation;
}
