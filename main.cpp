
#include <iostream>
#include <Windows.h>
#include <clocale>
#include "keeper.h"
#include "cars.h"
#include "funiture.h"
#include "worker.h"

int main(void)
{
    int choose1, choose2;
    int id1,id2;
    std::string znach;
    keeper keep;
    fabric* fab;
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    do {
        std::cout << "1 Добавить на фабрику " << std::endl;
        std::cout << "2 Изменить на фабрике" << std::endl;
        std::cout << "3 Удалить с фабрики " << std::endl;
        std::cout << "4 Вывести всю базу данных " << std::endl;
        std::cout << "5 Сохранить базу данных в файле " << std::endl;
        std::cout << "6 Заргузить базу данных из файла " << std::endl;
        std::cout << "0 Выход " << std::endl;
        std::cin >> choose1;
        std::cin.ignore(32767, '\n');
        switch (choose1)
        {
        case 1:
            std::cout << "Что неоюходимо добавить?" << std::endl;
            std::cout << "1 Мебель" << std::endl;
            std::cout << "2 Машина" << std::endl;
            std::cout << "3 Работник" << std::endl;
            std::cin >> choose2;
            switch (choose2) {
            case 1:
                funiture * funit;
                funit = new funiture;
                fab = funit;
                funit->setpar();
                keep.push(fab);
                break;
            case 2:
                cars * car;
                car = new cars;
                fab = car;
                car->setpar();
                keep.push(fab);
                break;
            case 3:
                worker * work;
                work = new worker;
                fab = work;
                work->setpar();
                keep.push(fab);
                break;
            default:
                std::cout << "неверны ввод";
                break;
            }
            break;
        case 2:
            std::cout << "Какую запись изменить, всего записей - " << keep.getsize() - 1  << " нумерация с 0" << std::endl;
            std::cin >> id1;
            std::cin.ignore(32767, '\n');
            keep[id1]->getpar();
            std::cout << "какой параметр изменить " << std::endl;
            std::cin >> id2;
            std::cin.ignore(32767, '\n');
            std::cout << "на что изменить" << std::endl;
            getline(std::cin, znach);
            std::cin.ignore(32767, '\n');
            keep[id1]->change(id2, znach);
            break;
        case 3:
            std::cout << "Какую запись удалить, всего записей - " << keep.getsize() - 1 << " нумерация с 0" << std::endl;
            std::cin >> id1;
            std::cin.ignore(32767, '\n');
            keep.rm(id1);
            break;
        case 4:
            for (int i = 0; i < keep.getsize(); i++)
            {
                keep[i]->getpar();
            }
            break;
        case 5:
            keep.save();
            break;
        case 6:
            keep.load();
            break;
        case 0:
            break;
        default:
            std::cout << "неверны ввод" << std::endl;
            break;
        }
    } while (choose1 != 0);
}

