#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <cassert>
#include "Personnage.h"
#include "utils.h"

#define IMG_PATH_GAME "./TEXTURES/Level_1-2.png"
#define IMG_PATH_MENU "./TEXTURES/menu principal.jpg"
#define IMG_GUN "./TEXTURES/Bouton Jouer.png"
#define IMG_POP_UP_PLAY "./TEXTURES/Bulle Jouer.png"
#define IMG_LOGO "./TEXTURES/Logo.png"
#define IMG_CURSOR "./TEXTURES/Viseur.png"
#define IMG_PLAYER "./TEXTURES/astro"
#define IMG_PLAYERD "./TEXTURES/astroDroite"
#define IMG_PLAYERG "./TEXTURES/astroGauche"

#define WIDTH 1280
#define HEIGHT 720

int menu(SDL_Window *win) {

	int mouse_x, mouse_y;
	bool playButton = false;

	SDL_Surface *imgBackground = NULL, *imgBoutonPlay = NULL, *psurface = NULL, *imgBullePlay = NULL, *imgCursor = NULL, *imgLogo = NULL;
	SDL_Rect background,boutonPlay,boutonQuit,bullePlay,cursor,Logo;

	background.x = 0;
	background.y = 0;

	boutonPlay.x = 500;
	boutonPlay.y = 220;
	boutonPlay.w = 330;
	boutonPlay.h = 132;

	boutonQuit.x = 530;
	boutonQuit.y = 540;

	bullePlay.x = 390;
	bullePlay.y = boutonPlay.y+15;
	bullePlay.w = 110;
	bullePlay.h = 57;

	cursor.w = 54;
	cursor.h = 54;

	Logo.x = 529;
	Logo.y = 25;

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0){
		return 1;
	}

	assert(win = SDL_CreateWindow("WEAP0N", 1280, 720, WIDTH, HEIGHT, SDL_WINDOW_OPENGL));
	assert(psurface = SDL_GetWindowSurface(win));

	imgBackground = IMG_Load(IMG_PATH_MENU);
	imgBoutonPlay = IMG_Load(IMG_GUN);
	imgBullePlay = IMG_Load(IMG_POP_UP_PLAY);
	imgCursor = IMG_Load(IMG_CURSOR);
	imgLogo = IMG_Load(IMG_LOGO);

	//getImg(imgBackground, IMG_PATH_MENU);
	//getImg(imgBoutonPlay, IMG_GUN);
	//getImg(imgBullePlay, IMG_POP_UP_PLAY);
	//getImg(imgCursor, IMG_CURSOR);
	//getImg(imgLogo, IMG_LOGO);

	SDL_Event e;
	bool quit = false;

	while (!quit) {
		while (SDL_PollEvent(&e) && !quit) {
			if((e.type == SDL_QUIT) || (e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_ESCAPE)){
				quit = true;
			}
			if(e.type == SDL_MOUSEMOTION){
				SDL_GetMouseState(&mouse_x,&mouse_y);
				cursor.x = mouse_x - 26;
				cursor.y = mouse_y - 26;
			}
			if ((mouse_x > 500 && mouse_x < 828 && mouse_y > 222 && mouse_y < 310) || (mouse_x > 622 && mouse_x < 685 && mouse_y > 309 && mouse_y < 350)) {
				playButton = true;
			} else {
				playButton = false;
			}
			if (playButton && e.button.button == SDL_BUTTON_LEFT){
				SDL_DestroyWindow(win);
				return 1;
			}
			SDL_BlitSurface(imgBackground, NULL, psurface, &background);
			SDL_BlitSurface(imgBoutonPlay, NULL, psurface, &boutonPlay);
			SDL_BlitSurface(imgCursor, NULL, psurface, &cursor);
			SDL_BlitSurface(imgLogo, NULL, psurface, &Logo);
			if(playButton){
				SDL_BlitSurface(imgBullePlay, NULL, psurface, &bullePlay);
			}
			SDL_UpdateWindowSurface(win);
		}
	}
	SDL_DestroyWindow(win);
	return 0;
}
////////////////////////////////////////////////////////////////////////////////
int play(SDL_Window *win) {

	float v_x, v_y;
	int mouse_x, mouse_y;
	bool quit = false;

	SDL_Event e;
	SDL_Surface *imgLevel1 = NULL, *psurface = NULL, *imgCursor = NULL, *imgPos = NULL, *imgPlayer = NULL,  *imgPlayerD = NULL,  *imgPlayerG = NULL;
	SDL_Rect rectLevel1, cursor, pos, rectPlayer, rectPlayerD, rectPlayerG;

	Personnage perso();

	pos.x = 0; //coord perso
	pos.y = 0; //coord perso (w=34*2)
	cursor.w = 54;
	cursor.h = 54;
	rectLevel1.x = 0;
	rectLevel1.y = 0;
	rectPlayer. = ; //remplir avec x,y,w et h pour player, playerD et playerG.
	rectPlayer. = ;
	rectPlayer. = ;
	rectPlayer. = ;
	rectPlayer. = ;
	rectPlayer. = ;
	rectPlayer. = ;
	rectPlayer. = ;
	rectPlayer. = ;
	rectPlayer. = ;
	rectPlayer. = ;
	rectPlayer. = ;

	win = SDL_CreateWindow("Weapon - game", 1280, 720, WIDTH, HEIGHT, SDL_WINDOW_OPENGL);
	psurface = SDL_GetWindowSurface(win);
	imgLevel1 = IMG_Load(IMG_PATH_GAME);
	imgCursor = IMG_Load(IMG_CURSOR);
	imgPlayer = IMG_Load(IMG_PLAYER);
	imgPlayerD = IMG_Load(IMG_PLAYERD);
	imgPlayerG = IMG_Load(IMG_PLAYERG);

	SDL_BlitSurface(imgPerso, NULL, psurface, &rectLevel1);

	while (!quit) {
		while (SDL_PollEvent(&e) && !quit) {
			if((e.type == SDL_QUIT) || (e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_ESCAPE)){
				quit = true;
			}
			int sens = 1
			int tab_x[10] = {1, 1280};
			int tab_y[10] = {50, 0};

      if(e.type == SDL_MOUSEMOTION){
          SDL_GetMouseState(&mouse_x,&mouse_y);
					cursor.x = mouse_x - 26;
					cursor.y = mouse_y - 26;
					SDL_BlitSurface(imgCursor, NULL, psurface, &cursor);
      }
			if(e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_RIGHT){
				v_x = 2;
				SDL_BlitSurface(imgPlayerD, NULL, psurface, &rectPlayer);
			}else{
				SDL_BlitSurface(imgPlayer, NULL, psurface, &rectPlayer);
			}
			if(e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_LEFT){
				v_x = -2;
				SDL_BlitSurface(imgPlayerG, NULL, psurface, &rectPlayer);
			}else{
				SDL_BlitSurface(imgPlayer, NULL, psurface, &rectPlayer);
			}
			if(e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_UP){
				v_y = -10;
			}
			if (v_y > 0) {
				v_y = v_y + 0,05;
			}
			if (y >= 1280 - 68) {
				y = 1280 - 68;
			}
			for (int i = 1; i <= 2; i = i+2) {
				if ((tab_y[i] >= y+68+2) && (tab_y[i] <= y+68-2) && (tab_x[i] >= x+26/2) && (tab_x[i+1] <= x+26/2)){
					y = tab_y[i] + 68;
					v_y = 0
				}
			}
			if (sens == 1) {
				SDL_BlitSurface(imgPlayer, NULL, psurface, &rectPlayer);
			}
			if (sens == 2) {
				SDL_BlitSurface(imgPlayerD, NULL, psurface, &rectPlayerD);
			}
			if (sens == 3) {
				SDL_BlitSurface(imgPlayerG, NULL, psurface, &rectPlayerG);
			}




		}

		SDL_BlitSurface(imgLevel1, NULL, psurface, &rectLevel1);
		SDL_UpdateWindowSurface(win);
	}
	SDL_DestroyWindow(win);
	return 0;
}


int main () {

	SDL_Window *win = NULL;

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_ShowCursor(SDL_DISABLE);
	menu(win);
	play(win);

	return 0;
}
