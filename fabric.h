#pragma once
#include <fstream>
#include <string>
#include <iostream>

class fabric
{
	public:
	fabric();
	virtual ~fabric();
	virtual void getpar() = 0; //Вывод параметров на экран
	virtual void setpar() = 0; //Задача параметров
	virtual void change(int id, std::string znach) = 0; //изменение параметров
	virtual void save() = 0;

};

