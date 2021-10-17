#include "worker.h"

#include "cars.h"

worker::worker()
{
	std::cout << "����������� ������ worker" << std::endl;
}

worker::~worker()
{
	std::cout << "���������� ������ worker" << std::endl;
}

worker::worker(const worker& copy)
{
	name = copy.name;
	fam = copy.fam;
	oname = copy.oname;
	position = copy.position;
	adress = copy.adress;
	phone = copy.phone;
	std::cout << "����� ������������ ����������� worker" << std::endl;
}

worker::worker(std::string fami, std::string namei, std::string onamei, std::string positioni, std::string adressi, std::string phonei) {
	this->fam = fami;
	this->name = namei;
	this->oname = onamei;
	this->position = positioni;
	this->adress = adressi;
	this->phone = phonei;
	std::cout << "����� ������������ c ���������� worker" << std::endl;
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
		std::cout << "�������� ����" << std::endl;
		break;
	}
}

void worker::setpar()
{
	std::cin.ignore(32767, '\n');
	std::cout << "������� ������� ��������" << std::endl;
	getline(std::cin, fam);
	std::cout << "������� ��� ��������" << std::endl;
	std::getline(std::cin, name);
	std::cout << "������� �������� ��������" << std::endl;
	std::getline(std::cin, oname);
	std::cout << "������� ��������� ��������" << std::endl;
	getline(std::cin, position);
	std::cout << "������� �����" << std::endl;
	std::getline(std::cin, adress);
	std::cout << "������� �������" << std::endl;
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
	std::cout << "���������� � ������:" << std::endl;
	std::cout << "������� - " << fam << std::endl;
	std::cout << "��� - " << name << std::endl;
	std::cout << "�������� - " << oname << std::endl;
	std::cout << "��������� - " << position << std::endl;
	std::cout << "����� - " << adress << std::endl;
	std::cout << "������� - " << phone << std::endl;
	std::cout << std::endl;

}

void worker::save()
{

}
