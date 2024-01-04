#include "renderer.hpp"

#include <SDL2/SDL_image.h>

Renderer::Renderer(SDL_Window *window, std::string const& basePath)
    : _renderer(SDL_CreateRenderer(window, -1, 0)), basePath(basePath)
{
    
}

void Renderer::changeBasePath(std::string const& newPath)
{
    basePath = newPath;
}

void Renderer::addTexture(std::string const& filename)
{

}

void Renderer::deleteTexture(std::string const& filename)
{

}

// Texture Renderer::fetchTexture(std::string const& filename)
// {
//     auto it = textures.find(filename);

//     if (it != textures.end())
//         return it->second;

//     textures[filename] = Texture(filename);

//     return textures[filename];
// }