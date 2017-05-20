#ifndef _UTILS_H_
#define _UTILS_H_

#define WIDTH 1280
#define HEIGHT 720

#define IMG_PATH_GAME "./TEXTURES/Level_1-2.png"
#define IMG_PATH_MENU "./TEXTURES/menu principal.jpg"
#define IMG_GUN "./TEXTURES/Bouton Jouer.png"
#define IMG_POP_UP_PLAY "./TEXTURES/Bulle Jouer.png"
#define IMG_LOGO "./TEXTURES/Logo.png"
#define IMG_CURSOR "./TEXTURES/Viseur.png"
#define IMG_PLAYER "./TEXTURES/astro.png"
#define IMG_PLAYERD "./TEXTURES/astroDroite.png"
#define IMG_PLAYERG "./TEXTURES/astroGauche.png"

enum Orientation {
  DFLT  = 0,
  RIGHT = 1,
  LEFT  = 2,
  NUM   = 3
};
#endif
