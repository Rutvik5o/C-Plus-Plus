// Example-1 Default Constructor

#include<iostream>
using namespace std;

class constructor
{
	public:
	int a,b;
	 
	// Default Constructor
	constructor()
	{
		a=10;
		b=20;
	}
};

int main()
{
	constructor c;  /// Default Constructor called automatically when the object is created
	
	cout<<c.a<<endl<<c.b;
	return 0;
}
