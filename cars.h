#pragma once
#include "fabric.h"
class cars :
    public fabric
{
    cars();
    cars(std::string marki, std::string modeli, std::string numberi);
    cars(const cars& copy);
    ~cars();
    void read(int ind, std::string zam);
    void setpar();
    void setpar(std::string marki, std::string modeli, std::string numberi);
    void getpar();
    void save();

protected:
    std::string mark;
    std::string model;
    std::string number;



};

