#include <iostream>
#include<Windows.h>
#include "Point.h"
#include "FileOperation.h"

using namespace std;

int main()
{setlocale(LC_ALL, "");
    Point point;
    Point point1(6, 6, 8);
    point.setX(1);
    point.setX(1);
    point.setX(0);

    point1.Output();
    point.SavePoint();
    point1.SavePoint();

    point.LoadPoint();
    

 
}