#include <iostream>
#include <SDL.h>
#include "DisplaySystem.h"
#include "Global.h"
#include "LSystem.h"

using namespace std;

int main(int argc, char* argv[])
{
    LSystem LeafSystem({ 'F','+', 'F', 'X' });
    LeafSystem.computeLeafStep();
    LeafSystem.computeLeafStep();
    LeafSystem.computeLeafStep();



    //Initialize SDL display 
    DisplaySystem DisplaySystem;

    //Enter the infinite render loop
    DisplaySystem.RenderLoop(LeafSystem);

    //SDL_cleaner
    SDL_DestroyWindow(DisplaySystem.getWindow());
    SDL_Quit();

    return 0;
}