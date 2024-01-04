#pragma once

#include <SDL2/SDL.h>
#include <string>

#include "color.hpp"
#include "renderer.hpp"

/// Owns all variables and functions for creating and manipulating a screen.
class Screen
{
public:
    Screen();

    void createScreen(std::string const& title, int width, int height);

    SDL_Renderer* renderer() const;

private:
    SDL_Renderer * _renderer{}; // Change to use renderer class.
    SDL_Window *window{};

    Color background{};
};