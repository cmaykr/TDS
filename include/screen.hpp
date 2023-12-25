#pragma once

#include <SDL2/SDL.h>
#include <string>

#include "color.hpp"

class Screen
{
public:
    Screen();

    void createScreen(std::string const& title, int width, int height);

    SDL_Renderer* renderer() const;

    // Updates screen with any rendering done after last call. 
    void renderScreen();

private:
    SDL_Renderer * _renderer{};
    SDL_Window *window{};

    Color background{};
};