
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Personnage.h"

#define IMG_PATH_GAME "TEXTURES/LEVEL 1 et 2.jpg"
#define IMG_PATH_MENU "TEXTURES/menu principal.jpg"
#define IMG_GUN "TEXTURES/Bouton Jouer.png"
#define IMG_POP_UP_PLAY "./TEXTURES/Bulle Jouer.png"
#define IMG_LOGO "TEXTURES/Logo.png"
#define IMG_CURSOR "./TEXTURES/Viseur.png"

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

	win = SDL_CreateWindow("Weapon", 1280, 720, WIDTH, HEIGHT, SDL_WINDOW_OPENGL);
	psurface = SDL_GetWindowSurface(win);

	imgBackground = IMG_Load(IMG_PATH_MENU);
	imgBoutonPlay = IMG_Load(IMG_GUN);
	imgBullePlay = IMG_Load(IMG_POP_UP_PLAY);
	imgCursor = IMG_Load(IMG_CURSOR);
	imgLogo = IMG_Load(IMG_LOGO);

	SDL_Event e;
	bool quit = false;

	while (!quit) {

		while ( SDL_PollEvent(&e) ) {
			if ((e.type == SDL_QUIT) || (e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_ESCAPE)){
				quit = true;
			}

			if(e.type == SDL_MOUSEMOTION)
			{
				SDL_GetMouseState(&mouse_x,&mouse_y);
			}
			if (mouse_x > 500 && mouse_x < 828 && mouse_y > 222 && mouse_y < 310)	{
				playButton = true;
			}else
			if (mouse_x > 622 && mouse_x < 685 && mouse_y > 309 && mouse_y < 350)	{
				playButton = true;
			}else
			playButton = false;
			cursor.x = mouse_x - 26;
			cursor.y = mouse_y - 26;
		}
		if (playButton && e.button.button == SDL_BUTTON_LEFT){
			return 1;
		}
		SDL_FillRect(psurface, NULL, SDL_MapRGB(psurface->format, 0, 0, 0 ));
		SDL_BlitSurface(imgBackground, NULL, psurface, &background);
		SDL_BlitSurface(imgBoutonPlay, NULL, psurface, &boutonPlay);
		SDL_BlitSurface(imgCursor, NULL, psurface, &cursor);
		SDL_BlitSurface(imgLogo, NULL, psurface, &Logo);
		if(playButton){
			SDL_BlitSurface(imgBullePlay, NULL, psurface, &bullePlay);
		}
		SDL_UpdateWindowSurface(win);
	}

	SDL_DestroyWindow(win);

	return 0;
}
int play(SDL_Window *win) {

	float v_x, v_y;
	int mouse_x, mouse_y;
	bool quit = false;

	SDL_Event e;
	SDL_Surface *imgLv1 = NULL, *psurface = NULL, *imgCursor = NULL, *imgPos = NULL;
	SDL_Rect Lv1, cursor, pos;

	Personnage perso();

	pos.x = 0;
	pos.y = 0;
	Lv1.x = 0;
	Lv1.y = 0;

	psurface = SDL_GetWindowSurface(win);
	imgLv1 = IMG_Load("/TEXTURES/Level_1-2.png");
	imgCursor = IMG_Load(IMG_CURSOR);
	win = SDL_CreateWindow("Weapon", 1280, 720, WIDTH, HEIGHT, SDL_WINDOW_OPENGL);

	while (!quit) {
		if(SDL_PollEvent(&e)) {
			if ((e.type == SDL_QUIT) || (e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_ESCAPE)){
				quit = true;
			}

      if(e.type == SDL_MOUSEMOTION){
          SDL_GetMouseState(&mouse_x,&mouse_y);
					cursor.x = mouse_x - 26;
					cursor.y = mouse_y - 26;
					SDL_BlitSurface(imgCursor, NULL, psurface, &cursor);
      }

			if(e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_RIGHT){
				v_x = 2;

			}
			if(e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_LEFT){
				v_x = -2;

			}
			if(e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_UP){
				v_y = -10;

			}
			if(v_x > 0){
			}
		}
		SDL_BlitSurface(imgLv1, NULL, psurface, &Lv1);
		SDL_UpdateWindowSurface(win);
	}
	SDL_DestroyWindow(win);
	return 0;
}


int main () {

	SDL_Window *win = NULL;

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_ShowCursor(SDL_DISABLE);

	play(win);

	return 0;
}
