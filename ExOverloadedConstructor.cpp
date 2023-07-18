// -> Example of Overloaded Constructor
#include<iostream>
using namespace std;


class A{
	public:
		A(int,int);
		A(int);
};


A::A(int x,int y)
{
	cout<<"I am in Constructor With Two Args"<<"->"<<x<<" & "<<y<<endl;
}

A::A(int x)
{
	cout<<"I Am In Constructor With One Args"<<"->"<<x<<endl;
}

int main()
{
	A h1(5,11);
	A h2(10);
	return 0;
}
