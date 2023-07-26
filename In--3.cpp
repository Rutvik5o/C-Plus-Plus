//Example -3 -> Multiple Inheritence: 2 Parent 1 Child

#include<iostream>
using namespace std;

class A
{
	public:
		void display()
		{
			cout<<"This is method of A";
		}
};

class B
{
	public:
		void display()
		{
			cout<<"\nThis is method of B";
		}
};

class C:public A,public B
{
	public:
		void show();
};

void C::show()
{
	cout<<"\nChild Class Called";
}

int main()
{
	C Obj1;
//	Obj1.display(); // Causes Ambiguilty
	Obj1.A::display();
	Obj1.B::display();
	Obj1.show();
	return 0;
}
