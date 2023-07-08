// Mutable Data Member -> Program gives error

#include<iostream>
using namespace std;

class hey{
	
	int a;
	mutable int b;
	
	public:
		void xyz() const
		{ 
		  a++;  //Error: cannot modify the data member
		  b++;  //Legal: can modify mutable data member
		}
	
};

int main()
{
	hey h1;
	h1.xyz();
	return 0;
}

