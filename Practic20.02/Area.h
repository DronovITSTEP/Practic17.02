#pragma once
#include <iostream>
using namespace std;
/*
Создайте класс для подсчета площади геометрических фигур.
Класс должен предоставлять функциональность для подсчета
площади треугольника по разным формулам, площади
прямоугольника, площади квадрата, площади ромба.
Функции-члены для подсчета площади должны быть
реализованы с помощью статических функций-членов.
Также класс должен считать количество подсчетов
площади и возвращать это значение
с помощью статической функции-члена.
*/
class Area
{
private:
	static int count;

public:
	// площадь прямоугольника
	static void AreaRectangle(int width, int height);
	static void AreaSquare(int);
	static void AreaTriangle(int, int);
	static void AreaTriangle(int, int, int);
	static int GetCount() { return count; }
	int GetCount2() { return count; }
};



