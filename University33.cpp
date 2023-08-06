/* University 3-> (3) Write a program to demostrate the use 
   of pure virtual function.  */
   
#include<iostream>
using namespace std;

class abstract
{
	public:
		virtual void func()=0;         //Pure Virtual Function
};

class child: public abstract 
{
	public:
		
		void func()
		{
			cout<<"\nChild Class Function";
		}
};

int main()
{
	child c1;
	c1.func();
	return 0;
}
