#include "window.hpp"

Window::Window()
{};

void Window::createWindow(char const* title, int width, int height)
{
    _window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, 0);
}

SDL_Window* Window::window() const
{
    return _window;
}