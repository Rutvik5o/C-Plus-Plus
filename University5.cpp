/*Create a function power() to raise a number m to power n.
the function takes a double value for m and int value for n,
and returns the result correctly. Use the default value of 2
for n to make the function calculate squares when this
argument is omitted. Write a main that gets the values of m
and n from the user to test the function. */

#include<iostream>
using namespace std;
float power(float m,int n=2);

int main()
{
	int n;
	float m;
	cout<<"\nEnter a Number:"<<endl;
	cin>>m;
	cout<<"\nAnswer:"<<power(m);
	return 0;
}

float power(float m,int n)
{
	float ans;
	
	for(ans=1;n>0;n--)
	    ans=ans*m;
	return ans;
	
}

