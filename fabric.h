#pragma once
#include <fstream>
#include <string>
#include <iostream>

class fabric
{
	public:
	fabric();
	virtual ~fabric();
	virtual void getpar() = 0; //����� ���������� �� �����
	virtual void setpar() = 0; //������ ����������
	virtual void change(int id, std::string znach) = 0; //��������� ����������
	virtual void save() = 0;

};

