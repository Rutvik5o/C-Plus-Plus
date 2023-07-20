// Example 3- Dynamic Memory Allocation
// When size is not knwon before hand 
// taking size from user

#include<iostream>
using namespace std;

int main()
{
	int *p,i,n;
	
	cout<<"Enteer the value of n -> "<<endl;
	cin>>n;
	
	p=new int[n]; // allocating memory for an array
	
	cout<<"Enter the value one by one -> "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	
	cout<<"The Numbers Entered are -> "<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<p[i]<<endl;
	}
      return 0;
}
