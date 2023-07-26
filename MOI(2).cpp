// Modes Of Inheritence -> Protected
// Deriving from the existing class 'Protected':
// Including Non-Member Function

#include<iostream>
using namespace std;

class A       //-> Base Class
{
	private:
		int x;
	
	public:
		int y;
	
	protected:
		int z;
};

class B: protected A // Derived Class
{
	public:
		void fun1()
		{
		  //x=1; // Error
			y=2;
			z=3;
			
			cout<<"Y-> "<<y<<endl<<"Z-> "<<z<<endl;
		}
};

class C:public B // Subsequently derived class
{
	public:
		void fun2()
		{
		//	x=1; // Error
		    y=2;
		    z=3;
		    
		    cout<<"Y-> "<<y<<endl<<"Z-> "<<z<<endl;
		}
};

int abc(B &b1)  //Non-Member function
{
	//b1.x=1; // Error
	//b1.y=2; // Error
	//b3.z=3; // Error
}

int main()
{
	A a1;
	B b2;
	C c3;
	return 0;
}


/*Summary:you can change the values of y and z in both fun1() and fun2() functions since they are protected members
 of their respective classes. However, you cannot change the value of x, y, or z in the int main() function or abc() 
 function due to the protected inheritance and private access specifier in class A.*/





