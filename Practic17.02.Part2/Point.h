#pragma once
#include <iostream>
#include "FileOperation.h"
using namespace std;

/*
���������� ����� �������. ���������� ������� ����������
x, y, z � ����������-������ ������. ���������� �������-�����
������ ��� ����� ������, ������ ������, ���������� ���������
��� ������� � ����������-������, ���������� ���������� �
���� � �������� ������ �� �����.
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

