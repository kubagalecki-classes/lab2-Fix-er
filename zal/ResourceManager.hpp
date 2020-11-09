#pragma once

#include "Resource.hpp"
using namespace std;
class ResourceManager
{
  Resource* wskaznik;
  public:
    ResourceManager(){wskaznik=new Resource;}
    ~ResourceManager() {delete wskaznik;}
    double get() { return wskaznik->get(); }
    ResourceManager(const ResourceManager& res):wskaznik (res.wskaznik){};
    ResourceManager& operator=(const ResourceManager& res){
      if(&res!=this){
        delete &res;
        wskaznik=res.wskaznik;
        return *this;}}
    ResourceManager(const ResourceManager&& res){
      wskaznik= res.wskaznik;
      res.wskaznik = nullptr;
    };
    ResourceManager& operator=(ResourceManager&& res){
    /*wskaznik=move(res.wskaznik);
    res.wskaznik = nullptr;*/
    return *this;}  
   
};
