#pragma once
#include <SDL2/SDL.h>
#include <string>

class Window
{
public:
    Window();

    void createWindow(char const* title, int width, int height);

    SDL_Window* window() const;
private:
    SDL_Window * _window{};
};
