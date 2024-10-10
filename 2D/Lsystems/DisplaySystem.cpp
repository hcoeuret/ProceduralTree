#include <vector>
#include "DisplaySystem.h"



DisplaySystem::DisplaySystem()
{
    //init SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    //create window
    window = SDL_CreateWindow("Grid", 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    if (!window)
    {
        //TODO ERROR HANDLING
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    if (!renderer)
    {
        //TODO ERROR HANDLING
    }

}

SDL_Window* DisplaySystem::getWindow() const
{
    return window;
}

void DisplaySystem::RenderLoop()
{
    //event loop stopper
    bool quit = false;

    //event handler
    SDL_Event e;
 
    // While the application is running
    while (!quit)
    {
        while (SDL_PollEvent(&e) != 0) {

            if (e.type == SDL_QUIT) {
                quit = true;

            }
            if (e.type == SDL_KEYDOWN) {
                if (e.key.keysym.sym == SDLK_q) {
                    quit = true;
                }
            }
        }
       
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
        SDL_RenderClear(renderer);
     
        // Update the screen
        SDL_RenderPresent(renderer);
        SDL_Delay(TICK_DELAY);
    }
}

SDL_Renderer* DisplaySystem::getRenderer() const
{
    return renderer;
}
