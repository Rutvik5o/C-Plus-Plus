#include<iostream>
using namespace std;

int &large(int&,int&);

int main()
{
	int a,b;
	a=5,b=10;
	int &ref=large(a,b);
	cout<<"\nLarge No:"<<ref;
	
	return 0;
	
}

int &large(int &x,int &y)
{
	if(x>y)
	    return x;
	else 
	    return y;
}
