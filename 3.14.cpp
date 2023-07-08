// One more example of static data member

#include<iostream>
using namespace std;

class sample
{
	static int a;
	 public:
	 	static void initialize(int x)// static member function  defination 
	 	{
	 		a=x;
	 		
		 }
		 
		void display()
		{
			cout<<a<<endl;
		}
};

int sample::a; // static data member defination

int main()
{
	sample s;
	s.initialize(10);  // --> pass value to parameter
	s.display();
	return 0;
}
