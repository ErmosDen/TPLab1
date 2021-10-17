#pragma once
#include "fabric.h"
class funiture :
    public fabric
{
public:
    funiture();
    funiture(std::string tp, int hi, int wi, int li, std::string ci, int cci, std::string mati, int pi);
    funiture(const funiture& copy);
    ~funiture();
    void change(int id, std::string znach);
    void setpar();
    void setpar(std::string tp, int hi, int wi, int li, std::string ci, int cci, std::string mati, int pi);
    void getpar();
    void save();

protected:
    std::string type;
    int h;
    int w;
    int l;
    std::string color;
    int colorCode;
    std::string material;
    int price;


};

