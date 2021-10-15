#pragma once
#include "cars.h"
#include "worker.h"
#include "funiture.h"

class keeper
{
	keeper();
	~keeper();
	void push(fabric* f);
	fabric* operator[] (const int index);
	void save();
	void load();
	int getsize();
private:
	int size;
	elem* head;
};

