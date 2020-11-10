#pragma once

#include "Resource.hpp"
using namespace std;
class ResourceManager
{
  Resource* wskaznik;
  public:
    int i =0;
    ResourceManager():wskaznik{new Resource}{i++;std::cout<<i<<'\n';}
    ~ResourceManager() {delete wskaznik;i--;std::cout<<i<<'\n';}
    double get() { return wskaznik->get(); }
    ResourceManager(const ResourceManager& res):wskaznik{new Resource} {
         i++;
         std::cout<<i<<'\n';};
    ResourceManager& operator=(const ResourceManager& res){
      if(wskaznik!=res.wskaznik)
        delete wskaznik;
        wskaznik= new Resource;
        wskaznik=res.wskaznik;
        return *this;
        i++;std::cout<<i;}
        
    ResourceManager(const ResourceManager&& res){
      wskaznik= res.wskaznik;
      this->wskaznik = nullptr;
      i++;std::cout<<i;
    };
    ResourceManager& operator=(ResourceManager&& res){
    if(wskaznik!=res.wskaznik)
        delete wskaznik;
        wskaznik= new Resource;
        wskaznik=res.wskaznik;
        this->wskaznik=nullptr;
        return *this;
        i++;std::cout<<i;
        }

    
   
};
