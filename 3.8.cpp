// const keyword program -> Program give error

#include<iostream>
using namespace std;

class simple
{
	 int x;
	 
	 public:
	 	void set_data(int c)
	 	
	 	{
	 		x=c;
		}
		
		int get_data() const // constant member function
		{
			x++; /// Error while attempting to modify the data member
			return 0;
		}
};

int main()
{
	simple b1;
	b1.set_data(5);
	b1.get_data();
	return 0;
}
