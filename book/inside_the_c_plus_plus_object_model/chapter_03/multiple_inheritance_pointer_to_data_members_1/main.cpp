#include <iostream>
#include <stdio.h>

using namespace std;

struct Base1 { int val1; };
struct Base2 { int val2; };
struct Derived : Base1, Base2 { int val; };

void func1(int Derived::*dmp, Derived *pd)
{
	pd->*dmp;
}

void func2(Derived *pd)
{
	int Base2::*bmp = &Base2::val2;
	func1(bmp, pd);
}

int main(int argc, char *argv[])
{
	printf("&Base1::val1 = %p; %d\n", &Base1::val1, &Base1::val1);
	printf("&Base2::val2 = %p; %d\n", &Base2::val2, &Base2::val2);
	printf("&Derived::val1 = %p; %d\n", &Derived::val1, &Derived::val1);
	printf("&Derived::val2 = %p; %d\n", &Derived::val2, &Derived::val2);
	printf("&Derived::val = %p; %d\n", &Derived::val, &Derived::val);

//	float Point3d::*p1 = 0;
//	float Point3d::*p2 = &Point3d::x;
//	printf("&Point3d::p2 = %p; %d\n", p2, p2);
	cout << "Hello world!" << endl;
	return 0;
}
