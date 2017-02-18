#include <iostream>
#include "Personnage.h" //Ne pas oublier


using namespace std;

Personnage :: Personnage (int _hp,int _niveau,int _shield) : _hp(100) , _niveau(0), _shield(0){

};

void Personnage :: set_hp(int _hp){
  this->_hp = 100;
}
void Personnage :: set_niveau(int _niveau){
  this->_niveau = 0;
}
void Personnage :: set_shield(int _shield){
  this->_shield = 0;
}
