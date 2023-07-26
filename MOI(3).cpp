// Modes Of Inheritence -> Private
// Deriving from the existing class 'Private':
// Including Non-Member Function

#include<iostream>
using namespace std;

class A  // -> Base class
{
	private:
		int x;
		
	public:
		int y;
		
	protected:
		int z;
};

class B:private A  //-> Derived Class
{
	public:
		void fun1()
		{
		//	x=1; // Error
			y=2;
			z=3;
			
			cout<<"Y-> "<<y<<<<endl<<"Z-> "<<z<<endl;
		}
};

class C:public B //Subsequnetly derived class
{
	public:
		void fun2()
		{
		//	x=2; // Error
		//	y=3; // Error
		//	z=1; // Error
		
		// cout<<"Y-> "<<y<<"Z-> "<<z<<endl;
		}
};

int abc(B &b1) //-> Non-Member Function
{
	//b1.x=1; // Error
	//b2.y=2; // Error
	//b3.z=3; // Error
}

int main()
{
	A a1;
	B b1;
	C c1;
	
	b1.fun1();
	c1.fun2();
	abc(b1);
	return 0;
	
}
