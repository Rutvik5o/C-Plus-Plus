//Access the overriden function in the base class from the derive class.
//Example-> Overriding


#include<iostream>
using namespace std;

class BaseClass
{
	public:
		void Display()
		{
			cout<<"\n\tThis is Display() method of BaseClass";
		}
		
		void show()
		{
			cout<<"\n\tThis is Show() method of BaseClass";
		}
};

class DerivedClass: public BaseClass
{
	public:
		
		void Display() //Overriding method- New Working of base class's display method
		
		{
			cout<<"\n\tThis is Display() method of Derived Class";
			BaseClass::Display(); //OVerridden functions in the base class from the derived class
		}
};


int main()
{
	DerivedClass d1;
	d1.Display();
	d1.show();
	return 0;
}

