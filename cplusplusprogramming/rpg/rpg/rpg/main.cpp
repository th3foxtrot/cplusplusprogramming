#include<SDL.h>
#include "Game.h"

SDL_Window* g_pWindow = 0;
SDL_Renderer* g_pRenderer = 0;
bool g_BRunning = false;      // This will create a loop

// Game object
Game* g_game = 0;

bool init(const char* title, int xpos, int ypos,
	int height, int width, int flags)
{
	// initialize SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) >= 0)
	{
		// if succeeded create our window
		g_pWindow = SDL_CreateWindow(title, xpos, ypos,
			height, width, flags);

		// if the window creation succeeded create our renderer
		if (g_pWindow != 0)
		{
			g_pRenderer = SDL_CreateRenderer(g_pWindow, -1, 0);
		}
	}
	else
	{
		return false; // SDL could not initialize
	}
	return true;
}

void render()
{
	// set to black
	SDL_SetRenderDrawColor(g_pRenderer, 0, 0, 0, 255);

	// clear the window to black
	SDL_RenderClear(g_pRenderer);

	// show the window
	SDL_RenderPresent(g_pRenderer);
}

int main(int argc, char* argv[])
{
	g_game = new Game();

	g_game->init("Chapter 1", 100, 100, 640, 480, 0);

	while (g_game->running())
	{
		g_game->handleEvents();
		g_game->update();
		g_game->render();
	}
	g_game->clean();

	return 0;
}