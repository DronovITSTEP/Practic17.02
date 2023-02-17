#include <iostream>
#include "Point.h"


using namespace std;


int main()
{
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