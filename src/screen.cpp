#include "screen.hpp"

Screen::Screen()
{
};

void Screen::createScreen(std::string const& title, int width, int height)
{
    window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height , 0);
    _renderer = SDL_CreateRenderer(window, -1, 0);
}

void Screen::renderTexture(Texture const& text)
{

}

SDL_Renderer* Screen::renderer() const
{
    return _renderer;
}