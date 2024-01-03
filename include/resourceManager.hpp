#pragma once

#include <map>
#include <string>

#include "texture.hpp"

// Static resource management, loads everything immediately.
// In future maybe change to dynamic management, only load when a resource is needed.
class ResourceManager
{
public:
    ResourceManager(std::string const& basepath);

    void changeBasePath(std::string const& newPath);

    /// Loads and adds texture.
    /// @param filename Name of the texture + fileending. Path not needed
    void addTexture(std::string const& filename);
    /// @param filename Name of the texture + fileending. Path not needed
    void deleteTexture(std::string const& filename); 

    // Fetches data about specific texture. Loads texture if not already available.
    /// @param filename Name of the texture + fileending. Path not needed
    Texture fetchTexture(std::string const& filename);
private:
    /// Base path for all resource files.
    std::string basePath;

    std::map<std::string, Texture> textures{};
};