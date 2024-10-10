#include <iostream>
#include <SDL.h>
#include "DisplaySystem.h"
#include "Global.h"

using namespace std;

int main(int argc, char* argv[])
{
    //Initialize SDL display 
    DisplaySystem GridDisplaySystem;

    //Enter the infinite render loop
    GridDisplaySystem.RenderLoop();

    //SDL_cleaner
    SDL_DestroyWindow(GridDisplaySystem.getWindow());
    SDL_Quit();
    return 0;
}