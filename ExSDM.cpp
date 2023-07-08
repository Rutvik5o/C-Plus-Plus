// Example of Static Data members
#include<iostream>
using namespace std;

class hey{
	private:
		static int x; // here we can't initialize static data member
		
	public:
		static void fun() // static member function defination
		{
			cout<<"Value of x is:"<<x<<endl;
		}
		
};

int hey::x=10; // static data member initialization here
int main()
{
	hey h1;
	h1.fun();
	return 0;
 } 
