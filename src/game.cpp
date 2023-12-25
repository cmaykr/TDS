#include "game.hpp"
#include "screen.hpp"

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

void Game::run()
{
    // Temporary
    // For testing

    IMG_Init(IMG_INIT_PNG);
    SDL_Texture *text{};

    Screen rend;
    rend.createScreen("Test", 600, 600);

    text = IMG_LoadTexture(rend.renderer(), "Textures/rubber-duck.png");
    SDL_Rect dest;
    dest.x = 100;
    dest.y = 100;
    SDL_QueryTexture(text, NULL, NULL, &dest.w, &dest.y);

    SDL_Event event;
    while (true)
    {
        SDL_RenderCopy(rend.renderer(), text, NULL, &dest);
        SDL_SetRenderDrawColor(rend.renderer(), 100, 200, 255, 255);
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