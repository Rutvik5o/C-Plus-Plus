//Automatic inline function
//Inline Member functions

#include<iostream>
using namespace std;

class sample{
	private:
		int x,y;
		
	public:
		void initialize(int,int);
		void display();
};

void sample::initialize(int i, int j) //automatic inline function
{
	x=i;
	y=j;
}
inline void sample ::display() //automatic inline function
{
	cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
}

int main()
{
	sample s;
	s.initialize(20,30);
	s.display();
	return 0;
}

