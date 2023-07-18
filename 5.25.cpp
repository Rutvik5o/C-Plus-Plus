// -> Example of Destructor
// -> Destructor Defind Outside

#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int);
    ~A();
    int get() const; // You can also remove const if you want to modify x.

};

A::A(int z)
{
    x = z;
    cout << "Constructor Called" << endl;
}

A::~A()
{
    cout << "Destructor Called" << endl;
}

int A::get() const
{
    return x;
}

int main()
{
    A a1(500);
    cout << "Here is the value -> " << a1.get() << endl;
    A a2(1000);
    cout << "Here is another value -> " << a2.get() << endl;
    return 0;
}

