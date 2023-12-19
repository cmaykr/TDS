#pragma once

#include <SDL2/SDL.h>
#include <string>

class Screen
{
public:
    Screen();

    void createScreen(std::string const& title, int width, int height);

    SDL_Renderer* renderer() const;

private:
    SDL_Renderer * _renderer{};
    SDL_Window *window{};

    
};