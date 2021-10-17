#include "cars.h"

cars::cars() 
{
	std::cout << "конструктор класса cars" << std::endl;
}

cars::~cars()
{
	std::cout << "деструктор класса cars" << std::endl;
}

cars::cars(const cars& copy)
{
	mark = copy.mark;
	model = copy.model;
	number = copy.number;
	std::cout << "Вызов конструктора копирования cars" << std::endl;
}

cars::cars(std::string marki, std::string modeli, std::string numberi) {
	this->mark = marki;
	this->model = modeli;
	this->number = numberi;
	std::cout << "Вызов конструктора c параметром cars" << std::endl;
}

void cars::change(int id, std::string znach) {
	switch (id)
	{
	case 1:
		mark = znach;
		break;
	case 2:
		model = znach;
		break;
	case 3:
		number = znach;
		break;
	default:
		std::cout << "неверный ввод" << std::endl;
		break;
	}
}

void cars::setpar()
{
	std::cin.ignore(32767, '\n');
	std::cout << "Введите марку машины" << std::endl;
	getline(std::cin, mark);
	std::cout << "Введите модель машины" << std::endl;
	std::getline(std::cin, model);
	std::cout << "Введите номер машины" << std::endl;
	std::getline(std::cin, number);
}

void cars::setpar(std::string marki, std::string modeli, std::string numberi) {
	this->mark = marki;

	this->model = modeli;

	this->number = numberi;
}

void cars::getpar()
{
	std::cout << "Информация о машине:" << std::endl;
	std::cout << "Марка машины - " << mark << std::endl;
	std::cout << "Модель машины - " << model << std::endl;
	std::cout << "Регистрационный номер - " << number << std::endl;
	std::cout << std::endl;

}

void cars::save() 
{
	std::ofstream fout;
	fout.open("fabric.txt", std::ios_base::app);
	if (!fout.is_open())
	{
		throw "Ошибка открытия файла";
	}
	else
	{
		fout << 1 << std::endl << mark << std::endl << model << std::endl << number << std::endl;
		fout.close();
	}
}