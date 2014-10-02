#include <iostream>
using namespace std;
class Base1
{
public:
	Base1() { cout << "Base1()" << endl; };
	virtual ~Base1() { cout << "~Base1()" << endl; };
	void speakClearly() { cout << "speakClearly()" << endl; };
protected:
	float data_Base1;
};

class Base2 : public Base1
{
public:
       	Base2() { cout << "Base2()" << endl; };
	virtual ~Base2() { cout << "~Base2()" << endl; };
};

class Base3 : public Base1
{
public:
       	Base3() { cout << "Base3()" << endl; };
	virtual ~Base3() { cout << "~Base()" << endl; };
};

class Derived : public Base1, public Base2
{
public:
	Derived() { cout << "Derived()" << endl; };
	virtual ~Derived() { cout << "~Derived()" << endl; };
protected:
	float data_Derived;
};

int main(int argc, char *argv[])
{
	Derived *ptr = new Derived;
	delete ptr;
	ptr = NULL;
	cout << "Hello world!" << endl;
	return 0;
}
