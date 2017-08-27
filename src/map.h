#pragma once

#include "main.h"

class map
{
public:
	map(SDL_Renderer* passed_renderer, std::string FilePath, int w, int h);
	~map();

	void Draw();

private:
	SDL_Texture* image;
	SDL_Rect rect;

	SDL_Renderer* renderer;


};
