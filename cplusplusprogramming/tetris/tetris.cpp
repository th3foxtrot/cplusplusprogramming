// main game file
#include <SDL2/SDL.h>
#include <vector>
#include <iostream>

#define WIDTH 300
#define HEIGHT 300

bool running;

SDL_Renderer* rederer;
SDL_Window* window;

int frameCount, timerFPS, lastFrame, fps;

void update() {}

void input() {}

void render() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    frameCount++;
    int timerFPS = SDL_GetTicks()-lastFrame;
    if(timerFPS<(1000/60)) {
	SDL_Delay((1000/60)-timerFPS);
    }

    SDL_RenderPresent(renderer);
}

int main() {
    running=1;
    static int lastTime=0;
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "0");
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) std::cout << "Failed at SDL_Init()" << std::endl;
    if(SDL_CreateWindowAndRenderer(WIDTH, HEIGHT, 0, &window, &renderer) < 0) std::cout << SDL_SetWindowTitle(window, "Jank Tetris");

    while(running) {
	lastFrame=SDL_GetTicks();
	if(lastFrame>=(lastTime+1000)) {
	    lastTime=lastFrame;
	    fps=frameCount;
	    frameCount=0;
	}

	update();
	input();
	render();
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
