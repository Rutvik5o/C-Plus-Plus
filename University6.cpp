/* Write a basic program which shows the use of scope
resolution operator. */

#include<iostream>
using namespace std;

int a=10; // Global Variable

int main()
{
	int a=20; //Local Variable
	
	cout<<"Local Variable a is:"<<a<<endl; // It's print value of local variable.
	cout<<"Global Variable a is:"<<::a<<endl; // It's print value of global variable.
	return 0;
}
