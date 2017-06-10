#ifndef DEF_ARME
#define DEF_ARME
#include <string>

using namespace std;

class Arme {
private:
  string _name;
  int _rld_time;
  int _cadence;
  int _orientation;
  int _texture_list;
  int _dimension;
  int _state;
  int _nb_balle;

public:
  // Constructeurs
  Arme();
  Arme(string _name, int _rld_time, int _cadence, int _orientation, int _state, int _nb_balle);
  // GETTERS
  int get_name();
  int get_rld_time();
  int get_cadence();
  int get_orientation();
  int get_state();
  int get_nb_balle();

  // SETTERS
  void set_name(string _name);
  void set_rld_time(int _rld_time);
  void set_cadence(int _cadence);
  void set_orientation(int _orientation);
  void set_state(int _state);
  void set_nb_balle(int _nb_balle);
};
#endif
