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

inline void sample::initialize(int i, int j)
{
	x=i;
	y=j;
}
inline void sample ::display()
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
