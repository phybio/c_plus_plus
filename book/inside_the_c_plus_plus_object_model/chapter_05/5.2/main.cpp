#include <iostream>
using namespace std;
class Point 
{
public:
	Point(float x = 0.0, float y = 0.0) {};
	Point(const Point&);
	Point& operator=(const Point&);

	virtual ~Point() {};
	virtual float z() { return 0.0; }
protected:
	float _x, _y;
};

class Line 
{
	Point _begin, _end;
public:
	Line(float = 0.0, float = 0.0, float = 0.0, float = 0.0) {};
	Line(const Point&, const Point&);

	void draw();
};

int main(int argc, char *argv[])
{
	Line a;
	cout << "Hello world!" << endl;
	return 0;
}
