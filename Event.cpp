#include <SDL2/SDL.h>
#include "Event.h"

Event::Event() {
	memset(this, 0, sizeof(Event));
}

void Event::reset() {
	memset(key, 0, sizeof(key));
}

bool Event::capture(enum Id key) {
    if (persist[key]) {
        persist[key] = false;
        return true;
    }
    return false;
}

int Event::update() {
	SDL_Event event;
	int count = 0;
	while (SDL_PollEvent(&event)) {
		count++;
		switch (event.type) {
			case SDL_KEYDOWN:
			if (event.key.repeat && ! repeat) {
				break;
			}
			switch (event.key.keysym.sym) {
				case SDLK_a:
				key    [A] = true;
				persist[A] = true;
				break;
				case SDLK_b:
				key    [B] = true;
				persist[B] = true;
				break;
				case SDLK_c:
				key    [C] = true;
				persist[C] = true;
				break;
				case SDLK_d:
				key    [D] = true;
				persist[D] = true;
				break;
				case SDLK_e:
				key    [E] = true;
				persist[E] = true;
				break;
				case SDLK_f:
				key    [F] = true;
				persist[F] = true;
				break;
				case SDLK_g:
				key    [G] = true;
				persist[G] = true;
				break;
				case SDLK_h:
				key    [H] = true;
				persist[H] = true;
				break;
				case SDLK_i:
				key    [I] = true;
				persist[I] = true;
				break;
				case SDLK_j:
				key    [J] = true;
				persist[J] = true;
				break;
				case SDLK_k:
				key    [K] = true;
				persist[K] = true;
				break;
				case SDLK_l:
				key    [L] = true;
				persist[L] = true;
				break;
				case SDLK_m:
				key    [M] = true;
				persist[M] = true;
				break;
				case SDLK_n:
				key    [N] = true;
				persist[N] = true;
				break;
				case SDLK_o:
				key    [O] = true;
				persist[O] = true;
				break;
				case SDLK_p:
				key    [P] = true;
				persist[P] = true;
				break;
				case SDLK_q:
				key    [Q] = true;
				persist[Q] = true;
				break;
				case SDLK_r:
				key    [R] = true;
				persist[R] = true;
				break;
				case SDLK_s:
				key    [S] = true;
				persist[S] = true;
				break;
				case SDLK_t:
				key    [T] = true;
				persist[T] = true;
				break;
				case SDLK_u:
				key    [U] = true;
				persist[U] = true;
				break;
				case SDLK_v:
				key    [V] = true;
				persist[V] = true;
				break;
				case SDLK_w:
				key    [W] = true;
				persist[W] = true;
				break;
				case SDLK_x:
				key    [X] = true;
				persist[X] = true;
				break;
				case SDLK_y:
				key    [Y] = true;
				persist[Y] = true;
				break;
				case SDLK_z:
				key    [Z] = true;
				persist[Z] = true;
				break;
				case SDLK_ESCAPE:
				key    [ESCAPE] = true;
				persist[ESCAPE] = true;
				break;
				case SDLK_SPACE:
				key    [SPACE] = true;
				persist[SPACE] = true;
				break;
				case SDLK_RIGHT:
				key    [RIGHT] = true;
				persist[RIGHT] = true;
				break;
				case SDLK_LEFT:
				key    [LEFT] = true;
				persist[LEFT] = true;
				break;
				case SDLK_DOWN:
				key    [DOWN] = true;
				persist[DOWN] = true;
				break;
				case SDLK_UP:
				key    [UP] = true;
				persist[UP] = true;
				break;
				case SDLK_RSHIFT:
				key    [RSHIFT] = true;
				persist[RSHIFT] = true;
				break;
				case SDLK_LSHIFT:
				key    [LSHIFT] = true;
				persist[LSHIFT] = true;
				break;
				case SDLK_RCTRL:
				key    [RCTRL] = true;
				persist[RCTRL] = true;
				break;
				case SDLK_LCTRL:
				key    [LCTRL] = true;
				persist[LCTRL] = true;
				break;
				case SDLK_TAB:
				key    [TAB] = true;
				persist[TAB] = true;
				break;
				case SDLK_RETURN:
				key    [RETURN] = true;
				persist[RETURN] = true;
				break;
			}
			break;
			case SDL_KEYUP:
			switch (event.key.keysym.sym) {
				case SDLK_a:
				key[A] = false;
				break;
				case SDLK_b:
				key[B] = false;
				break;
				case SDLK_c:
				key[C] = false;
				break;
				case SDLK_d:
				key[D] = false;
				break;
				case SDLK_e:
				key[E] = false;
				break;
				case SDLK_f:
				key[F] = false;
				break;
				case SDLK_g:
				key[G] = false;
				break;
				case SDLK_h:
				key[H] = false;
				break;
				case SDLK_i:
				key[I] = false;
				break;
				case SDLK_j:
				key[J] = false;
				break;
				case SDLK_k:
				key[K] = false;
				break;
				case SDLK_l:
				key[L] = false;
				break;
				case SDLK_m:
				key[M] = false;
				break;
				case SDLK_n:
				key[N] = false;
				break;
				case SDLK_o:
				key[O] = false;
				break;
				case SDLK_p:
				key[P] = false;
				break;
				case SDLK_q:
				key[Q] = false;
				break;
				case SDLK_r:
				key[R] = false;
				break;
				case SDLK_s:
				key[S] = false;
				break;
				case SDLK_t:
				key[T] = false;
				break;
				case SDLK_u:
				key[U] = false;
				break;
				case SDLK_v:
				key[V] = false;
				break;
				case SDLK_w:
				key[W] = false;
				break;
				case SDLK_x:
				key[X] = false;
				break;
				case SDLK_y:
				key[Y] = false;
				break;
				case SDLK_z:
				key[Z] = false;
				break;
				case SDLK_ESCAPE:
				key[ESCAPE] = false;
				break;
				case SDLK_SPACE:
				key[SPACE] = false;
				break;
				case SDLK_RIGHT:
				key[RIGHT] = false;
				break;
				case SDLK_LEFT:
				key[LEFT] = false;
				break;
				case SDLK_DOWN:
				key[DOWN] = false;
				break;
				case SDLK_UP:
				key[UP] = false;
				break;
				case SDLK_RSHIFT:
				key[RSHIFT] = false;
				break;
				case SDLK_LSHIFT:
				key[LSHIFT] = false;
				break;
				case SDLK_RCTRL:
				key[RCTRL] = false;
				break;
				case SDLK_LCTRL:
				key[LCTRL] = false;
				break;
				case SDLK_TAB:
				key[TAB] = false;
				break;
				case SDLK_RETURN:
				key[RETURN] = false;
			}
			break;
			case SDL_MOUSEMOTION:
			mouse.x = event.motion.x;
			mouse.y = event.motion.y;
			window  = event.motion.windowID;
			break;
			case SDL_MOUSEBUTTONDOWN:
			switch (event.button.button) {
				case SDL_BUTTON_RIGHT:
				mouse.r = true;
				break;
				case SDL_BUTTON_LEFT:
				mouse.l = true;
			}
			mouse.x = event.button.x;
			mouse.y = event.button.y;
			window  = event.button.windowID;
			break;
			case SDL_MOUSEBUTTONUP:
			switch (event.button.button) {
				case SDL_BUTTON_RIGHT:
				mouse.r = false;
				break;
				case SDL_BUTTON_LEFT:
				mouse.l = false;
			}
			mouse.x = event.button.x;
			mouse.y = event.button.y;
			window = event.button.windowID;
			break;
			case SDL_WINDOWEVENT:
			switch (event.window.event) {
				case SDL_WINDOWEVENT_FOCUS_GAINED:
				window = event.window.windowID;
				break;
				case SDL_WINDOWEVENT_SHOWN:
				window = event.window.windowID;
				break;
				case SDL_WINDOWEVENT_CLOSE:
				window = event.window.windowID;
				close = true;
			}
			break;
			case SDL_QUIT:
			quit = true;
		}
	}
	return count;
}
