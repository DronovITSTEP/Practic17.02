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
	char path[20], mode[3];
	gets_s(path);
	gets_s(mode);
	FileOperation file{ path, mode };
	file.Save(x, y, z);
}
void Point::LoadPoint() {
	char path[20], mode[3];
	gets_s(path);
	gets_s(mode);
	FileOperation file{ path, mode };
	file.Load(x, y, z);
}