#ifndef __Game__
#define __Game__
#include "SDL.h"

class Game
{
public:
	Game() {}
	~Game() {}

	// simply set the running variable to true
	void init() {}

	void render() {}
	void update() {}
	void handleEvents() {}
	void clean() {}

	// a funstion to access the private running variable
	bool running() { return m_bRunning; }

private:
	bool m_bRunning;
};

#endif /* defined (__Game__) */