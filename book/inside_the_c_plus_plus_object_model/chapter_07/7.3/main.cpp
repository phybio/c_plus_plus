#include <iostream>
using namespace std;
class Point 
{
public:
	Point() {};
	Point(const Point&) { cout << "copy constructor" << endl; };
	Point& operator=(const Point&) { cout << "assignment operator" << endl; };

	virtual ~Point() {};
};

int main(int argc, char *argv[])
{
	Point a;
	Point b = a;
	b = a;
	cout << "Hello world!" << endl;
	return 0;
}
