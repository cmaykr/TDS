#include "sprite.hpp"

Sprite::Sprite(std::string const& texture, Vector2<int> const& size, Color const& color, double rotation)
    : texture(texture), size(size), color(color), rotation(rotation)
{}

void Sprite::changeTexture(std::string const& newTexture)
{
    texture = newTexture;
}

void Sprite::changeColor(Color const& newColor)
{
    color = newColor;
}

