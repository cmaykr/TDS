#pragma once

#include <map>
#include <string>
#include <SDL2/SDL.h>

// Static resource management, loads everything immediately.
// In future maybe change to dynamic management, only load when a resource is needed.
class Renderer
{
public:
    Renderer(SDL_Window *window, std::string const& basepath);

    void changeBasePath(std::string const& newPath);

    /// Loads and adds texture.
    /// @param filename Name of the texture + fileending. Path not needed
    void addTexture(std::string const& filename);
    /// @param filename Name of the texture + fileending. Path not needed
    void deleteTexture(std::string const& filename); 

    // Fetches data about specific texture. Loads texture if not already available.
    /// @param filename Name of the texture + fileending. Path not needed
    /// Texture fetchTexture(std::string const& filename);
private:
    SDL_Renderer *_renderer;
    /// Base path for all resource files.
    std::string basePath;

    std::map<std::string, SDL_Texture*> textures{};
};