#include "cars.h"

cars::cars() 
{
	std::cout << "����������� ������ cars" << std::endl;
}

cars::~cars()
{
	std::cout << "���������� ������ cars" << std::endl;
}

cars::cars(const cars& copy)
{
	mark = copy.mark;
	model = copy.model;
	number = copy.number;
	std::cout << "����� ������������ ����������� cars" << std::endl;
}

cars::cars(std::string marki, std::string modeli, std::string numberi) {
	this->mark = marki;
	this->model = model;
	this->number = numberi;
	std::cout << "����� ������������ c ���������� cars" << std::endl;
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
		std::cout << "�������� ����" << std::endl;
		break;
	}
}

void cars::setpar()
{
	std::cin.ignore(32767, '\n');
	std::cout << "������� ����� ������" << std::endl;
	getline(std::cin, mark);
	std::cout << "������� ������ ������" << std::endl;
	std::getline(std::cin, model);
	std::cout << "������� ����� ������" << std::endl;
	std::getline(std::cin, number);
}

void cars::setpar(std::string marki, std::string modeli, std::string numberi) {
	this->mark = marki;

	this->model = modeli;

	this->number = numberi;
}

void cars::getpar()
{
	std::cout << "���������� � ������:" << std::endl;
	std::cout << "����� ������ - " << mark << std::endl;
	std::cout << "������ ������ - " << model << std::endl;
	std::cout << "��������������� ����� - " << number << std::endl;
	std::cout << std::endl;

}

void cars::save() 
{

}