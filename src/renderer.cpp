#include "renderer.hpp"

Renderer::Renderer()
{
};

void Renderer::createRenderer(std::string const& title, int width, int height)
{
    window.createWindow(title.c_str(), width, height);
    _renderer = SDL_CreateRenderer(window.window(), -1, 0);
}

SDL_Renderer* Renderer::renderer() const
{
    return _renderer;
}