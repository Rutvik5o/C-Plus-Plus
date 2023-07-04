// this is example of how to define a function outside of class
#include<iostream>
using namespace std;

class simple{
	int a;
	int b;
	
	public:
		int add(int,int);
		
		
};

int simple::add(int x,int y)
{
	int z;
	a=x;
	b=y;
	z=a+b;
	return z;
}

int main()
{
	simple e;
	cout<<"Value is:"<<
	e.add(100,100)<<endl;
	return 0;
}
