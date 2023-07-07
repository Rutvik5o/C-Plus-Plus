// Not a constant function

#include<iostream>
using namespace std;

class sample{
	int x;
	
     public:
     	void set_data(int c) //const -> that the keyword
     	{
     		x=c;
		 }
		 
		int get_data()
		{
			x++;
			
			return x;  // No error whle modifying the data member
		}
};

int main()
{
	sample b;
	b.set_data(5);
	cout<<b.get_data()<<endl;
	return 0;
}
