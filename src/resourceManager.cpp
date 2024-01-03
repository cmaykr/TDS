#include "resourceManager.hpp"

ResourceManager::ResourceManager(std::string const& basePath)
    : basePath(basePath)
{}

void ResourceManager::changeBasePath(std::string const& newPath)
{
    basePath = newPath;
}

void ResourceManager::addTexture(std::string const& filename)
{
    throw std::logic_error("Not implemented");
}

void ResourceManager::deleteTexture(std::string const& filename)
{
    throw std::logic_error("Not implemented");
}

Texture ResourceManager::fetchTexture(std::string const& filename)
{
    throw std::logic_error("Not implemented");
}