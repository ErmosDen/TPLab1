#pragma once
#include <fstream>
#include <string>
#include <iostream>

class fabric
{
	fabric();
	virtual ~fabric();
	virtual void getpar() = 0; //����� ���������� �� �����
	virtual void setpar() = 0; //������ ����������
	virtual void change() = 0; //��������� ����������
	virtual void read(int a, std::string zam) = 0;
	virtual void save() = 0;

};

