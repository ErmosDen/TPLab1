#include "funiture.h"


#include "cars.h"

funiture::funiture()
{
	std::cout << "конструктор класса funiture" << std::endl;
}

funiture::~funiture()
{
	std::cout << "деструктор класса funiture" << std::endl;
}

funiture::funiture(const funiture& copy)
{
	type=copy.type;
	h=copy.h;
	w=copy.h;
	l=copy.l;
	color=copy.color;
	colorCode=copy.colorCode;
	material=copy.material;
	price=copy.price;
	std::cout << "Вызов конструктора копирования funiture" << std::endl;
}

funiture::funiture(std::string tp, int hi, int wi, int li, std::string ci, int cci, std::string mati, int pi) {
	this->type = tp;
	this->h = hi;
	this->w = wi;
	this->l = li;
	this->color = ci;
	this->colorCode = cci;
	this->material = mati;
	this->price = pi;
	std::cout << "Вызов конструктора c параметром funiture" << std::endl;
}

void funiture::change(int id, std::string znach) {
	switch (id)
	{
	case 1:
		type = znach;
		break;
	case 2:
		h = atoi(znach.c_str());
		break;
	case 3:
		w = atoi(znach.c_str());
		break;
	case 4:
		l = atoi(znach.c_str());
		break;
	case 5:
		color = znach;
		break;
	case 6:
		colorCode = atoi(znach.c_str());
		break;
	case 7:
		material = znach;
		break;
	case 8:
		price = atoi(znach.c_str());
		break;
	default:
		std::cout << "неверный ввод" << std::endl;
		break;
	}
}

void funiture::setpar()
{
	std::string line;
	std::cin.ignore(32767, '\n');
	std::cout << "Введите тип мебели" << std::endl;
	getline(std::cin, type);
	std::cout << "Введите высоту" << std::endl;
	std::getline(std::cin, line);
	h = atoi(line.c_str());
	std::cout << "Введите ширину" << std::endl;
	std::getline(std::cin, line);
	w = atoi(line.c_str());
	std::cout << "Введите глубину" << std::endl;
	std::getline(std::cin, line);
	l = atoi(line.c_str());
	std::cout << "Введите цвет" << std::endl;
	std::getline(std::cin, color);
	std::cout << "Введите цветовой код" << std::endl;
	std::getline(std::cin, line);
	colorCode = atoi(line.c_str());
	std::cout << "Введите материал" << std::endl;
	std::getline(std::cin, material);
	std::cout << "Введите цену" << std::endl;
	std::getline(std::cin, line);
	price = atoi(line.c_str());
}

void funiture::setpar(std::string tp, int hi, int wi, int li, std::string ci, int cci, std::string mati, int pi) {
	this->type = tp;
	this->h = hi;
	this->w = wi;
	this->l = li;
	this->color = ci;
	this->colorCode = cci;
	this->material = mati;
	this->price = pi;
}

void funiture::getpar()
{
	std::cout << "Информация о предмете мебели:" << std::endl;
	std::cout << "Тип - " << type << std::endl;
	std::cout << "Высота - " << h << std::endl;
	std::cout << "Ширина - " << w << std::endl;
	std::cout << "Глубина - " << l << std::endl;
	std::cout << "Цвет - " << color << std::endl;
	std::cout << "Цветовой Код - " << colorCode << std::endl;
	std::cout << "Материал - " << material << std::endl;
	std::cout << "Цена - " << price << std::endl;
	std::cout << std::endl;

}

void funiture::save()
{

}
