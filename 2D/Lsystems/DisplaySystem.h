#ifndef DISPLAYSYTEM_H
#define DISPLAYSYTEM_H
#include <SDL.h>
#include "Global.h"
#include "LSystem.h"

class DisplaySystem
{
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    int SCREEN_WIDTH = 0;
    int SCREEN_HEIGHT = 0;

public:

    DisplaySystem();
    SDL_Renderer* getRenderer() const;
    SDL_Window* getWindow() const;
    void RenderLoop(LSystem& LSystem);
    void DisplayLSystem(LSystem& LSystem);

};

#endif