NOTES :
--------------------------------------------------------------------------------
20/05/2017 - Quentin
--------------------------------------------------------------------------------
**ToDo :**
  - Classe Plateforme :
*Implémenter les fonctions dans le .cpp (Constructeur, Getters, Setters)*
  - Classe Arme :
*Implémenter GETTERS (.h + .cpp)*
  - Classe Personnage :
*Un personnage possède une Arme (à ajouter dans ses attributs + dans son constructeur)*

**ToKnow :**
  - utils.h : *enum Orientation des classes Personnage et Monstre déplacé dans utils.h*
  - main.h  : *SUPPRIMER car inutile*
  - utils.cpp : *Contiendra des fonctions de traitement afin de minimiser le code*

  **DONE :**
    - main.cpp : *L'astronaute apparaît et se déplace ;) (grossièrement)*
________________________________________________________________________________

#Weapon
Personnage:
-_joueur
-_taille(dimention) 32x64
-_texture
-_HP
-_Hitbox
-_niveau 0
-_jump_height 2
-_velocity
-_shield
-_arme

Arme:
-_name
-_reload_time
-_cadence
-_orientation
-_texture_list
-_dimension
-_state(reload,tir,default)
-_taille_chargeur


Balle:
-_velocité(x,y)
-_durée de vie
-_dégats


You pass in the address of integers, receiving the x and y coordinates of the mouse's current state in them. SDL_GetMouseState has nothing to do with SDL_MouseMotionEvent.

int x, y;
Uint8 buttons = SDL_GetMouseState(&x, &y);
// x and y contain the mouse coordinates
// buttons contains bit values representing the state of the mouse buttons
