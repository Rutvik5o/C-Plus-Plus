// Example-2 Default Constructor

#include<iostream>
using namespace std;

class A
{
	int a;
	int b;
	
	public:
		 A(void);
		 int get(void) const;
};

A::A()
{
	cout<<"I am in Default Constructor"<<endl;
	a=5;
	b=6;
}

int A :: get() const
{
	cout<<a<<endl<<b<<endl;
}

int main()
{
	A a;
	a.get();
	return 0;
}
