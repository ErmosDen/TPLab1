#pragma once
#include "cars.h"
#include "worker.h"
#include "funiture.h"
#include "elem.h"
#include <iostream>
#include <fstream>
#include <string>

class keeper
{
public:
	keeper();
	~keeper();
	keeper(int size);

	
	fabric* operator[] (const int index);

	void save();
	void push(fabric* f);
	void load();
	int getsize();
	int getsizeOfFuniture();
	int getsizeOfCars();
	int getsizeOfWorker();
	void rm(int index);
private:
	int size;
	int sizeOfFuniture;
	int sizeOfCars;
	int sizeOfWorker;
	elem* head;
};

