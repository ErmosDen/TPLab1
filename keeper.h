#pragma once
#include "cars.h"
#include "worker.h"
#include "funiture.h"

class keeper
{
public:
	keeper();
	~keeper();
	keeper(int size);
	void push(fabric* f);
	fabric* operator[] (const int index);
	void save();
	void load();
	int getsize();
	void rm();
private:
	int size;
	elem* head;
};

