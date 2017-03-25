#include <iostream>
#include "Arme.h"
#include <string.h>

using namespace std;

Arme :: Arme (string _name,int _rld_time,int _cadence,int _orientation,bool _state_rld,bool _state_tir,bool _state_dflt,int _nb_balle) : _name() , _rld_time(200) , _cadence(60) , _orientation(0) , _state_rld(false) , _state_tir(false) , _state_dflt(true) , _nb_balle(20){

};

void Arme :: set_name(string name){
  this->_name = name;
}
void Arme :: set_rld_time(int rld_time){
  this->_rld_time = rld_time;
}
void Arme :: set_cadence(int cadence){
  this->_cadence = cadence;
}
void Arme :: set_orientation(int orientation){
  this->_orientation = orientation;
}
void Arme :: set_state_rld(bool state_rld){
  this->_state_rld = state_rld ;
}
void Arme :: set_state_tir(bool state_tir){
  this->_state_tir = state_tir ;
}
void Arme :: set_state_dflt(bool state_dflt){
  this->_state_dflt = state_dflt;
}
void Arme :: set_nb_balle(int nb_balle){
  this->_nb_balle = nb_balle;
}
