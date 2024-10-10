#ifndef DISPLAYSYTEM_H
#define DISPLAYSYTEM_H
#include <SDL.h>
#include "Global.h"

class DisplaySystem
{
private:
    SDL_Window* window;
    SDL_Renderer* renderer;

public:

    DisplaySystem();
    SDL_Renderer* getRenderer() const;
    SDL_Window* getWindow() const;
    void RenderLoop();

};

#endif