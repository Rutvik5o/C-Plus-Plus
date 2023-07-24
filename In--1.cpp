// Example of Single Inheritance

#include<iostream>
using namespace std;

class Vehicle  // Base Class
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};

// Sub-Class derived from the base class

class Car : public Vehicle
{
};

int main()
{
    Car c1;
    return 0;
}

