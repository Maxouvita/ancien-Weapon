#include "utils.h"

void getImg(SDL_Surface* s, const char* img_path){
	s = IMG_Load(img_path);
	if(!s) {
    fprintf(stderr, "IMG_Load: %s\n", IMG_GetError());
	}
}
