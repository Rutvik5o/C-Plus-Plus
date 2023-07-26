// Modes Of Inheritence -> Public
// Deriving from the existing class 'Public':
// Including Non-Member Function

#include<iostream>
using namespace std;

class A  // -> Base Class
{
	private:
		int x;
		
	public:
		int y;
		
	protected:
		int z;
};

class B:public A // Derived Class
{
	public:
		void fact1()
		{
			// x=1; //Error
			 y=3;
			 z=4;
			 
			 cout<<"Y-> "<<y<<endl<<"Z-> "<<z<<endl;
		}
};

class C:public A // Subsequnetly derived class
{
	public:
		void fact2()
		{
			// x=1; //Error
			y=2;
			z=3;
			cout<<"Y-> "<<y<<endl<<"Z-> "<<z<<endl;
		}
};

int abc(B &bl) // Non-Member Function
{
    // b1.x=1; // Error, private member x cannot be accessed
    bl.y = 3; // Accessing the protected member y using the reference bl
    cout << "Y-> " << bl.y;
    // b1.z=2; // Error, protected member z cannot be accessed
}

int main()
{
	A a1;
	B b1;
	C c1;
	
	b1.fact1();
	c1.fact2();
	return 0;
}

