#include "Area.h"

int Area::count{ 0 };

void Area::AreaRectangle(int width, int height) {
	cout << "������� �������������� = " << width * height
		<< endl;
	count++;
}
void Area::AreaSquare(int width) {
	cout << "������� �������� = " << width * width << endl;
	count++;
}
void Area::AreaTriangle(int a, int b){
	cout << "������� ������������ = " << .5 * a * b << endl;
	count++;
}
void Area::AreaTriangle(int a, int b, int c){
	auto p = (a + b + c) / 2;
	cout << "������� ������������ = "
		<< sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
	count++;
}
