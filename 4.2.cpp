// Example 2 -> Dymanic Memory Allocation
// using fixed allocate size

// when size is known before hand

#include<iostream>
#define SIZE 3
using namespace std;


int main()
{
	int *p,i;
	p=new int[SIZE]; // allocatin memory for an array
	
	cout<<"Enter the value one by one -> "<<endl;
	for(i=0;i<SIZE;i++)
	{
		cin>>p[i];
	}
	
	cout<<"The Number Entered are => "<<endl;
	for(i=0;i<SIZE;i++)
	{
		cout<<p[i]<<endl;
	}
	return 0;
}
