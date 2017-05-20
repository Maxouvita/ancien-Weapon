#ifndef DEF_MONSTRE
#define DEF_MONSTRE
#include <string>
#include "utils.h"

class Monstre
{
private:
  int _hp;
  int _shield;
  int _niveau;
  int _x;
  int _y;
  int _v_x;
  int _v_y;
  Orientation _orientation;

public:
  // Constructeur
  Monstre();
  // GETTERS
  int get_hp();
  int get_niveau();
  int get_shield();
  int get_x();
  int get_y();
  int get_v_x();
  int get_v_y();
  Orientation get_orientation();
  // SETTERS
  void set_hp(int _hp);
  void set_shield(int _shield);
  void set_niveau(int _niveau);
  void set_x(int _x);
  void set_y(int _y);
  void set_v_x(int _v_x);
  void set_v_y(int _v_y);
  void set_orientation(Orientation _orientation);
};
#endif
