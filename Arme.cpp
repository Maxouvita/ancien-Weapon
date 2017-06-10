#include <iostream>
#include "Arme.h"
#include <string.h>

using namespace std;

// Constructeur par défaut
Arme::Arme(){
  _name = "DFLT_WEAPON_NAME";
  _rld_time = 200;
  _cadence = 60;
  _orientation = 0;
  _state = 0;
  _nb_balle = 30;
}

// Constructeur surchargé
Arme::Arme(string name, int rld_time, int cadence, int orientation, int state, int nb_balle){
  _name = name;
  _rld_time = rld_time;
  _cadence = cadence;
  _orientation = orientation;
  _state = state;
  _nb_balle = nb_balle;
}

// GETTERS à faire

// SETTERS
void Arme::set_name(string name){
  this->_name = name;
}
void Arme::set_rld_time(int rld_time){
  this->_rld_time = rld_time;
}
void Arme::set_cadence(int cadence){
  this->_cadence = cadence;
}
void Arme::set_orientation(int orientation){
  this->_orientation = orientation;
}
void Arme::set_state(int state){
  this->_state = state ;
}
void Arme::set_nb_balle(int nb_balle){
  this->_nb_balle = nb_balle;
}
