#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Personnage.h"

#define WIDTH 1080
#define HEIGHT 720
#define IMG_PATH "LEVEL 1 et 2.bmp"
#define IMG_GUN "Proto-Perso.bmp"

int main (int argc, char *argv[]) {

	SDL_Window *win = NULL;
	SDL_Renderer *renderer = NULL;
	SDL_Texture *img = NULL, *gun = NULL;
	int w, h;
  int a, b;


	if (SDL_Init(SDL_INIT_VIDEO) < 0)
			return 1;


	win = SDL_CreateWindow("Weapon", 1080, 720, WIDTH, HEIGHT, 0);
	renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);


	img = IMG_LoadTexture(renderer, IMG_PATH);
  gun = IMG_LoadTexture(renderer, IMG_GUN);
	SDL_QueryTexture(img, NULL, NULL, &w, &h);
  SDL_QueryTexture(gun, NULL, NULL, &a, &b);

	SDL_Rect texr; texr.x = 0; texr.y = 0; texr.w = w ; texr.h = h;
  SDL_Rect texg; texg.x = 500; texg.y = 645; texg.w = a*2 ; texg.h = b*2;


	while (1) {


		SDL_Event e;
		if ( SDL_PollEvent(&e) ) {
			if (e.type == SDL_QUIT)
				break;
			else if (e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_ESCAPE)
				break;
		}


		SDL_RenderClear(renderer);
		SDL_RenderCopy(renderer, img, NULL, &texr);
    SDL_RenderCopy(renderer, gun, NULL, &texg);
		SDL_RenderPresent(renderer);

	}

	SDL_DestroyTexture(img);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(win);

	return 0;
}
