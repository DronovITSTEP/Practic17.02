#include <iostream>

#define M 3

using namespace std;

//auto f() {
//        return 6;  
//}
//
//int main()
//{
//    /*auto a1 = 8;
//    decltype (a1) a2 = a1;
//
//    typedef decltype (a1) ADF;
//
//    ADF a3 = 7;*/
//
//    int y = 10;
//    int& r = y;
//    auto x = r;
//
//    int y1 = 10;
//    const int& r1 = y;
//    auto x1 = r;
//
//    int y2 = 10;
//    int& r2 = y;
//    decltype (r2) x2 = r2;
//
//    decltype (f()) v;
//}
//
//double myF(double, int);
//
//auto myF(double, int) -> double;
//
//int(*myFunc(int arr[][5], int n))[5];
//
//
//
//int (*(*myFunc2())(int arr[][5], int n))[5]{}
//
//auto myFunc(int arr[][5], int n) -> int(*)[5] {
//    return &arr[2];
//}
//
//auto myFunc2() -> int(*(*)(int arr[][5], int n))[5]{
//    return myFunc;
//}
//
//
//auto func(float a, int b, int c) -> decltype((a + b) / c) {
//    return (a + b) / c;
//}

//int main() {
//	cout << M << endl;
//#undef M
//	
//#define M 8
//	cout << M << endl;
//}
//
////#if 5 - 5
////int main() { cout << 1; }
////#else
////int main() { cout << 2; }
////#endif
////#undef M
//
//#ifndef M
//int main() { cout << 1; }
//#else
//int main() { cout << 2; }
//#endif

void f(int a, int b) {
	cout << a + b << endl;
}

#if M == 0
int main() {
	f(4, 6);
}
#elif M == 1
int main() {
	f(-4, 6);
}
#elif M == 2
int main() {
	f(0, 0);
}
#elif M == 3
int main() {
	f(-4, -6);
}
#elif M == 4
int main() {
	f(4, 6);
}
#elif M == 5
int main() {
	f(4, 6);
}
#endif
	