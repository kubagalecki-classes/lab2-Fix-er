#pragma once

#include "Resource.hpp"

class ResourceManager
{
  Resource* wskaznik;
public:    
    ResourceManager(){wskaznik= new Resource;}
    ~ResourceManager() {delete wskaznik;}
    double get() { return wskaznik[0].get(); }
    ResourceManager(const ResourceManager& res):wskaznik(res.wskaznik){}
    ResourceManager& operator=(const ResourceManager& res){
      wskaznik=res.wskaznik;
      return *this;
     }
    ResourceManager(const ResourceManager&& res):wskaznik(std::move(res.wskaznik)){}
    ResourceManager& operator=(ResourceManager&& res){
      wskaznik=std::move(res.wskaznik);
      return *this;
    }  
   
};
