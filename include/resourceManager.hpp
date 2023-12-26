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

    // Get data about specific texture. Shouldn't be able to change the data.
    /// @param filename Name of the texture + fileending. Path not needed
    Texture const& getTexture(std::string const& filename) const;
private:
    /// Base path for all resource files.
    std::string filepath;

    std::map<std::string, Texture> textures{};
};