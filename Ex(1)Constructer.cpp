// Example of Constructer

#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		 
		  int get(void);
		  A() // constructor defined within the class declaration
		  {
		  	a=5;
		  }
};

int A::get()
{
	return a;
}

int main()
{
	A a1;
	cout<<a1.get()<<endl;
	return 0;
}
