#include "game.hpp"
#include "screen.hpp"

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

void Game::run()
{
    // Temporary
    // For testing

    IMG_Init(IMG_INIT_PNG);
    SDL_Texture *text{};

    Screen rend;
    rend.createScreen("Test", 800, 800);

    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading %s", "Textures/rubber-duck.png");
    text = IMG_LoadTexture(rend.renderer(), "/home/david/Documents/Projects/TDS/Textures/rubber-duck.png");
    SDL_Rect dest;
    dest.x = 10;
    dest.y = 10;
    SDL_QueryTexture(text, NULL, NULL, &dest.w, &dest.h);

    SDL_Event event;
    while (true)
    {
        SDL_RenderClear(rend.renderer());
        SDL_SetRenderDrawColor(rend.renderer(), 255, 200, 255, 255);
        SDL_RenderCopy(rend.renderer(), text, NULL, &dest);

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