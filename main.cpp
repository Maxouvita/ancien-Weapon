#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <cassert>
#include <iostream>
#include "utils.h"
#include "Event.h"
#include "Personnage.h"
#include "Monstre.h"

using namespace std;

int menu(SDL_Window *win) {

	int mouse_x, mouse_y;
	bool playButton = false;

	SDL_Surface *imgBackground = NULL, *imgBoutonPlay = NULL, *psurface = NULL, *imgBullePlay = NULL, *imgCursor = NULL, *imgLogo = NULL;
	SDL_Rect background, boutonPlay, boutonQuit, bullePlay, cursor, Logo;

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

	SDL_ShowCursor(SDL_DISABLE);

	imgBackground = IMG_Load(IMG_PATH_MENU);
	imgBoutonPlay = IMG_Load(IMG_GUN);
	imgBullePlay = IMG_Load(IMG_POP_UP_PLAY);
	imgCursor = IMG_Load(IMG_CURSOR);
	imgLogo = IMG_Load(IMG_LOGO);


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
			if ((
					mouse_x > 500 &&
					mouse_x < 828 &&
					mouse_y > 222 &&
					mouse_y < 310
				) || (
					mouse_x > 622 &&
					mouse_x < 685 &&
					mouse_y > 309 &&
					mouse_y < 350
				)) {
				playButton = true;
			} else {
				playButton = false;
			}

			if (playButton && e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT){
				quit = true;
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

int play(SDL_Window *win) {

	double speedBx,speedBy;
	double speedx, speedy;
	int mouse_x, mouse_y;
	bool quit = false;
	double coef = 0;

	SDL_Event e;
	SDL_Surface *imgLevel1 = NULL, *psurface = NULL, *imgCursor = NULL, *imgPlayer = NULL, *imgPlayerD = NULL, *imgPlayerG = NULL, *imgBalle = NULL;
	SDL_Rect rectLevel1, cursor, rectPlayer, rectBalle;

	Personnage perso;

	cursor.w = 54;
	cursor.h = 54;
	rectLevel1.x = 0;
	rectLevel1.y = 0;
	rectPlayer.x = 20;
	rectPlayer.y = 20;
	rectPlayer.w = 13;
	rectPlayer.h = 34;
	rectBalle.x = rectPlayer.x; // Balle.png
	rectBalle.y = rectPlayer.y;
	rectBalle.w = 5;
	rectBalle.h = 3;



	assert(win = SDL_CreateWindow("Weapon - game", 1280, 720, WIDTH, HEIGHT, SDL_WINDOW_OPENGL));
	assert(psurface = SDL_GetWindowSurface(win));

	SDL_ShowCursor(SDL_DISABLE);

	assert(imgLevel1 = IMG_Load(IMG_PATH_GAME));
	assert(imgCursor = IMG_Load(IMG_CURSOR));
	assert(imgPlayer = IMG_Load(IMG_PLAYER));
	assert(imgPlayerD = IMG_Load(IMG_PLAYERD));
	assert(imgPlayerG = IMG_Load(IMG_PLAYERG));
	imgBalle = IMG_Load("TEXTURES/Balle.png");

	Event event;
	event.repeat = false;
	while (!quit) {
		if (event.update()) {
			if(event.quit || event.capture(Event::ESCAPE)){
				quit = true;
			}

					cursor.x = event.mouse.x - 26;
					cursor.y = event.mouse.y - 26;

			if(event.key[Event::RIGHT]){
				if (speedx < 18) {
					speedx += 4;
				}
				perso.set_orientation(RIGHT);
			}

			if(event.key[Event::LEFT]){
				if (speedx > -18) {
					speedx -= 4;
				}
				perso.set_orientation(LEFT);

			}

			if(event.key[Event::UP]){
				if (rectPlayer.y >= 680){
					speedy = -18;
				}
				perso.set_orientation(DFLT);
			}
			if(event.key[Event::DOWN]){
				speedy += 5;
				perso.set_orientation(DFLT);
			}

			if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_RIGHT &&
				  e.type == SDL_KEYDOWN   && e.key.keysym.sym == SDLK_UP)     {
						if (rectPlayer.y >= 680){
							speedy = -18;
						}
						if (speedx < 18) {
							speedx += 4;
						}
			}

			if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_LEFT &&
				  e.type == SDL_KEYDOWN   && e.key.keysym.sym == SDLK_UP)     {
						if (rectPlayer.y >= 680){
							speedy = -18;
						}
						if (speedx > -18) {
							speedx -= 4;
						}
			}

		}

		if (speedx > 0) {
			speedx -= 1;
		}
		if (speedx < 0) {
			speedx += 1;
		}
		if (speedx > -1 && speedx > 1) {
			speedx = speedx * 0.99;
		}


		rectPlayer.x = rectPlayer.x + speedx;
		rectPlayer.y = rectPlayer.y + speedy;

		speedy += 1.15;

		if (rectPlayer.y >= 680) {
			rectPlayer.y = 680;
		}
		if (rectPlayer.x <= 1) {
			rectPlayer.x = 2;
		}
		if (rectPlayer.x >= 1252) {
			rectPlayer.x = 1251;
		}
		if (event.mouse.l) {
			rectBalle.x = rectPlayer.x;
			rectBalle.y = rectPlayer.y;
			speedBx = (event.mouse.x - rectPlayer.x)/5;
			speedBy = (event.mouse.y - rectPlayer.y)/5;

			printf("speedBx: %lf\n", speedBx);
			printf("speedBy: %lf\n", speedBy);
		}
		if (event.mouse.r) {
			speedBx = 0;
			speedBy = 0;
			rectBalle.x = rectPlayer.x;
			rectBalle.y = rectPlayer.y;
		}

		/*if (rectBalle.x >= 1280 || rectBalle.x <= 0 || rectBalle.y <= 720 || rectBalle.y >= 0) {
			rectBalle.x = rectPlayer.x;
			rectBalle.y = rectPlayer.y;
			speedBx = 0;
			speedBx = 0;
		}*/

		printf("%lf\n", (sqrt((speedBx*speedBx) + (speedBy*speedBy))));
		if (speedBx != 0 && speedBy != 0) {
			while ((sqrt((speedBx*speedBx) + (speedBy*speedBy))) > 30) {
				speedBx = speedBx * 0.99;
				speedBy = speedBy * 0.99;
			}
			while ((sqrt((speedBx*speedBx) + (speedBy*speedBy))) < 29) {
				speedBx = speedBx * 1.01;
				speedBy = speedBy * 1.01;
			}
		}
		rectBalle.x = rectBalle.x + speedBx;
		rectBalle.y = rectBalle.y + speedBy;

		SDL_BlitSurface(imgLevel1, NULL, psurface, &rectLevel1);

		if (perso.get_orientation() == RIGHT) {
			SDL_BlitSurface(imgPlayerD, NULL, psurface, &rectPlayer);
		} else if(perso.get_orientation() == LEFT) {
			SDL_BlitSurface(imgPlayerG, NULL, psurface, &rectPlayer);
		} else {
			SDL_BlitSurface(imgPlayer, NULL, psurface, &rectPlayer);
		}

		SDL_BlitSurface(imgBalle, NULL, psurface, &rectBalle);
		SDL_BlitSurface(imgCursor, NULL, psurface, &cursor);
		SDL_UpdateWindowSurface(win);

	}

	SDL_DestroyWindow(win);
	return 0;
}

int main () {
	SDL_Window *winMenu = NULL;
	SDL_Window *winPlay = NULL;
	//SDL_Window *win = NULL;

	SDL_Init(SDL_INIT_EVERYTHING);

	//menu(winMenu);
	play(winPlay);
	return 0;
}
