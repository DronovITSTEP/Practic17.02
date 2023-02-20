#include "Area.h"

int Area::count{ 0 };

void Area::AreaRectangle(int width, int height) {
	cout << "Площадь прямоугольника = " << width * height
		<< endl;
	count++;
}
void Area::AreaSquare(int width) {
	cout << "Площадь квадрата = " << width * width << endl;
	count++;
}
void Area::AreaTriangle(int a, int b){
	cout << "Площадь треугольника = " << .5 * a * b << endl;
	count++;
}
void Area::AreaTriangle(int a, int b, int c){
	auto p = (a + b + c) / 2;
	cout << "Площадь треугольника = "
		<< sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
	count++;
}
