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
  bool _state_rld;
  bool _state_tir;
  bool _state_dflt;
  int _nb_balle;
public:

  Arme();
  Arme(string _name, int _rld_time, int _cadence, int _orientation, bool _state_rld, bool _state_tir, bool _state_dflt, int _nb_balle);

  // GETTERS à faire

  void set_name(string _name);
  void set_rld_time(int _rld_time);
  void set_cadence(int _cadence);
  void set_orientation(int _orientation);
  void set_state_rld(bool _state_rld);
  void set_state_tir(bool _state_tir);
  void set_state_dflt(bool _state_dflt);
  void set_nb_balle(int _nb_balle);

};
#endif
