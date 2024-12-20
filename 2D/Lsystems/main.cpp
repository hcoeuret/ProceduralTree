#include <iostream>
#include <SDL.h>
#include "DisplaySystem.h"
#include "Global.h"
#include "LSystem.h"

using namespace std;

int main(int argc, char* argv[])
{
    /*
    LSystem LeafSystem({'X'});
    LeafSystem.computeLeafStep();
    LeafSystem.computeLeafStep();
    LeafSystem.computeLeafStep();
    LeafSystem.computeLeafStep();
    LeafSystem.computeLeafStep();
    */

    /*
    LSystem OLSystem({'F', '+', 'F', '+', 'F', '+', 'F'});
    OLSystem.computeOLStep();
    OLSystem.computeOLStep();
    OLSystem.computeOLStep();
    */

    
    LSystem LabSystem({'F', '+', 'F', '+', 'F', '+', 'F'});
    LabSystem.computeLabStep();
    LabSystem.computeLabStep();
    LabSystem.computeLabStep();
    



    //Initialize SDL display 
    DisplaySystem DisplaySystem;

    //Enter the infinite render loop
    DisplaySystem.RenderLoop(LabSystem);

    //SDL_cleaner
    SDL_DestroyWindow(DisplaySystem.getWindow());
    SDL_Quit();

    return 0;
}