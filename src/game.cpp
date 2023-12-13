#include "game.hpp"
#include "renderer.hpp"

#include <SDL2/SDL.h>

void Game::run()
{
    // Temporary
    // For testing

    Renderer rend;
    rend.createRenderer("Test", 600, 600);

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