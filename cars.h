#pragma once
#include "fabric.h"
class cars :
    public fabric
{
public:
    cars();
    cars(std::string marki, std::string modeli, std::string numberi);
    cars(const cars& copy);
    ~cars();
    void change(int id, std::string znach);
    void setpar();
    void setpar(std::string marki, std::string modeli, std::string numberi);
    void getpar();
    void save();

protected:
    std::string mark;
    std::string model;
    std::string number;



};

