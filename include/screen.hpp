#pragma once

#include <SDL2/SDL.h>
#include <string>

#include "color.hpp"
#include "texture.hpp"

/// Owns all variables and functions for creating and manipulating a screen.
class Screen
{
public:
    Screen();

    void createScreen(std::string const& title, int width, int height);

    SDL_Renderer* renderer() const;

    void renderTexture(Texture const& text);

private:
    SDL_Renderer * _renderer{};
    SDL_Window *window{};

    Color background{};
};