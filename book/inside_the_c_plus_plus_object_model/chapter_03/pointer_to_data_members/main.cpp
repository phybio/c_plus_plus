#include <iostream>
#include <stdio.h>

using namespace std;
class Point3d 
{
public:
	Point3d();
	virtual ~Point3d();
public:
	static Point3d origin;
	float x,y,z;
};

int main(int argc, char *argv[])
{
	printf("&Point3d::x = %p; %d\n", &Point3d::x, &Point3d::x);
	printf("&Point3d::y = %p; %d\n", &Point3d::y, &Point3d::y);
	printf("&Point3d::z = %p; %d\n", &Point3d::z, &Point3d::z);
	
	float Point3d::*p1 = 0;
	float Point3d::*p2 = &Point3d::x;
	printf("&Point3d::p2 = %p; %d\n", p2, p2);
	cout << "Hello world!" << endl;
	return 0;
}
