#include <iostream>
using namespace std;
class Base1
{
public:
	Base1() {};
	virtual ~Base1() {};
	virtual int function();
	int define_not_call();
protected:
	float data_Base1;
};

int Base1::function()
{
	cout << "Base1 function." << endl;
	return 1;
}

class Base2
{
public:
	Base2();
	virtual ~Base2();
	virtual int function();
protected:
	float data_Base2;
};

int Base2::function()
{
	cout << "Base2 function." << endl;
}

class Derived : public Base1
{
public:
	Derived() {};
	virtual ~Derived() {};
	int define_not_call();
protected:
	float data_Derived;
};

int main(int argc, char *argv[])
{
	cout << "Hello world!" << endl;
	Derived theDerived;
	theDerived.function();
	return 0;
}
