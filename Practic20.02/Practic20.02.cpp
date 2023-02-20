#include <iostream>
#include "Area.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "");
    Area::AreaRectangle(5, 4);
    Area::AreaSquare(5);
    Area::AreaTriangle(5, 8);
    Area::AreaTriangle(5, 8, 9);

    cout << Area::GetCount() << endl;
    Area a;
    cout << a.GetCount2() << endl;

}