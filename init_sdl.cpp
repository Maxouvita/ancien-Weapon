
#include <cstdio>
#include <cstdlib>
#include <SDL2/SDL.h>

using namespace std;

int init(int argc, char const *argv[]) {

  bool quit = false;
  SDL_Window *pwindow;
  SDL_Surface *windowSurface;
  SDL_Event event;

  SDL_Init(SDL_INIT_EVERYTHING);

  pwindow = SDL_CreateWindow("Weapon", 50, 50, 1080, 720, 0);
  windowSurface = SDL_GetWindowSurface(pwindow);  //Get window surface

  SDL_FillRect(windowSurface, NULL, SDL_MapRGB(windowSurface->format, 0, 0, 0)); //Fill the surface black

  while(!quit){
    SDL_WaitEvent(&event);
    SDL_UpdateWindowSurface(pwindow); //Update the surface
    if(event.type == SDL_QUIT){
      SDL_DestroyWindow(pwindow);
      quit = true;
    }
  }
  SDL_Quit();
  return 0;
}
