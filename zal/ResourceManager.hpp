#pragma once

#include "Resource.hpp"
using namespace std;
class ResourceManager
{
  Resource* wskaznik;
  public:
    ResourceManager():wskaznik{new Resource}{}
    ~ResourceManager() {delete wskaznik;}
    double get() { return wskaznik->get(); }
    ResourceManager(const ResourceManager& res):wskaznik{res.wskaznik} {
       wskaznik= new Resource(*res.wskaznik);
         }
    ResourceManager& operator=(const ResourceManager& res){
      if(wskaznik!=res.wskaznik)
        delete wskaznik;
        wskaznik= new Resource(*res.wskaznik);
        return *this;}
                
    ResourceManager(const ResourceManager&& res){
      wskaznik= res.wskaznik;
      this->wskaznik = nullptr;
    };
    ResourceManager& operator=(ResourceManager&& res){
    if(wskaznik!=res.wskaznik)
        delete wskaznik;
        wskaznik= new Resource(*res.wskaznik);
        this->wskaznik=nullptr;
        return *this;
        }

    
   
};
