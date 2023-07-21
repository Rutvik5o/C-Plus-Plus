// Example -1 -> Dynamic Memroy Deallocation 
// Program of Single Integer

#include<iostream>
using namespace std;

int main()
{
	int *p=new int;
	*p=20;
	
	cout<<"The Value => "<<*p<<endl;
	
	delete p; // Deallocating memory occupied by a single integer
}
