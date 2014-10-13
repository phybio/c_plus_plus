#include <iostream>
#include <string>
using namespace std;

struct A
{
        //implicit conversion to int
        operator int() { return 100; }

};

int main()
{
   A a;
   int i = a;  //ok - implicit conversion
}
