// Example of Passing class objects to function 
// -> Passing Object By value
// -> Passing Object By Refernce
// -> Passing object By Pointer

#include<iostream>
using namespace std;

class A
{
     public:
     	 int a;
     	 void set(A, int);  // -> call by value
     	 
     	 void set(int, A&); // -> call by Reference
     	 
     	 void set(A*, int); // -> call by pointer
     	 
};

void A :: set(A x, int p)  // -> call by Value
{
	x.a=p;
}

void A :: set(int q,A &y) // -> call by Reference
{
	y.a=q;
}

void A :: set(A* z, int r) // -> call by Pointer
{
	z->a=r;
}

int main()
{
	A a1;
	
	a1.a=10;
	cout<<"Before Passing a-> "<<a1.a<<endl;
	
	a1.set(a1,5); // -> By value
	cout<<"After Passing by value a -> "<<a1.a<<endl;
	
	a1.set(8,a1); // -> By Reference
	cout<<"After Passing by reference a -> "<<a1.a<<endl;
	
	a1.set(&a1, 6); // -> By Pointer
	cout<<"After Passing by pointer a -> "<<a1.a<<endl;
	
	return 0;
}
