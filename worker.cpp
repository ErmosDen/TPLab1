#include "worker.h"

#include "cars.h"

worker::worker()
{
	std::cout << "конструктор класса worker" << std::endl;
}

worker::~worker()
{
	std::cout << "деструктор класса worker" << std::endl;
}

worker::worker(const worker& copy)
{
	name = copy.name;
	fam = copy.fam;
	oname = copy.oname;
	position = copy.position;
	adress = copy.adress;
	phone = copy.phone;
	std::cout << "Вызов конструктора копирования worker" << std::endl;
}

worker::worker(std::string fami, std::string namei, std::string onamei, std::string positioni, std::string adressi, std::string phonei) {
	this->fam = fami;
	this->name = namei;
	this->oname = onamei;
	this->position = positioni;
	this->adress = adressi;
	this->phone = phonei;
	std::cout << "Вызов конструктора c параметром worker" << std::endl;
}

void worker::change(int id, std::string znach) {
	switch (id)
	{
	case 1:
		fam = znach;
		break;
	case 2:
		name = znach;
		break;
	case 3:
		oname = znach;
		break;
	case 4:
		position = znach;
		break;
	case 5:
		adress = znach;
		break;
	case 6:
		phone = znach;
		break;
	default:
		std::cout << "неверный ввод" << std::endl;
		break;
	}
}

void worker::setpar()
{
	std::cin.ignore(32767, '\n');
	std::cout << "Введите фамилию рабочего" << std::endl;
	getline(std::cin, fam);
	std::cout << "Введите имя рабочего" << std::endl;
	std::getline(std::cin, name);
	std::cout << "Введите отчество рабочего" << std::endl;
	std::getline(std::cin, oname);
	std::cout << "Введите должность рабочего" << std::endl;
	getline(std::cin, position);
	std::cout << "Введите адрес" << std::endl;
	std::getline(std::cin, adress);
	std::cout << "Введите телефон" << std::endl;
	std::getline(std::cin, phone);
}

void worker::setpar(std::string fami, std::string namei, std::string onamei, std::string positioni, std::string adressi, std::string phonei) {
	this->fam = fami;
	this->name = namei;
	this->oname = onamei;
	this->position = positioni;
	this->adress = adressi;
	this->phone = phonei;
}

void worker::getpar()
{
	std::cout << "Информация о машине:" << std::endl;
	std::cout << "Фамилия - " << fam << std::endl;
	std::cout << "Имя - " << name << std::endl;
	std::cout << "Отчество - " << oname << std::endl;
	std::cout << "Должность - " << position << std::endl;
	std::cout << "Адрес - " << adress << std::endl;
	std::cout << "Телефон - " << phone << std::endl;
	std::cout << std::endl;

}

void worker::save()
{
	std::ofstream fout;
	fout.open("fabric.txt", std::ios_base::app);
	try {
		if (!fout.is_open())
		{
			throw "Ошибка открытия файла";
		}
		else
		{
			fout << 2 << std::endl << fam << std::endl << name << std::endl << oname << std::endl << position << std::endl << adress << std::endl << phone << std::endl;
			fout.close();
		}
	}
	catch (const char* exception) // обработчик исключений типа const char*
	{
		std::cerr << "Error: " << exception << '\n';
	}
}
