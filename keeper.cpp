#include "keeper.h"

keeper::keeper() : size(0), head(NULL) {}
keeper::keeper(int size) : head(NULL) { this->size = size; }
keeper::~keeper()
{
	if (head != NULL) {
		elem* buffer;
		while (head->next != NULL)
		{
			buffer = head;
			head = head->next;
			buffer->c_data->~fabric();
			delete(buffer);
		}
		head->c_data->~fabric();
		delete(head);
	}
}

void keeper::push(fabric* f) {
	elem* newElem;
	newElem = new elem;
	if (size == 0) 
	{
		newElem->c_data = f;
		size++;
		newElem->next = 0;
		head = newElem;
	}
	else 
	{
		elem *buf = head;
		while (buf->next != NULL)
		{
			buf = buf->next;
		}
		newElem->c_data = f;
		newElem->next = 0;
		buf->next = newElem;
		size++;
	}
	
}

fabric* keeper::operator[] (const int index)
{
	elem* buf = head;
	if (((index) >= size) || (index < 0)) {
		std::cout << "Неверный индекс" << std::endl;
	}
	else {
		for (int i = 0; i < index; i++) {
			buf = buf->next;
		}
		return (buf->c_data);
	}
}

void keeper::save() 
{
	std::ofstream fout;
	fout.open("fabric.txt", std::ios_base::out);
	if (!fout.is_open()) 
	{
		throw "Ошибка открытия файла";
	}
	else 
	{
		fout << size << std::endl;
		fout.close();
	}
	elem* buf = head;
	for (int i = 0; i < size; i++)
	{
		buf->c_data->save();
		buf = buf->next;
	}
}

void keeper::load() 
{
	if (head != NULL) {
		elem* buffer;
		while (head->next != NULL)
		{
			buffer = head;
			head = head->next;
			buffer->c_data->~fabric();
			delete(buffer);
		}
		head->c_data->~fabric();
		delete(head);
		size = 0;
	}
	std::ifstream fin;
	int typeOfData;
	int sizeOfFile;
	fabric *fab;
	fin.open("fabric.txt");
	if (!fin.is_open())
	{
		throw "Ошибка открытия файла";
	}
	else
	{
		fin >> sizeOfFile;
		for (int i = 0; i < sizeOfFile; i++)
		{
			fin >> typeOfData;
			fin.ignore(32767, '\n');
			if (typeOfData == 1)
			{
				std::string mark;
				std::string model;
				std::string number;
				getline(fin, mark);
				getline(fin, model);
				getline(fin, number);
				cars* car;
				car = new cars(mark,model,number);
				fab = car;
				push(fab);
			}
			if (typeOfData == 2)
			{
				std::string fam;
				std::string name;
				std::string oname;
				std::string position;
				std::string adress;
				std::string phone;
				getline(fin, fam);
				getline(fin, name);
				getline(fin, oname);
				getline(fin, position);
				getline(fin, adress);
				getline(fin, phone);
				worker* work;
				work = new worker(fam, name, oname, position, adress, phone);
				fab = work;
				push(fab);
			}
			if (typeOfData == 3)
			{
				std::string type;
				std::string h;
				std::string w;
				std::string l;
				std::string color;
				std::string colorCode;
				std::string material;
				std::string price;
				getline(fin, type);
				getline(fin, h);
				getline(fin, w);
				getline(fin, l);
				getline(fin, color);
				getline(fin, colorCode);
				getline(fin, material);
				getline(fin, price);
				funiture* funit;
				funit = new funiture(type, atoi(h.c_str()), atoi(w.c_str()), atoi(l.c_str()), color, atoi(colorCode.c_str()), material, atoi(price.c_str()));
				fab = funit;
				push(fab);
			}

		}

	}
}

int keeper::getsize() 
{
	return size;
}

int keeper::getsizeOfFuniture()
{
	return sizeOfFuniture;
}

int keeper::getsizeOfCars()
{
	return sizeOfCars;
}

int keeper::getsizeOfWorker()
{
	return sizeOfWorker;
}

void keeper::rm(int index) 
{
	elem* buf = head;
	elem* buf1;
	if (size == 0) {
		std::cout << "Нечего удалять" << std::endl;
		return;
	}
	if (((index) >= size) || (index < 0)) {
		std::cout << "Неверный индекс" << std::endl;
	}
	
	else {
		if (buf->next == NULL) {
			std::cout << "удаляется последняя и единственная запись"<< std::endl;
			buf->c_data->~fabric();
			size--;
			return;
		}
		if (index == 0) 
		{
			head = buf->next;
			buf->c_data->~fabric();
			size--;
			return;
		}
		for (int i = 0; i < index - 1; i++) {
			buf = buf->next; //Переходим на элемент перед удаляемым
		}
		buf1 = buf->next; //переходим на удаляемый элемент
		buf->next = buf1->next;//присавеваем указатель на следующий
		buf1->c_data->~fabric();
		size--;
	}
}