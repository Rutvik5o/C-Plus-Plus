// Member Functions with default arguments
#include<iostream>
using namespace std;

class addition
{
	public:
		void add(int a, int b= 2);    // default arguments
		
};

void addition :: add(int a,int b)
{
	int c;
	c=a + b;
	cout<<c<<endl;
}

int main()
{
	addition a1;
	a1.add(5,6);
	a1.add(48);
	return 0;
	
}
