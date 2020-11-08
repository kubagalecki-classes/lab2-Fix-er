#pragma once

#include "Resource.hpp"

class ResourceManager
{
  public:
  {
    Resource* wskaznik;
    ResourceManager(){wskaznik=NULL;}
    ResourceManager(const Resource& res){wskaznik=res;}
    ~ResourceManager() {}
    double get() { return wskaznik->get(); }
};
};
