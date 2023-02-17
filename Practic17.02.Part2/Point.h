#pragma once
#include <iostream>
#include "FileOperation.h"
using namespace std;

/*
Реализуйте класс “Точка”. Необходимо хранить координаты
x, y, z в переменных-членах класса. Реализуйте функции-члены
класса для ввода данных, вывода данных, реализуйте аксессоры
для доступа к переменным-членам, реализуйте сохранение в
файл и загрузку данных из файла.
*/

class Point
{
private:
	int x;
	int y;
	int z;
public:
	Point(int x, int y1, int z1);
	Point() : x{ 0 }, y{ 0 }, z{0} {}

	void Input();
	void Output();

	void setX(int v) { x = v; }
	void setY(int v) { y = v; }
	void setZ(int v) { z = v; }

	int getX() { return x; }
	int getY() { return y; }
	int getZ() { return z; }

	void SavePoint();
	void LoadPoint();
};

