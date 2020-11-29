#pragma once

#include <Application.h>


#define WINDOW_X 720
#define WINDOW_Y 720

#define GRID_SIZE 3

class Game
{
private:
	Application App = Application(WINDOW_X, WINDOW_Y, 60);

public:
	Game();
	~Game() {}

	Application GetApp() { return App; }

	void Start();
	void Update();
	void Draw();
};

