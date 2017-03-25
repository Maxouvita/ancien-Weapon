
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


int jeux() {

	int mouse_x, mouse_y;
	bool playButton = false;

	SDL_Window *win = NULL;
	SDL_Surface *imgBackground = NULL, *psurface = NULL, *imgPointer = NULL;
	SDL_Rect background, pointer;

	background.x = 0;
	background.y = 0;


	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
			return 1;


	win = SDL_CreateWindow("Weapon", 1280, 720, WIDTH, HEIGHT, SDL_WINDOW_OPENGL);
	psurface = SDL_GetWindowSurface(win);
	SDL_ShowCursor(SDL_DISABLE);

	imgBackground = IMG_Load(IMG_PATH_GAME);

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
			pointer.x = mouse_x - 26;
			pointer.y = mouse_y - 26;
			SDL_BlitSurface(imgPointer, NULL, psurface, &pointer);
		}
		SDL_FillRect(psurface, NULL, SDL_MapRGB(psurface->format, 0, 0, 0 ));
		SDL_BlitSurface(imgBackground, NULL, psurface, &background);
		SDL_UpdateWindowSurface(win);
	}

	SDL_DestroyWindow(win);

	return 0;
}

int menu() {

	int mouse_x, mouse_y;
	bool playButton = false;

	SDL_Window *win = NULL;
	SDL_Surface *imgBackground = NULL, *imgBoutonPlay = NULL, *psurface = NULL, *imgBullePlay = NULL, *imgPointer = NULL, *imgLogo = NULL;
	SDL_Rect background,boutonPlay,boutonQuit,bullePlay,pointer,Logo;

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

	pointer.w = 54;
	pointer.h = 54;

	Logo.x = 529;
  Logo.y = 25;


	if (SDL_Init(SDL_INIT_EVERYTHING) < 0){
		return 1;
	}

	win = SDL_CreateWindow("Weapon", 1280, 720, WIDTH, HEIGHT, SDL_WINDOW_OPENGL);
	psurface = SDL_GetWindowSurface(win);
	SDL_ShowCursor(SDL_DISABLE);

	imgBackground = IMG_Load(IMG_PATH_MENU);
  imgBoutonPlay = IMG_Load(IMG_GUN);
	imgBullePlay = IMG_Load(IMG_POP_UP_PLAY);
	imgPointer = IMG_Load(IMG_CURSOR);
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
			pointer.x = mouse_x - 26;
			pointer.y = mouse_y - 26;
			SDL_BlitSurface(imgPointer, NULL, psurface, &pointer);

		}
		 if (playButton && e.button.button == SDL_BUTTON_LEFT){
			 jeux();
		 }
		SDL_FillRect(psurface, NULL, SDL_MapRGB(psurface->format, 0, 0, 0 ));
		SDL_BlitSurface(imgBackground, NULL, psurface, &background);
		SDL_BlitSurface(imgBoutonPlay, NULL, psurface, &boutonPlay);
		SDL_BlitSurface(imgPointer, NULL, psurface, &pointer);
		SDL_BlitSurface(imgLogo, NULL, psurface, &Logo);
		if(playButton){
			SDL_BlitSurface(imgBullePlay, NULL, psurface, &bullePlay);
		}
		SDL_UpdateWindowSurface(win);
	}

	SDL_DestroyWindow(win);

	return 0;
}

int main () {
	menu();

	return 0;
}
