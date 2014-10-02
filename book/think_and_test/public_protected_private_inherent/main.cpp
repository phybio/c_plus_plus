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

class Derived : private Base1
{
public:
	Derived() { cout << "Derived()" << endl; };
	virtual ~Derived() { cout << "~Derived()" << endl; };
	void function(void) { this->data_Base1 = 0.0f; };
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
