#pragma once

#include "Resource.hpp"
using namespace std;
class ResourceManager
{  
  public:
   Resource* wskaznik;
    ResourceManager():wskaznik{new Resource}{}
    ~ResourceManager() {delete wskaznik;}
    double get() { return wskaznik->get(); }
    ResourceManager(const ResourceManager& res):wskaznik{res.wskaznik} {
       wskaznik= new Resource(*res.wskaznik);
         }
    ResourceManager& operator=(const ResourceManager& res){
      if(wskaznik==res.wskaznik) return *this;
        delete wskaznik;
        wskaznik= new Resource(*res.wskaznik);
        return *this;}
                
    ResourceManager(ResourceManager&& res):wskaznik{res.wskaznik}{
      wskaznik=res.wskaznik;
      res.wskaznik = nullptr;
    };
    ResourceManager& operator=(ResourceManager&& res){
    if(wskaznik==res.wskaznik) return *this;
        delete wskaznik;
        wskaznik=res.wskaznik;
        res.wskaznik=nullptr;
        return *this;
        }     
};
