#ifndef DEF_MONSTRE
#define DEF_MONSTRE
#include <string>

class Monstre
{
private:
  int _x;
  int _y;
  int _hp;
  int _niveau;
  int _v_x;
  int _v_y;
  int _shield;

  enum Orientation {
    DFLT  = 0,
    RIGHT = 1,
    LEFT  = 2,
    NUM   = 3
  };
  enum Orientation _orientation;

public:
  Monstre();
  enum Orientation get_orientation();
  int get_hp();
  int get_niveau();
  int get_shield();
  int get_x();
  int get_y();
  int get_v_x();
  int get_v_y();
  
  void set_niveau(int _niveau);
  void set_hp(int _hp);
  void set_shield(int _shield);
  void set_x(int _x);
  void set_y(int _y);
  void set_v_x(int _v_x);
  void set_v_y(int _v_y);
  void set_orientation(int _orientation);


};
#endif
