//Overload member funtions within a single class -> Same function within Different Arguments.

#include<iostream>
using namespace std;

class attitude
{
	public:
		void display(void);
		void display(int);
		
};

void attitude :: display( void )
{
	cout<<"Attitude"<<endl;
}

void attitude :: display(int d)
{
	cout<<"Positive A + T + T + I + T + U + D + E -> "<<d<<" % Success\n";
	
}

int main()
{
	attitude a1;
	a1.display() ;
	a1.display( 100 );
	return 0;
}
