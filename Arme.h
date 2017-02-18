#ifndef DEF_ARME
#define DEF_ARME
#include <string.h>

class Arme
{
private:
  int _name;
  int _rld_time;
  int _cadence;
  int _orientation;
  int _texture_list;
  int _dimension;
  int _state(int rld,int tir,int dflt);
  int _nb_balle;
public:

  void set_name(char* _name);
  void set_rld_time(int _rld_time);
  void set_cadence(int _cadence);
  void set_orientation(int _orientation);
  void set_state(int _state);
  void set_nb_balle(int _nb_balle);
};
#endif
