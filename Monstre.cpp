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
int get_orientation(){
  return _orientation;
}
int get_niveau(){
  return _niveau;
}
int get_shield(){
  return _shield;
}
int get_hp(){
  return _hp;
}
int get_x(){
  return _x;
}
int get_y(){
  return _y;
}
int get_v_x(){
  return _v_x;
}int get_v_y(){
  return _v_y;
}


void Monstre::set_hp(int hp){
  this->_orientation = orientation;
}
void Monstre::set_orientation(enum Orientation orientation){
  this->_orientation = orientation;
}
void Monstre::set_niveau(int niveau){
  this->_niveau = niveau;
}
void Monstre::set_shield(int shield){
  this->_shield = shield;
}
void Monstre::set_x(int x){
  this->_x = x;
}
void Monstre::set_y(int y){
  this->_y = y;
}
void Monstre::set_v_x(int v_x){
  this->_v_x = v_x;
}
void Monstre::set_v_y(int v_y){
  this->_v_y = v_y;
}
