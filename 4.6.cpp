// Example 2-> Dynamic Memory Deallocation
// Program using array

#include<iostream>
using namespace std;

int main()
{
	int *p,i,n;
	cout<<"Enter the value of n -> "<<endl;
	cin>>n;
	
	p=new int[n];
	for(i=0;i<n;i++)
	{
		cout<< "Enter the value one by one => "<<endl;
		cin>>p[i];
	}
	
	for(i=0;i<n;i++)
	{
		cout<<"The Number Entered Are -> "<<endl;
		cout<<p[i]<<endl;
	}
	
	delete [] p; // De-allocating memroy occupied by an integer array
	
	return 0;
	
}
