#pragma once
#include "fabric.h"
class worker :
    public fabric
{


    worker();
    worker(std::string fami, std::string namei, std::string onamei, std::string positioni, std::string adressi, std::string phonei);
    worker(const worker& copy);
    ~worker();
    void read(int ind, std::string zam);
    void setpar();
    void setpar(std::string fami, std::string namei, std::string onamei, std::string positioni, std::string adressi, std::string phonei);
    void getpar();
    void save();

protected:
    std::string fam;
    std::string name;
    std::string oname;
    std::string position;
    std::string adress;
    std::string phone;
};

