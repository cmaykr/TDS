#include "game.hpp"
#include "screen.hpp"

#include <SDL2/SDL.h>

void Game::run()
{
    // Temporary
    // For testing

    Screen rend;
    rend.createScreen("Test", 600, 600);

    SDL_SetRenderDrawColor(rend.renderer(), 100, 200, 255, 255);
    SDL_Event event;
    while (true)
    {
        SDL_RenderClear(rend.renderer());
        while (SDL_PollEvent(&event))
        {

            switch (event.type)
            {
                case SDL_QUIT:
                    exit(0);
                    break;

                default:
                    break;
            }

        }
        SDL_RenderPresent(rend.renderer());
    }
}