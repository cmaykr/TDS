#pragma once

#include <SDL2/SDL.h>
#include <string>

#include "vector2.hpp"

class Texture
{
public:
    Texture() = default;
    Texture(std::string const& filename);

    void setSize(Vector2<int> newSize);
private:
    // Should resourcemanager own the SDL texture?
    SDL_Texture *_text{};
    Vector2<int> size{};
};