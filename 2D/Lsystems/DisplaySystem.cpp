#include <vector>
#include <cmath>
#include <stack>
#include <iostream>
#include <tuple>
#include <string>
#include "DisplaySystem.h"





DisplaySystem::DisplaySystem()
{
    //init SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    //find screen size
    SDL_Rect displayBounds;
    if (SDL_GetDisplayBounds(0, &displayBounds) != 0) {
        std::cerr << "SDL_GetDisplayBounds Error for display " << 0 << ": " << SDL_GetError() << std::endl;
    }
    else {
        std::cout << "Display " << 0 << ": " << "Width = " << displayBounds.w << ", Height = " << displayBounds.h << std::endl;
    }

    SCREEN_WIDTH = displayBounds.w;
    SCREEN_HEIGHT = displayBounds.h;

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

void DisplaySystem::RenderLoop(LSystem &LSystem)
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
        
        DisplayLSystem(LSystem);

        SDL_Delay(10000);

    }
}

SDL_Renderer* DisplaySystem::getRenderer() const
{
    return renderer;
}

void DisplaySystem::DisplayLSystem(LSystem& LSystem) {
    double xCur = SCREEN_WIDTH/2, yCur = SCREEN_HEIGHT/2; 
    double xNext = 0, yNext = 0;
    double angle_degre = 90;
    double angle_increment = 90;
    double angle_radian = angle_degre * M_PI / 180.0;
    const int lineLength = 15;
    stack<tuple<int, int, int>> saveStack;
    

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);  // White color

    //vector<char> testString = { 'F', '+', '+', 'F', 'F', '-', '-', 'F', 'F', '-', '-', 'F', 'F', '+', '+', 'F' };
    
    for (auto element : LSystem.GetStringCode()) {
        switch (element)
        {
        case 'F':
            xNext = xCur - lineLength * cos(angle_radian);
            yNext = yCur - lineLength * sin(angle_radian);
            break;
        case '+':
            angle_degre += angle_increment;
            angle_radian = angle_degre * M_PI / 180.0;
            break;
        case '-':
            angle_degre -= angle_increment;
            angle_radian = angle_degre * M_PI / 180.0;
            break;
        case '[':
            saveStack.push({xCur, yCur, angle_degre});
            break;
        case ']':
            xCur = std::get<0>(saveStack.top());
            xNext = std::get<0>(saveStack.top());
            yCur = std::get<1>(saveStack.top());
            yNext = std::get<1>(saveStack.top());
            angle_degre = std::get<2>(saveStack.top());
            saveStack.pop();
            break;
        default:
            break;
        }

        //render the line
        SDL_RenderDrawLine(renderer, xCur, yCur, xNext, yNext);

        SDL_RenderPresent(renderer);

        //update the variable
        xCur = xNext;
        yCur = yNext;

    }
}
