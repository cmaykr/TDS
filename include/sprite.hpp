#pragma once

#include <iostream>

#include "color.hpp"
#include "vector2.hpp"

/// Stores all data about a sprite object. 
/// Stores the name of the texture instead of the actual texture object.
class Sprite
{
public:
    Sprite(std::string const& texture, Vector2<int> const& size, Color const& color, double rotation = 0);

    void changeTexture(std::string const& newTexture);
    void changeColor(Color const& newColor);

private:
    std::string texture;
    Color color;
    Vector2<int> size;
    double rotation;
};