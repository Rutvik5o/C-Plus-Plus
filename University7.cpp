// University-7

// Write a C++ program to swap the value of private data membrs from
// different classes.

#include<iostream>
using namespace std;

class class1
{
	int no;
	friend void swap();
};

class class2
{
	int no;
	friend void swap();
};

// Function Declaration
void swap();

int main()
{
	swap();  //-> Function call
	return 0;
}

void swap()
{
	class1 obj1;
	obj1.no=10;
	
	class2 obj2;
	obj2.no=20;
	
	cout<<"\nBefore Swapping:\nNumber 1 -> "<<obj1.no;
	cout<<"\nNumber 2 -> "<<obj2.no<<endl;
	
	int temp=obj1.no;
	obj1.no=obj2.no;
	obj2.no=temp;
	
	cout<<"\nAfter Swapping:\nNumber 1 => "<<obj1.no;
	cout<<"\nNumber 2 => "<<obj2.no;
}
