#pragma once

#include <SDL2/SDL.h>
#include <string>

#include "window.hpp"

class Renderer
{
public:
    Renderer();

    void createRenderer(std::string const& title, int width, int height);

    SDL_Renderer* renderer() const;

private:
    SDL_Renderer * _renderer{};
    Window window{};
};