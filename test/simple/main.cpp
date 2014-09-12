#include <iostream>
using namespace std;
class Base1
{
public:
	Base1();
	virtual ~Base1();
	virtual void speakClearly();
	virtual Base1 *clone() const;
	virtual int function();
protected:
	float data_Base1;
};

Base1::Base1()
{

}

#if 0
Base1 *Base1::clone() const
{
	cout << "Base1 clone.";
}
#endif

int Base1::function()
{
	cout << "Base1 function.";
}

class Base2
{
public:
	Base2();
	virtual ~Base2();
	virtual void mumble();
	virtual Base2 *clone() const;
	virtual int function();
protected:
	float data_Base2;
};

Base2::Base2()
{

}

#if 0
Base2 *Base2::clone() const
{
	cout << "Base2 clone.";
}
#endif

int Base2::function()
{
	cout << "Base2 function.";
}

class Derived : public Base1, public Base2
{
public:
	Derived();
	virtual ~Derived();
	virtual Derived *clone() const;
protected:
	float data_Derived;
};

#if 0
Base1 *Derived::clone() const
{
	cout << "Derived clone."; 
}
#endif

int main(int argc, char *argv[])
{
	cout << "Hello world!" << endl;
	Base1 theDerived;
	theDerived.function();
	return 0;
}
