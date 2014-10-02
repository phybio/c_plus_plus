#include <iostream>
using namespace std;
class Base1
{
public:
	Base1() { cout << "Base1()" << endl; };
	virtual ~Base1() { cout << "~Base1()" << endl; };
	virtual void speakClearly() { cout << "speakClearly()" << endl; };
	virtual Base1 *clone() const {};
protected:
	float data_Base1;
};

class Base2
{
public:
	Base2() { cout << "Base2()" << endl; };
	virtual ~Base2() { cout << "~Base2()" << endl; };
	virtual void mumble() { cout << "mumble()" << endl; };
	virtual Base2 *clone() const {};
protected:
	float data_Base2;
};

class Derived : public Base1, public Base2
{
public:
	Derived() { cout << "Derived()" << endl; };
	virtual ~Derived() { cout << "~Derived()" << endl; };
	virtual Derived *clone() const {};
protected:
	float data_Derived;
};

int main(int argc, char *argv[])
{
	Base2 *ptr = new Derived;
//	ptr->speakClearly();
	ptr->mumble();
	delete ptr;
	ptr = NULL;
	cout << "Hello world!" << endl;
	return 0;
}
