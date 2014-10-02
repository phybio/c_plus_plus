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

class Base2
{
public:
	Base2() { cout << "Base2()" << endl; };
	virtual ~Base2() { cout << "~Base2()" << endl; };
	virtual void mumble() { cout << "mumble()" << endl; };
protected:
	float data_Base2;
};


class Base3 : public Base1
{
public:
       	Base3() { cout << "Base3()" << endl; };
	virtual ~Base3() { cout << "~Base3()" << endl; };
};

class Base4 : public Base2
{
public:
       	Base4() { cout << "Base4()" << endl; };
	virtual ~Base4() { cout << "~Base4()" << endl; };
};

class Derived : public Base3, public Base4
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
