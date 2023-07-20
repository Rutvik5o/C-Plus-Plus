// There a Example 1 of Dynamic memory allocation using "new"
// P-> For Address
// *P-> For value

#include<iostream>
using namespace std;

int main()
{
	int *p;
	p= new int; // allocating memory for a single integer
	*p=20;      // Other way-> int *p=new int(20);
	
	
	cout<<"The Address obtained is= "<<p<<endl;
	cout<<"The Value is = "<<*p<<endl;
	
	cout<<"P++ -> "<<p+1<<endl;
	cout<<"P -> "<<*p+1<<endl;
	
	return 0;
}
