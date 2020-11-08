#pragma once

#include "Resource.hpp"

class ResourceManager : Resource
{
  public:
  {
    friend class Resource
    ResourceManager()                          { std::cout << "ResourceManager()\n"; }
    ResourceManager(const Resource&)               { std::cout << "ResourceManager(const Resource&)\n"; }
    ResourceManager(Resource&&)                    { std::cout << "ResourceManager(Resource&&)\n"; }
    ResourceManager& operator=(const Resource&)    { std::cout << "operator=(const Resource&)\n"; return *this; }
    ResourceManager& operator=(Resource&&)         { std::cout << "operator=(Resource&&)\n"; return *this; }
    ~ResourceManager()                         { std::cout << "~Resource()\n"; }
    double getdouble() { return Resource.get(); }
    ResourceManager getRM() { return ResourceManager(); }
};
};
