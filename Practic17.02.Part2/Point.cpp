#include "Point.h"
Point::Point(int x, int y1, int z1) {
	this->x = x;
	y = y1;
	z = z1;
}
void Point::Input() {
	cin >> x >> y >> z;
}
void Point::Output() {
	cout << x << " " << y << " " << z;
}

void Point::SavePoint() {
	char path[20];
	gets_s(path);
	FileOperation file{ path};
	file.Save(x, y, z);
}
void Point::LoadPoint() {
	char path[20];
	gets_s(path);
	FileOperation file{ path };
	file.Load();
}