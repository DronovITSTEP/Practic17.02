#pragma once
#include <iostream>
using namespace std;
/*
�������� ����� ��� �������� ������� �������������� �����.
����� ������ ������������� ���������������� ��� ��������
������� ������������ �� ������ ��������, �������
��������������, ������� ��������, ������� �����.
�������-����� ��� �������� ������� ������ ����
����������� � ������� ����������� �������-������.
����� ����� ������ ������� ���������� ���������
������� � ���������� ��� ��������
� ������� ����������� �������-�����.
*/
class Area
{
private:
	static int count;

public:
	// ������� ��������������
	static void AreaRectangle(int width, int height);
	static void AreaSquare(int);
	static void AreaTriangle(int, int);
	static void AreaTriangle(int, int, int);
	static int GetCount() { return count; }
	int GetCount2() { return count; }
};



