#include "keeper.h"

keeper::keeper() : size(0), head(nullptr) {}
keeper::keeper(int size) : head(nullptr) { this->size = size; }
keeper::~keeper()
{
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

void keeper::push(fabric* f) {
	elem* newHead;
	newHead = new elem;
	if (size == 0) 
	{
		newHead->c_data = f;
		size++;
		newHead->next = 0;
	}
	else 
	{
		newHead->c_data = f;
		newHead->next = head;
		size++;
	}
	head = newHead;
}

fabric* keeper::operator[] (const int index)
{
	elem* buf = head;
	if (((index) >= size) || (index < 0)) {
		std::cout << "Неверный индекс" << std::endl;
	}
	else {
		for (int i = 0; i < size - index - 1; i++) {
			buf = buf->next;
		}
		return (buf->c_data);
	}
}

void keeper::save() 
{
	std::ofstream fout;
}

void keeper::load() 
{

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

void keeper::rm() 
{

}